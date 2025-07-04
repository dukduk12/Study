// App.js :: HTML 코드를 이용해 홈 화면 그려줌 
import React from 'react';
import './App.css';
// import ImportComponent003 from './R003_ImportComponent'; // import 와 export의 이름이 같은 필요가 없다
import LifecycleEx from './R004_LifecycleEx';

function App(){
  return (
    <div>
      <h1>Start React 200!</h1>
      <p>HTML 적용하기</p>
      <LifecycleEx></LifecycleEx>
    </div>
  )
}
export default App;
