// import { cookies } from 'next/headers'
// import { NextResponse } from 'next/server'
 
// export async function GET(request: Request) {
//   const cookieStore = await cookies()
//   const token = cookieStore.get('token')

//     return NextResponse.json({
//         time: new Date().toISOString(),
//         token: token?.value,
//     }, {
//         status: 200,
//         headers: { 'Set-Cookie': `token=${token?.value}` },
//     })
// }


import { NextResponse, NextRequest } from "next/server";

export async function POST(req: NextRequest){
    const x = await req.json();
    return NextResponse.json({body: x});
}