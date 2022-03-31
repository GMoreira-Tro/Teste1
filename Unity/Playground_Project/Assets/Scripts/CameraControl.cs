using UnityEngine;
using UnityEngine.InputSystem;

public class CameraControl : MonoBehaviour
{
    public new Transform camera;
    public float cameraPitchSpeed = 1;
    public float maxCameraPitch = 30;
    public float minCameraPitch = -30;
    public float rotationSpeed = 1;
    public bool lockCursor = false;

    private void Start()
    {
        if(lockCursor)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
    }

    private void Update()
    {
        UpdateLook();        
    }

    private void UpdateLook()
    {
        Vector2 mouseDelta = new Vector2(Mouse.current.delta.x.ReadValue(), 
            Mouse.current.delta.y.ReadValue());
        mouseDelta *= cameraPitchSpeed * Time.deltaTime;

        float angleX = camera.transform.localEulerAngles.x;
        if(angleX > 180)
        {
            angleX -= 360;
        }
        camera.transform.localEulerAngles = new Vector3(
            Mathf.Clamp(angleX + mouseDelta.y, minCameraPitch, maxCameraPitch),
            camera.transform.localEulerAngles.y,
            camera.transform.localEulerAngles.z);

        transform.Rotate(mouseDelta.x * rotationSpeed * Time.deltaTime * transform.up);
    }
}
