
# LED CLASS

![Build Status](https://github.com/FelipeAlmeida43/led_class/actions/workflows/ci.yml/badge.svg)
![License](https://img.shields.io/github/license/FelipeAlmeida43/led_class)
![GitHub stars](https://img.shields.io/github/stars/FelipeAlmeida43/led_class)
![GitHub forks](https://img.shields.io/github/forks/FelipeAlmeida43/led_class)

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## Project Description

A simple CLASS to manipulate a Light emissor Diode aka led.
## References

 - [C++ Class and Objetcs](https://www.w3schools.com/cpp/cpp_classes.asp)



## Class Documentation

#### Class definition

```http
class LED {
public:
    LED(uint8_t pinNumber);  // Constructor
    void on();               // Turns the LED on
    void off();              // Turns the LED off
    void toggle();           // Toggles the LED state
    bool isOn() const;       // Checks if the LED is ON
};
```
#### Constructor

```http
  LED(uint8_t pinNumber);
```

| Parameter   | Type      | Description                        |
| :---------- | :--------- | :---------------------------------- |
| `pinNumber` | `uint8_t` | **Mandatory**. The pin number of Led |

#### Turn led on

```http
led.on();
```
| Parameter   | Type      | Description                        |
| :---------- | :--------- | :---------------------------------- |
| `None` | `N/A` | Does not receive parameters. |

#### Turn the led off

```http
led.off();
```
| Parameter   | Type      | Description                        |
| :---------- | :--------- | :---------------------------------- |
| `None` | `N/A` | Does not receive parameters. |

#### Toggle the led

```http
led.toggle();
```
| Parameter   | Type      | Description                        |
| :---------- | :--------- | :---------------------------------- |
| `None` | `N/A` | Does not receive parameters. |

#### Led state
```http
led.state();
```
| Parameter   | Type      | Description                        |
| :---------- | :--------- | :---------------------------------- |
| `None` | `N/A` | Returns a boolean state. |

## Autor

- [@felipealmeida43](https://www.github.com/FelipeAlmeida43)

