# Mitigation of Microarchitectural Side-Channel Leakage

**Goal:** To develop a framework for quantitatively analyzing microarchitectural side-channel leakage and guiding mitigation design, enabling systematic exploration of the trade-off between attack success and performance overhead.

## Key Features & Contributions

1. **Multi-Level Defenses**
2. **Attack Simulation**
3. **Performance Analysis**

* **Systematic Framework:** This framework provides a structured workflow that enables users to easily and clearly identify and understand processor vulnerabilities. This approach effectively bridges the technical gap between identifying a vulnerability and implementing a practical RTL-level mitigation.
* **Versatile Application:** Extensible to various vulnerabilities (e.g., Cache, Speculative Execution) and applicable to any user-designed processors.

---

## Find Leakage

Use **SynthLC** to find the leakage. 
> *SynthLC: A tool from Hsiao, Y. et al., “RTL2MμPATH: Multi-μPATH Synthesis with Applications to Hardware Security Verification”, 2024.*

## Classify Leakage

To systematically mitigate threats, we categorize microarchitectural leakages into three main domains:

| Leakage Kind | Instruction | Existing Attack |
| :--- | :--- | :--- |
| **Operation** | `DIV*`, `REM*` | Cryptographic Timing Attacks |
| **Speculative Execution** | `Branch*` | Spectre, Meltdown |
| **Cache** | `Load`, `Store` | Prime&Probe, unXpec |

## Provide Solution

Generate corresponding recommended RTL modifications using `qwen2.5-coder:32b`, based on the specific type of leakage.

## Simulate Attack Methods

Conduct simulated attacks targeting various types of leakages in accordance with current attack models.

## Trade-off Analysis

Generate the following two graphs; users can choose the appropriate defense based on these results:

1. **Noise Level vs. Success Attack Level**
2. **Noise Level vs. Efficiency**
