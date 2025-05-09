// export const dynamic = 'force-dynamic';
export const revalidate = 10;

export default async function Home() {
  const res = await fetch("/api/time");
  const data = await res.json();
  return (
    <div>
      <h1>SSG Page</h1>
      <p>Built at: {data? data.time : 'No date'}</p>
    </div>
  );
}
