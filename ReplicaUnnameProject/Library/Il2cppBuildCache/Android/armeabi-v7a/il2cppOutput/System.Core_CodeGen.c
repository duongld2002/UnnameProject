#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000015 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001C TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000020 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000024 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000025 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000026 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000028 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002E System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000047 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000048 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000049 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004C System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000004F TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000051 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000052 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000053 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000054 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000056 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000057 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000058 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000059 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005A System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005C System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005D System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000005E System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000005F System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000060 System.Void System.Linq.Set`1::Resize()
// 0x00000061 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000062 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000063 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000064 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000066 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000067 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000068 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000069 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000006E System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000006F System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000070 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000072 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000073 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000074 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000075 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000076 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000077 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000079 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000007D System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000007F System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000080 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000081 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000082 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000083 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000084 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000085 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000086 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000087 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000008D System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000008E System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000090 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000091 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000092 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000093 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000094 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[148] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[148] = 
{
	4110,
	4110,
	4253,
	4253,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[48] = 
{
	{ 0x02000004, { 76, 4 } },
	{ 0x02000005, { 80, 9 } },
	{ 0x02000006, { 91, 7 } },
	{ 0x02000007, { 100, 10 } },
	{ 0x02000008, { 112, 11 } },
	{ 0x02000009, { 126, 9 } },
	{ 0x0200000A, { 138, 12 } },
	{ 0x0200000B, { 153, 1 } },
	{ 0x0200000C, { 154, 2 } },
	{ 0x0200000D, { 156, 12 } },
	{ 0x0200000E, { 168, 11 } },
	{ 0x02000010, { 179, 8 } },
	{ 0x02000012, { 187, 3 } },
	{ 0x02000013, { 190, 5 } },
	{ 0x02000014, { 195, 7 } },
	{ 0x02000015, { 202, 3 } },
	{ 0x02000016, { 205, 7 } },
	{ 0x02000017, { 212, 4 } },
	{ 0x02000018, { 216, 21 } },
	{ 0x0200001A, { 237, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 3 } },
	{ 0x0600000F, { 41, 2 } },
	{ 0x06000010, { 43, 4 } },
	{ 0x06000011, { 47, 3 } },
	{ 0x06000012, { 50, 4 } },
	{ 0x06000013, { 54, 3 } },
	{ 0x06000014, { 57, 3 } },
	{ 0x06000015, { 60, 1 } },
	{ 0x06000016, { 61, 3 } },
	{ 0x06000017, { 64, 2 } },
	{ 0x06000018, { 66, 3 } },
	{ 0x06000019, { 69, 2 } },
	{ 0x0600001A, { 71, 5 } },
	{ 0x0600002A, { 89, 2 } },
	{ 0x0600002F, { 98, 2 } },
	{ 0x06000034, { 110, 2 } },
	{ 0x0600003A, { 123, 3 } },
	{ 0x0600003F, { 135, 3 } },
	{ 0x06000044, { 150, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[239] = 
{
	{ (Il2CppRGCTXDataType)2, 1988 },
	{ (Il2CppRGCTXDataType)3, 6627 },
	{ (Il2CppRGCTXDataType)2, 3286 },
	{ (Il2CppRGCTXDataType)2, 2838 },
	{ (Il2CppRGCTXDataType)3, 13906 },
	{ (Il2CppRGCTXDataType)2, 2085 },
	{ (Il2CppRGCTXDataType)2, 2845 },
	{ (Il2CppRGCTXDataType)3, 13945 },
	{ (Il2CppRGCTXDataType)2, 2840 },
	{ (Il2CppRGCTXDataType)3, 13913 },
	{ (Il2CppRGCTXDataType)2, 1989 },
	{ (Il2CppRGCTXDataType)3, 6628 },
	{ (Il2CppRGCTXDataType)2, 3302 },
	{ (Il2CppRGCTXDataType)2, 2847 },
	{ (Il2CppRGCTXDataType)3, 13952 },
	{ (Il2CppRGCTXDataType)2, 2102 },
	{ (Il2CppRGCTXDataType)2, 2855 },
	{ (Il2CppRGCTXDataType)3, 14009 },
	{ (Il2CppRGCTXDataType)2, 2851 },
	{ (Il2CppRGCTXDataType)3, 13978 },
	{ (Il2CppRGCTXDataType)2, 788 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)2, 1369 },
	{ (Il2CppRGCTXDataType)3, 5076 },
	{ (Il2CppRGCTXDataType)2, 789 },
	{ (Il2CppRGCTXDataType)3, 63 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)2, 1378 },
	{ (Il2CppRGCTXDataType)3, 5080 },
	{ (Il2CppRGCTXDataType)3, 16258 },
	{ (Il2CppRGCTXDataType)2, 794 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 2523 },
	{ (Il2CppRGCTXDataType)3, 10967 },
	{ (Il2CppRGCTXDataType)3, 16234 },
	{ (Il2CppRGCTXDataType)2, 790 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)3, 1102 },
	{ (Il2CppRGCTXDataType)3, 1103 },
	{ (Il2CppRGCTXDataType)2, 2086 },
	{ (Il2CppRGCTXDataType)3, 7022 },
	{ (Il2CppRGCTXDataType)2, 1920 },
	{ (Il2CppRGCTXDataType)2, 1497 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)2, 1687 },
	{ (Il2CppRGCTXDataType)2, 1597 },
	{ (Il2CppRGCTXDataType)2, 1688 },
	{ (Il2CppRGCTXDataType)3, 5078 },
	{ (Il2CppRGCTXDataType)2, 1921 },
	{ (Il2CppRGCTXDataType)2, 1498 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)2, 1689 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)2, 1690 },
	{ (Il2CppRGCTXDataType)3, 5079 },
	{ (Il2CppRGCTXDataType)2, 1919 },
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)2, 1686 },
	{ (Il2CppRGCTXDataType)2, 1585 },
	{ (Il2CppRGCTXDataType)2, 1586 },
	{ (Il2CppRGCTXDataType)2, 1683 },
	{ (Il2CppRGCTXDataType)3, 5075 },
	{ (Il2CppRGCTXDataType)2, 1496 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)2, 1685 },
	{ (Il2CppRGCTXDataType)3, 5077 },
	{ (Il2CppRGCTXDataType)2, 1495 },
	{ (Il2CppRGCTXDataType)3, 16221 },
	{ (Il2CppRGCTXDataType)3, 4426 },
	{ (Il2CppRGCTXDataType)2, 1257 },
	{ (Il2CppRGCTXDataType)2, 1588 },
	{ (Il2CppRGCTXDataType)2, 1684 },
	{ (Il2CppRGCTXDataType)2, 1760 },
	{ (Il2CppRGCTXDataType)3, 6629 },
	{ (Il2CppRGCTXDataType)3, 6631 },
	{ (Il2CppRGCTXDataType)2, 551 },
	{ (Il2CppRGCTXDataType)3, 6630 },
	{ (Il2CppRGCTXDataType)3, 6639 },
	{ (Il2CppRGCTXDataType)2, 1992 },
	{ (Il2CppRGCTXDataType)2, 2841 },
	{ (Il2CppRGCTXDataType)3, 13914 },
	{ (Il2CppRGCTXDataType)3, 6640 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)2, 1715 },
	{ (Il2CppRGCTXDataType)3, 5087 },
	{ (Il2CppRGCTXDataType)3, 16207 },
	{ (Il2CppRGCTXDataType)2, 2852 },
	{ (Il2CppRGCTXDataType)3, 13979 },
	{ (Il2CppRGCTXDataType)3, 6632 },
	{ (Il2CppRGCTXDataType)2, 1991 },
	{ (Il2CppRGCTXDataType)2, 2839 },
	{ (Il2CppRGCTXDataType)3, 13907 },
	{ (Il2CppRGCTXDataType)3, 5086 },
	{ (Il2CppRGCTXDataType)3, 6633 },
	{ (Il2CppRGCTXDataType)3, 16206 },
	{ (Il2CppRGCTXDataType)2, 2848 },
	{ (Il2CppRGCTXDataType)3, 13953 },
	{ (Il2CppRGCTXDataType)3, 6646 },
	{ (Il2CppRGCTXDataType)2, 1993 },
	{ (Il2CppRGCTXDataType)2, 2846 },
	{ (Il2CppRGCTXDataType)3, 13946 },
	{ (Il2CppRGCTXDataType)3, 7070 },
	{ (Il2CppRGCTXDataType)3, 3626 },
	{ (Il2CppRGCTXDataType)3, 5088 },
	{ (Il2CppRGCTXDataType)3, 3625 },
	{ (Il2CppRGCTXDataType)3, 6647 },
	{ (Il2CppRGCTXDataType)3, 16208 },
	{ (Il2CppRGCTXDataType)2, 2856 },
	{ (Il2CppRGCTXDataType)3, 14010 },
	{ (Il2CppRGCTXDataType)3, 6660 },
	{ (Il2CppRGCTXDataType)2, 1995 },
	{ (Il2CppRGCTXDataType)2, 2854 },
	{ (Il2CppRGCTXDataType)3, 13981 },
	{ (Il2CppRGCTXDataType)3, 6661 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)3, 5092 },
	{ (Il2CppRGCTXDataType)3, 5091 },
	{ (Il2CppRGCTXDataType)2, 2843 },
	{ (Il2CppRGCTXDataType)3, 13916 },
	{ (Il2CppRGCTXDataType)3, 16215 },
	{ (Il2CppRGCTXDataType)2, 2853 },
	{ (Il2CppRGCTXDataType)3, 13980 },
	{ (Il2CppRGCTXDataType)3, 6653 },
	{ (Il2CppRGCTXDataType)2, 1994 },
	{ (Il2CppRGCTXDataType)2, 2850 },
	{ (Il2CppRGCTXDataType)3, 13955 },
	{ (Il2CppRGCTXDataType)3, 5090 },
	{ (Il2CppRGCTXDataType)3, 5089 },
	{ (Il2CppRGCTXDataType)3, 6654 },
	{ (Il2CppRGCTXDataType)2, 2842 },
	{ (Il2CppRGCTXDataType)3, 13915 },
	{ (Il2CppRGCTXDataType)3, 16214 },
	{ (Il2CppRGCTXDataType)2, 2849 },
	{ (Il2CppRGCTXDataType)3, 13954 },
	{ (Il2CppRGCTXDataType)3, 6667 },
	{ (Il2CppRGCTXDataType)2, 1996 },
	{ (Il2CppRGCTXDataType)2, 2858 },
	{ (Il2CppRGCTXDataType)3, 14012 },
	{ (Il2CppRGCTXDataType)3, 7071 },
	{ (Il2CppRGCTXDataType)3, 3628 },
	{ (Il2CppRGCTXDataType)3, 5094 },
	{ (Il2CppRGCTXDataType)3, 5093 },
	{ (Il2CppRGCTXDataType)3, 3627 },
	{ (Il2CppRGCTXDataType)3, 6668 },
	{ (Il2CppRGCTXDataType)2, 2844 },
	{ (Il2CppRGCTXDataType)3, 13917 },
	{ (Il2CppRGCTXDataType)3, 16216 },
	{ (Il2CppRGCTXDataType)2, 2857 },
	{ (Il2CppRGCTXDataType)3, 14011 },
	{ (Il2CppRGCTXDataType)3, 5083 },
	{ (Il2CppRGCTXDataType)3, 5084 },
	{ (Il2CppRGCTXDataType)3, 5095 },
	{ (Il2CppRGCTXDataType)3, 100 },
	{ (Il2CppRGCTXDataType)3, 99 },
	{ (Il2CppRGCTXDataType)2, 1637 },
	{ (Il2CppRGCTXDataType)2, 1711 },
	{ (Il2CppRGCTXDataType)3, 5085 },
	{ (Il2CppRGCTXDataType)2, 1651 },
	{ (Il2CppRGCTXDataType)2, 1729 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)2, 703 },
	{ (Il2CppRGCTXDataType)2, 795 },
	{ (Il2CppRGCTXDataType)3, 98 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)3, 71 },
	{ (Il2CppRGCTXDataType)2, 2625 },
	{ (Il2CppRGCTXDataType)3, 12613 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)2, 1709 },
	{ (Il2CppRGCTXDataType)3, 12614 },
	{ (Il2CppRGCTXDataType)3, 73 },
	{ (Il2CppRGCTXDataType)2, 548 },
	{ (Il2CppRGCTXDataType)2, 791 },
	{ (Il2CppRGCTXDataType)3, 70 },
	{ (Il2CppRGCTXDataType)3, 72 },
	{ (Il2CppRGCTXDataType)3, 4459 },
	{ (Il2CppRGCTXDataType)2, 1271 },
	{ (Il2CppRGCTXDataType)2, 3390 },
	{ (Il2CppRGCTXDataType)3, 12610 },
	{ (Il2CppRGCTXDataType)3, 12611 },
	{ (Il2CppRGCTXDataType)2, 1774 },
	{ (Il2CppRGCTXDataType)3, 12612 },
	{ (Il2CppRGCTXDataType)2, 488 },
	{ (Il2CppRGCTXDataType)2, 792 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)3, 10957 },
	{ (Il2CppRGCTXDataType)2, 933 },
	{ (Il2CppRGCTXDataType)3, 1104 },
	{ (Il2CppRGCTXDataType)3, 10962 },
	{ (Il2CppRGCTXDataType)3, 3603 },
	{ (Il2CppRGCTXDataType)2, 582 },
	{ (Il2CppRGCTXDataType)3, 10958 },
	{ (Il2CppRGCTXDataType)2, 2520 },
	{ (Il2CppRGCTXDataType)3, 1138 },
	{ (Il2CppRGCTXDataType)2, 947 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)3, 3609 },
	{ (Il2CppRGCTXDataType)3, 10959 },
	{ (Il2CppRGCTXDataType)3, 3598 },
	{ (Il2CppRGCTXDataType)3, 3599 },
	{ (Il2CppRGCTXDataType)3, 3597 },
	{ (Il2CppRGCTXDataType)3, 3600 },
	{ (Il2CppRGCTXDataType)2, 1227 },
	{ (Il2CppRGCTXDataType)2, 3353 },
	{ (Il2CppRGCTXDataType)3, 5082 },
	{ (Il2CppRGCTXDataType)3, 3602 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)3, 3601 },
	{ (Il2CppRGCTXDataType)2, 1500 },
	{ (Il2CppRGCTXDataType)2, 3305 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)2, 1692 },
	{ (Il2CppRGCTXDataType)3, 4442 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)3, 5462 },
	{ (Il2CppRGCTXDataType)3, 5463 },
	{ (Il2CppRGCTXDataType)3, 5468 },
	{ (Il2CppRGCTXDataType)2, 1769 },
	{ (Il2CppRGCTXDataType)3, 5465 },
	{ (Il2CppRGCTXDataType)3, 16711 },
	{ (Il2CppRGCTXDataType)2, 1233 },
	{ (Il2CppRGCTXDataType)3, 3618 },
	{ (Il2CppRGCTXDataType)1, 1568 },
	{ (Il2CppRGCTXDataType)2, 3319 },
	{ (Il2CppRGCTXDataType)3, 5464 },
	{ (Il2CppRGCTXDataType)1, 3319 },
	{ (Il2CppRGCTXDataType)1, 1769 },
	{ (Il2CppRGCTXDataType)2, 3388 },
	{ (Il2CppRGCTXDataType)2, 3319 },
	{ (Il2CppRGCTXDataType)3, 5469 },
	{ (Il2CppRGCTXDataType)3, 5467 },
	{ (Il2CppRGCTXDataType)3, 5466 },
	{ (Il2CppRGCTXDataType)2, 424 },
	{ (Il2CppRGCTXDataType)3, 3629 },
	{ (Il2CppRGCTXDataType)2, 561 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	148,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	48,
	s_rgctxIndices,
	239,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
