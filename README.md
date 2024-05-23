
# Fantasy 8-bit Assembly Language Interpreter

This project is an interpreter for a fantasy 8-bit Assembly language roughly based off the 6502 instruction set. It adds new functionality and features to allow old code to be used on modern computers. Emulation of original hardware is not the goal of this project. This is a WebAssembly port of the original C++ project.

## Features

- **Registers**: X, Y, Accumulator
- **Processor Flags**:
  - C = Bit 0 - carry bit
  - Z = Bit 1 - zero bit
  - I = Bit 2 - interrupt disable bit
  - D = Bit 3 - decimal mode bit
  - B = Bit 4 - break command bit
  - 5 = Bit 5 - expansion bit [not used]
  - V = Bit 6 - overflow bit
  - N = Bit 7 - negative bit

## Instructions Supported

- ADC - Add Memory to Accumulator with Carry
- AND - And Memory to Accumulator
- ASL - Shift Left One Bit (memory or accumulator)
- BCC - Branch if Carry Flag is clear
- BCS - Branch if Carry Flag is set
s- BEQ - Branch on result Zero
- BIT - Test bits in accumulator with memory
- BMI - Branch on result minus
- BNE - Branch if result not zero
- BPL - Branch on result plus
- BRK - Unconditional break
- BVC - Branch on overflow clear
- BVS - Branch on overflow set
- CLC - Clear Carry Flag
- CLD - Clear Decimal Flag
- CLI - Clear Interrupt Flag
- CLV - Clear overflow Flag
- CMP - Compare memory and accumulator
- CPX - Compare Memory and Register X
- CPY - Compare Memory and Register Y
- DEC - Decrement Memory or accumulator
- DEX - Decrement X Register
- DEY - Decrement Y Register
- EOR - Exclusive Or memory or accumulator
- INC - Increment Memory or accumulator
- INX - Increment register X
- INY - Increment register Y
- JMP - Unconditional Jump to Code label or address
- JSR - Jump To Subroutine
- LDA - Load accumulator with constant or memory
- LDX - Load X register with constant or memory
- LDY - Load Y register with constant or memory
- LSR - Shift right one bit
- NOP - No operation 
- ORA - Or accumulator with constant or memory
- PHA - Push accumulator onto the stack
- PHP - Push processor flags onto the stack
- PLA - Pull (pop) accumulator from the stack
- PLP - Pull (pop) processor flags from the stack
- ROL - Rotate bits one left
- ROR - Rotate bits one right
- RTI - Return from interrupt
- RTS - Return from subroutine
- SBC - Subtract memory and borrow from accumulator
- SEC - Set carry flag
- SED - Set decimal flag
- SEI - Set interrupt flag
- STA - Store accumulator in memory
- STX - Store register X in memory
- STY - Store register Y in memory
- TAX - Transfer accumulator to X register
- TAY - Transfer accumulator to Y register
- TSX - Transfer stack pointer to Index X
- TXS - Transfer register X to stack pointer
- TXA - Transfer register X to accumulator
- TYA - Transfer register Y to accumulator

## Command List for the Shell

- **quit**: quit application
- **bin**: Convert to Binary - `bin numbers`
- **build**: Build code - `build`
- **clear**: Clear all lines - `clear`
- **code**: Print out Hex values for Machine language - `code`
- **continue**: Continue execution - `continue`
- **convert**: Convert stored code to tokens - `convert`
- **debug**: Run program with debug information - `debug`
- **display**: Display individual line - `display line`
- **execute**: Execute compiled code - `execute`
- **expr**: Parse Expression for symbols - `expr expression`
- **help**: Print help message - `help`
- **html**: Print code info to HTML - `html "filename"`
- **insert**: Insert a stream of bytes at a starting address - `insert startaddress val1 val2 val3 ....`
- **int**: Output bin/dec/hex for Integer value - `int base values`
- **list**: List source code - `list`
- **memory**: Print memory range - `memory start stop`
- **open**: Open code from file - `open "filename"`
- **peek**: Show memory location - `peek address`
- **peek16**: Peek 16-bit value from memory - `peek16 address value`
- **poke**: Store value in memory location - `poke address value`
- **print**: Print out information about built code - `print`
- **procinfo**: Print registers to console - `procinfo`
- **remove**: Remove individual line - `remove index`
- **save**: Save stored code - `save "filename"`
- **setreg**: Set register to value - `setreg register value`
- **setsym**: Set symbol value in Symbol Table - `setsym variable value`
- **sh**: Execute shell command stored in argument one as a string - `sh "command"`
- **stack**: Display contents of stack - `stack`
- **step**: Make Step in debugger - `step`
- **symbol**: Print individual symbol - `symbol variable`
- **symbols**: Print stored shell variable symbols - `symbols`
- **tokenize**: Tokenize string - `tokenize string`
- **unsym**: Remove symbol from table - `unsym variable`

## Getting Started

### Prerequisites

- Emscripten C++ compiler
- Any modern operating system (Windows, macOS, Linux)
- Web browser

### Building

```sh
cd source
make -j8
```

### Running

To start the interpreter visit http://lostsidedead.biz/ats
or open a web server with python use

```sh
python -m http.server 3000
```

then point your web browser to 
localhost:3000

Use the `help` command within the shell to get a list of all available commands.

## Contributing

Contributions are welcome! Please fork this repository and submit pull requests.

## License

This project is licensed under the MIT License.
