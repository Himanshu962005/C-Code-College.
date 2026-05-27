<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8"/>
<meta name="viewport" content="width=device-width, initial-scale=1.0"/>
<title>C Code College</title>
<style>
@import url('https://fonts.googleapis.com/css2?family=JetBrains+Mono:wght@400;600;700&family=Orbitron:wght@700;900&family=Inter:wght@300;400;500;600&display=swap');

*{margin:0;padding:0;box-sizing:border-box;}

body{
  background:#060810;
  color:#c9d1e0;
  font-family:'Inter',sans-serif;
  min-height:100vh;
  overflow-x:hidden;
}

.scanline{
  position:fixed;top:0;left:0;width:100%;height:100%;
  background:repeating-linear-gradient(0deg,transparent,transparent 2px,rgba(0,200,255,0.015) 2px,rgba(0,200,255,0.015) 4px);
  pointer-events:none;z-index:0;
}

.wrapper{
  max-width:900px;margin:0 auto;padding:3rem 2rem;
  position:relative;z-index:1;
}

/* HERO */
.hero{
  text-align:center;
  padding:3rem 1rem 2.5rem;
  border:1px solid rgba(0,200,255,0.12);
  border-radius:16px;
  background:rgba(0,200,255,0.02);
  margin-bottom:2rem;
  position:relative;
  overflow:hidden;
}
.hero::before{
  content:'';position:absolute;top:-1px;left:10%;right:10%;height:1px;
  background:linear-gradient(90deg,transparent,#00c8ff,transparent);
}
.hero::after{
  content:'';position:absolute;bottom:-1px;left:10%;right:10%;height:1px;
  background:linear-gradient(90deg,transparent,#00c8ff,transparent);
}

.c-logo{
  display:inline-flex;align-items:center;justify-content:center;
  width:72px;height:72px;
  border:2px solid rgba(0,200,255,0.4);
  border-radius:14px;
  background:rgba(0,200,255,0.06);
  font-family:'Orbitron',monospace;
  font-size:32px;font-weight:900;
  color:#00c8ff;
  margin-bottom:1.5rem;
  letter-spacing:-1px;
}

.hero-title{
  font-family:'Orbitron',monospace;
  font-size:2.6rem;font-weight:900;
  color:#ffffff;
  letter-spacing:2px;
  margin-bottom:0.5rem;
}
.hero-title span{color:#00c8ff;}

.hero-sub{
  font-size:0.95rem;color:#5a6a82;
  font-weight:300;letter-spacing:3px;
  text-transform:uppercase;
  margin-bottom:1.8rem;
}

.badge-row{
  display:flex;flex-wrap:wrap;justify-content:center;gap:10px;
}
.badge{
  display:inline-flex;align-items:center;gap:6px;
  padding:6px 14px;border-radius:6px;
  font-family:'JetBrains Mono',monospace;
  font-size:11px;font-weight:600;
  letter-spacing:0.5px;border:1px solid;
}
.b-cyan{background:rgba(0,200,255,0.08);color:#00c8ff;border-color:rgba(0,200,255,0.25);}
.b-green{background:rgba(0,255,136,0.07);color:#00ff88;border-color:rgba(0,255,136,0.22);}
.b-purple{background:rgba(180,100,255,0.08);color:#b464ff;border-color:rgba(180,100,255,0.25);}
.b-orange{background:rgba(255,160,50,0.08);color:#ffa032;border-color:rgba(255,160,50,0.25);}
.b-red{background:rgba(255,80,80,0.08);color:#ff5050;border-color:rgba(255,80,80,0.22);}

/* DIVIDER */
.divider{
  display:flex;align-items:center;gap:1rem;
  margin:2rem 0 1.2rem;
}
.divider-line{flex:1;height:1px;background:rgba(255,255,255,0.05);}
.divider-label{
  font-family:'Orbitron',monospace;
  font-size:0.65rem;font-weight:700;
  letter-spacing:3px;text-transform:uppercase;
  color:#00c8ff;
  white-space:nowrap;
}

/* ABOUT */
.about-box{
  border:1px solid rgba(0,200,255,0.1);
  border-left:3px solid #00c8ff;
  border-radius:0 10px 10px 0;
  background:rgba(0,200,255,0.03);
  padding:1.2rem 1.4rem;
  font-size:0.92rem;color:#8a9ab5;line-height:1.8;
  margin-bottom:2rem;
}
.about-box strong{color:#c9d1e0;}

/* FEATURE GRID */
.feat-grid{
  display:grid;grid-template-columns:1fr 1fr;gap:12px;
  margin-bottom:2rem;
}
.feat-card{
  background:#0d1017;
  border:1px solid rgba(255,255,255,0.05);
  border-radius:10px;
  padding:16px 18px;
  transition:border-color 0.2s,background 0.2s;
}
.feat-card:hover{
  border-color:rgba(0,200,255,0.25);
  background:rgba(0,200,255,0.03);
}
.feat-icon{font-size:1.3rem;margin-bottom:8px;}
.feat-title{
  font-size:0.88rem;font-weight:600;
  color:#dde6f5;margin-bottom:4px;
}
.feat-desc{
  font-size:0.78rem;color:#4a5568;line-height:1.6;
}
.feat-desc code{
  font-family:'JetBrains Mono',monospace;
  color:#00c8ff;font-size:0.76rem;
}

/* USE LIST */
.use-grid{
  display:grid;grid-template-columns:1fr 1fr;gap:10px;
  margin-bottom:2rem;
}
.use-item{
  display:flex;align-items:flex-start;gap:12px;
  padding:12px 14px;
  background:#0d1017;
  border:1px solid rgba(255,255,255,0.04);
  border-radius:8px;
  font-size:0.85rem;color:#8a9ab5;
}
.use-num{
  font-family:'JetBrains Mono',monospace;
  font-size:0.7rem;font-weight:700;
  color:#00c8ff;
  background:rgba(0,200,255,0.08);
  border:1px solid rgba(0,200,255,0.2);
  border-radius:4px;
  padding:2px 7px;
  flex-shrink:0;
  margin-top:1px;
}

/* CODE BLOCK */
.code-wrap{
  background:#080b10;
  border:1px solid rgba(0,200,255,0.12);
  border-radius:12px;overflow:hidden;
  margin-bottom:2rem;
}
.code-top{
  display:flex;align-items:center;justify-content:space-between;
  padding:10px 16px;
  background:#0c1018;
  border-bottom:1px solid rgba(255,255,255,0.05);
}
.code-dots{display:flex;gap:6px;}
.cd{width:11px;height:11px;border-radius:50%;}
.cd1{background:#ff5f57;}.cd2{background:#febc2e;}.cd3{background:#28c840;}
.code-filename{
  font-family:'JetBrains Mono',monospace;
  font-size:11px;color:#3a4a5f;letter-spacing:0.5px;
}
.code-tag{
  font-family:'JetBrains Mono',monospace;
  font-size:10px;font-weight:700;
  letter-spacing:1.5px;text-transform:uppercase;
  color:#00c8ff;
  background:rgba(0,200,255,0.08);
  border:1px solid rgba(0,200,255,0.18);
  border-radius:4px;padding:3px 8px;
}
pre{
  padding:1.4rem 1.6rem;
  font-family:'JetBrains Mono',monospace;
  font-size:0.83rem;line-height:1.85;
  overflow-x:auto;
}
.ck{color:#ff7b72;}
.cs{color:#a5d6ff;}
.cv{color:#d2a8ff;}
.cc{color:#3a4e63;font-style:italic;}
.cfn{color:#79c0ff;}
.cn{color:#ffa657;}
.ct{color:#00c8ff;}
.cinc{color:#7ee787;}

/* TECH GRID */
.tech-grid{
  display:grid;grid-template-columns:repeat(3,1fr);gap:12px;
  margin-bottom:2rem;
}
.tech-card{
  background:#0d1017;
  border:1px solid rgba(255,255,255,0.05);
  border-radius:10px;
  padding:16px;text-align:center;
  transition:border-color 0.2s;
}
.tech-card:hover{border-color:rgba(0,200,255,0.2);}
.tech-lbl{
  font-size:9px;font-weight:700;
  letter-spacing:2px;text-transform:uppercase;
  color:#2a3a50;margin-bottom:8px;
}
.tech-name{
  font-family:'JetBrains Mono',monospace;
  font-size:0.85rem;font-weight:600;color:#c9d1e0;
  margin-bottom:4px;
}
.tech-sub{font-size:0.73rem;color:#2e3f54;}

/* STEPS */
.steps{display:flex;flex-direction:column;gap:10px;margin-bottom:2rem;}
.step{
  display:flex;align-items:flex-start;gap:14px;
  padding:14px 16px;
  background:#0d1017;
  border:1px solid rgba(255,255,255,0.04);
  border-radius:10px;
}
.step-num{
  font-family:'Orbitron',monospace;
  font-size:0.75rem;font-weight:700;
  color:#060810;
  background:#00c8ff;
  border-radius:6px;
  padding:4px 9px;
  flex-shrink:0;
}
.step-content{}
.step-title{font-size:0.88rem;font-weight:600;color:#dde6f5;margin-bottom:3px;}
.step-desc{font-size:0.78rem;color:#4a5568;line-height:1.6;}
.step-desc code{
  font-family:'JetBrains Mono',monospace;
  color:#00c8ff;font-size:0.75rem;
  background:rgba(0,200,255,0.07);
  padding:1px 5px;border-radius:3px;
}

/* BEST PRACTICES */
.bp-grid{
  display:grid;grid-template-columns:1fr 1fr;gap:10px;
  margin-bottom:2rem;
}
.bp-item{
  display:flex;align-items:center;gap:10px;
  padding:10px 14px;
  background:#0d1017;
  border:1px solid rgba(0,255,136,0.07);
  border-radius:8px;
  font-size:0.82rem;color:#6a7a8a;
}
.bp-check{color:#00ff88;font-size:14px;flex-shrink:0;}

/* CONCLUSION */
.conclusion{
  border:1px solid rgba(0,200,255,0.12);
  border-radius:12px;
  background:rgba(0,200,255,0.02);
  padding:1.6rem 1.8rem;
  text-align:center;
  position:relative;overflow:hidden;
  margin-bottom:2rem;
}
.conclusion::before{
  content:'';position:absolute;top:-1px;left:20%;right:20%;height:1px;
  background:linear-gradient(90deg,transparent,#00c8ff,transparent);
}
.conclusion p{
  font-size:0.92rem;color:#7a8a9e;line-height:1.8;max-width:620px;margin:0 auto;
}
.conclusion p strong{color:#00c8ff;}

/* FOOTER */
.footer{
  text-align:center;
  font-size:0.78rem;color:#2a3a4a;
  padding-top:1.5rem;
  border-top:1px solid rgba(255,255,255,0.04);
  font-family:'JetBrains Mono',monospace;
  letter-spacing:0.5px;
}
.footer span{color:#00c8ff;}
</style>
</head>
<body>
<div class="scanline"></div>
<div class="wrapper">

  <div class="hero">
    <div class="c-logo">C</div>
    <div class="hero-title">C <span>Code College</span></div>
    <div class="hero-sub">Systems · Performance · Low-Level Mastery</div>
    <div class="badge-row">
      <span class="badge b-cyan">⚡ C Language</span>
      <span class="badge b-green">✅ MIT License</span>
      <span class="badge b-purple">🔧 C99 / C11 / C17</span>
      <span class="badge b-orange">🖥️ Cross Platform</span>
      <span class="badge b-red">🔥 Low Level</span>
    </div>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// about</div><div class="divider-line"></div></div>

  <div class="about-box">
    <strong>C</strong> is a general-purpose, procedural programming language created in the early 1970s by Dennis Ritchie at Bell Labs. It is the <strong>foundation of modern computing</strong> — the Linux kernel, Python interpreter, and countless embedded systems are all written in C. This repository is a structured collection of programs covering every core concept from fundamentals to advanced memory management.
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// features</div><div class="divider-line"></div></div>

  <div class="feat-grid">
    <div class="feat-card">
      <div class="feat-icon">🖥️</div>
      <div class="feat-title">Input / Output Operations</div>
      <div class="feat-desc">Console I/O using <code>printf()</code> and <code>scanf()</code> with full format specifier support.</div>
    </div>
    <div class="feat-card">
      <div class="feat-icon">🔀</div>
      <div class="feat-title">Control Flow</div>
      <div class="feat-desc">Decision making with <code>if</code>, <code>else if</code>, and <code>switch</code> statements.</div>
    </div>
    <div class="feat-card">
      <div class="feat-icon">🔁</div>
      <div class="feat-title">Loops & Iteration</div>
      <div class="feat-desc">Efficient iteration using <code>for</code>, <code>while</code>, and <code>do-while</code> loops.</div>
    </div>
    <div class="feat-card">
      <div class="feat-icon">🧩</div>
      <div class="feat-title">Functions & Modularity</div>
      <div class="feat-desc">Clean, reusable function design with proper parameter passing and return types.</div>
    </div>
    <div class="feat-card">
      <div class="feat-icon">📦</div>
      <div class="feat-title">Arrays & Strings</div>
      <div class="feat-desc">Single and multi-dimensional arrays, string manipulation with <code>string.h</code>.</div>
    </div>
    <div class="feat-card">
      <div class="feat-icon">🧠</div>
      <div class="feat-title">Pointers & Memory</div>
      <div class="feat-desc">Direct memory access, pointer arithmetic, and dynamic allocation with <code>malloc</code>.</div>
    </div>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// use cases</div><div class="divider-line"></div></div>

  <div class="use-grid">
    <div class="use-item"><span class="use-num">01</span> System-level and embedded programming</div>
    <div class="use-item"><span class="use-num">02</span> Operating systems, kernels and drivers</div>
    <div class="use-item"><span class="use-num">03</span> Compilers, interpreters and parsers</div>
    <div class="use-item"><span class="use-num">04</span> High-performance algorithm development</div>
    <div class="use-item"><span class="use-num">05</span> Game engines and graphics programming</div>
    <div class="use-item"><span class="use-num">06</span> Foundation for C++, Java, Rust and more</div>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// example</div><div class="divider-line"></div></div>

  <div class="code-wrap">
    <div class="code-top">
      <div class="code-dots"><div class="cd cd1"></div><div class="cd cd2"></div><div class="cd cd3"></div></div>
      <span class="code-filename">main.c</span>
      <span class="code-tag">C</span>
    </div>
    <pre><span class="cinc">#include</span> <span class="cs">&lt;stdio.h&gt;</span>
<span class="cinc">#include</span> <span class="cs">&lt;string.h&gt;</span>

<span class="cc">// Calculate average of an integer array</span>
<span class="ct">float</span> <span class="cfn">average</span>(<span class="ct">int</span> <span class="cn">arr</span>[], <span class="ct">int</span> <span class="cn">size</span>) {
    <span class="ct">int</span> <span class="cv">sum</span> = <span class="cn">0</span>;
    <span class="ck">for</span> (<span class="ct">int</span> <span class="cv">i</span> = <span class="cn">0</span>; <span class="cv">i</span> &lt; <span class="cn">size</span>; <span class="cv">i</span>++) {
        <span class="cv">sum</span> += <span class="cn">arr</span>[<span class="cv">i</span>];
    }
    <span class="ck">return</span> (<span class="ct">float</span>)<span class="cv">sum</span> / <span class="cn">size</span>;
}

<span class="ct">int</span> <span class="cfn">main</span>() {
    <span class="ct">char</span> <span class="cv">name</span>[] = <span class="cs">"Himanshu"</span>;
    <span class="ct">int</span> <span class="cv">marks</span>[] = {<span class="cn">85</span>, <span class="cn">90</span>, <span class="cn">78</span>, <span class="cn">92</span>, <span class="cn">88</span>};
    <span class="ct">int</span> <span class="cv">size</span> = <span class="ck">sizeof</span>(<span class="cv">marks</span>) / <span class="ck">sizeof</span>(<span class="cv">marks</span>[<span class="cn">0</span>]);

    <span class="cfn">printf</span>(<span class="cs">"Student  : %s\n"</span>, <span class="cv">name</span>);
    <span class="cfn">printf</span>(<span class="cs">"Average  : %.2f\n"</span>, <span class="cfn">average</span>(<span class="cv">marks</span>, <span class="cv">size</span>));
    <span class="cfn">printf</span>(<span class="cs">"Status   : %s\n"</span>, <span class="cfn">average</span>(<span class="cv">marks</span>, <span class="cv">size</span>) &gt;= <span class="cn">80</span> ? <span class="cs">"PASS"</span> : <span class="cs">"FAIL"</span>);

    <span class="ck">return</span> <span class="cn">0</span>;
}</pre>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// technologies</div><div class="divider-line"></div></div>

  <div class="tech-grid">
    <div class="tech-card">
      <div class="tech-lbl">Compiler</div>
      <div class="tech-name">GCC · Clang</div>
      <div class="tech-sub">MSVC · TCC</div>
    </div>
    <div class="tech-card">
      <div class="tech-lbl">Standard</div>
      <div class="tech-name">C99 · C11 · C17</div>
      <div class="tech-sub">ANSI C · GNU C</div>
    </div>
    <div class="tech-card">
      <div class="tech-lbl">Debugger</div>
      <div class="tech-name">GDB · Valgrind</div>
      <div class="tech-sub">LLDB · AddressSanitizer</div>
    </div>
    <div class="tech-card">
      <div class="tech-lbl">Build</div>
      <div class="tech-name">Make · CMake</div>
      <div class="tech-sub">Ninja · Autotools</div>
    </div>
    <div class="tech-card">
      <div class="tech-lbl">Editor</div>
      <div class="tech-name">VS Code · Vim</div>
      <div class="tech-sub">CLion · Dev-C++</div>
    </div>
    <div class="tech-card">
      <div class="tech-lbl">Platform</div>
      <div class="tech-name">Linux · Windows</div>
      <div class="tech-sub">macOS · Embedded</div>
    </div>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// getting started</div><div class="divider-line"></div></div>

  <div class="steps">
    <div class="step">
      <span class="step-num">01</span>
      <div class="step-content">
        <div class="step-title">Verify GCC Installation</div>
        <div class="step-desc">Open terminal and run <code>gcc --version</code> to confirm the compiler is ready.</div>
      </div>
    </div>
    <div class="step">
      <span class="step-num">02</span>
      <div class="step-content">
        <div class="step-title">Clone the Repository</div>
        <div class="step-desc"><code>git clone https://github.com/yourusername/C-Code-College.git</code></div>
      </div>
    </div>
    <div class="step">
      <span class="step-num">03</span>
      <div class="step-content">
        <div class="step-title">Compile Your Program</div>
        <div class="step-desc"><code>gcc main.c -o main -Wall -Wextra</code> — always compile with warnings enabled.</div>
      </div>
    </div>
    <div class="step">
      <span class="step-num">04</span>
      <div class="step-content">
        <div class="step-title">Run the Output</div>
        <div class="step-desc">Linux/macOS: <code>./main</code> &nbsp;·&nbsp; Windows: <code>main.exe</code></div>
      </div>
    </div>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// best practices</div><div class="divider-line"></div></div>

  <div class="bp-grid">
    <div class="bp-item"><span class="bp-check">✔</span> Always initialize variables before use</div>
    <div class="bp-item"><span class="bp-check">✔</span> Free dynamically allocated memory</div>
    <div class="bp-item"><span class="bp-check">✔</span> Use meaningful variable names</div>
    <div class="bp-item"><span class="bp-check">✔</span> Check return values of malloc()</div>
    <div class="bp-item"><span class="bp-check">✔</span> Compile with -Wall -Wextra flags</div>
    <div class="bp-item"><span class="bp-check">✔</span> Use const for unchanging values</div>
    <div class="bp-item"><span class="bp-check">✔</span> Avoid global variables when possible</div>
    <div class="bp-item"><span class="bp-check">✔</span> Comment complex logic clearly</div>
  </div>

  <div class="divider"><div class="divider-line"></div><div class="divider-label">// conclusion</div><div class="divider-line"></div></div>

  <div class="conclusion">
    <p><strong>C</strong> is not just a programming language — it is the <strong>DNA of modern software</strong>. From the Linux kernel to embedded microcontrollers, from game engines to network protocols, C powers the invisible infrastructure the world runs on. Master it, and you master the machine itself.</p>
  </div>

  <div class="footer">
    built by <span>Himanshu</span> · C Code College · MIT License
  </div>

</div>
</body>
</html>
