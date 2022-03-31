using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MainMovement : MonoBehaviour
{
    public float movingSpeed = 1f;
    public float rotationSpeed = 1f;

    private Mainmovement mainMovement;

    private void Start()
    {
        mainMovement = new Mainmovement();
        mainMovement.Main.Enable();
    }
    private void Update()
    {
        Move();
        Rotate();
    }
    public void Move()
    {
        float buttonValue = mainMovement.Main.Move.ReadValue<float>();
        transform.Translate(buttonValue * movingSpeed * Time.deltaTime * transform.forward
            , Space.World);
    }
    public void Rotate()
    {
        float buttonValue = mainMovement.Main.Rotate.ReadValue<float>();
        transform.Rotate(buttonValue * rotationSpeed * Time.deltaTime * transform.up);
    }
}
