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
	3731,
	3731,
	3869,
	3869,
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
	{ (Il2CppRGCTXDataType)2, 1779 },
	{ (Il2CppRGCTXDataType)3, 6352 },
	{ (Il2CppRGCTXDataType)2, 2993 },
	{ (Il2CppRGCTXDataType)2, 2554 },
	{ (Il2CppRGCTXDataType)3, 13117 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)2, 2561 },
	{ (Il2CppRGCTXDataType)3, 13156 },
	{ (Il2CppRGCTXDataType)2, 2556 },
	{ (Il2CppRGCTXDataType)3, 13124 },
	{ (Il2CppRGCTXDataType)2, 1780 },
	{ (Il2CppRGCTXDataType)3, 6353 },
	{ (Il2CppRGCTXDataType)2, 3009 },
	{ (Il2CppRGCTXDataType)2, 2563 },
	{ (Il2CppRGCTXDataType)3, 13163 },
	{ (Il2CppRGCTXDataType)2, 1893 },
	{ (Il2CppRGCTXDataType)2, 2571 },
	{ (Il2CppRGCTXDataType)3, 13220 },
	{ (Il2CppRGCTXDataType)2, 2567 },
	{ (Il2CppRGCTXDataType)3, 13189 },
	{ (Il2CppRGCTXDataType)2, 668 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)2, 1161 },
	{ (Il2CppRGCTXDataType)3, 4826 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)3, 63 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)2, 1170 },
	{ (Il2CppRGCTXDataType)3, 4830 },
	{ (Il2CppRGCTXDataType)3, 15378 },
	{ (Il2CppRGCTXDataType)2, 674 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 2289 },
	{ (Il2CppRGCTXDataType)3, 10579 },
	{ (Il2CppRGCTXDataType)3, 15353 },
	{ (Il2CppRGCTXDataType)2, 670 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 774 },
	{ (Il2CppRGCTXDataType)3, 1019 },
	{ (Il2CppRGCTXDataType)3, 1020 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)3, 6747 },
	{ (Il2CppRGCTXDataType)2, 1711 },
	{ (Il2CppRGCTXDataType)2, 1288 },
	{ (Il2CppRGCTXDataType)2, 1387 },
	{ (Il2CppRGCTXDataType)2, 1478 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)2, 1479 },
	{ (Il2CppRGCTXDataType)3, 4828 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)2, 1480 },
	{ (Il2CppRGCTXDataType)2, 1390 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)3, 4829 },
	{ (Il2CppRGCTXDataType)2, 1710 },
	{ (Il2CppRGCTXDataType)2, 1386 },
	{ (Il2CppRGCTXDataType)2, 1477 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)2, 1377 },
	{ (Il2CppRGCTXDataType)2, 1474 },
	{ (Il2CppRGCTXDataType)3, 4825 },
	{ (Il2CppRGCTXDataType)2, 1287 },
	{ (Il2CppRGCTXDataType)2, 1384 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)2, 1476 },
	{ (Il2CppRGCTXDataType)3, 4827 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)3, 15340 },
	{ (Il2CppRGCTXDataType)3, 4176 },
	{ (Il2CppRGCTXDataType)2, 1049 },
	{ (Il2CppRGCTXDataType)2, 1379 },
	{ (Il2CppRGCTXDataType)2, 1475 },
	{ (Il2CppRGCTXDataType)2, 1551 },
	{ (Il2CppRGCTXDataType)3, 6354 },
	{ (Il2CppRGCTXDataType)3, 6356 },
	{ (Il2CppRGCTXDataType)2, 476 },
	{ (Il2CppRGCTXDataType)3, 6355 },
	{ (Il2CppRGCTXDataType)3, 6364 },
	{ (Il2CppRGCTXDataType)2, 1783 },
	{ (Il2CppRGCTXDataType)2, 2557 },
	{ (Il2CppRGCTXDataType)3, 13125 },
	{ (Il2CppRGCTXDataType)3, 6365 },
	{ (Il2CppRGCTXDataType)2, 1433 },
	{ (Il2CppRGCTXDataType)2, 1506 },
	{ (Il2CppRGCTXDataType)3, 4837 },
	{ (Il2CppRGCTXDataType)3, 15326 },
	{ (Il2CppRGCTXDataType)2, 2568 },
	{ (Il2CppRGCTXDataType)3, 13190 },
	{ (Il2CppRGCTXDataType)3, 6357 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)2, 2555 },
	{ (Il2CppRGCTXDataType)3, 13118 },
	{ (Il2CppRGCTXDataType)3, 4836 },
	{ (Il2CppRGCTXDataType)3, 6358 },
	{ (Il2CppRGCTXDataType)3, 15325 },
	{ (Il2CppRGCTXDataType)2, 2564 },
	{ (Il2CppRGCTXDataType)3, 13164 },
	{ (Il2CppRGCTXDataType)3, 6371 },
	{ (Il2CppRGCTXDataType)2, 1784 },
	{ (Il2CppRGCTXDataType)2, 2562 },
	{ (Il2CppRGCTXDataType)3, 13157 },
	{ (Il2CppRGCTXDataType)3, 6795 },
	{ (Il2CppRGCTXDataType)3, 3383 },
	{ (Il2CppRGCTXDataType)3, 4838 },
	{ (Il2CppRGCTXDataType)3, 3382 },
	{ (Il2CppRGCTXDataType)3, 6372 },
	{ (Il2CppRGCTXDataType)3, 15327 },
	{ (Il2CppRGCTXDataType)2, 2572 },
	{ (Il2CppRGCTXDataType)3, 13221 },
	{ (Il2CppRGCTXDataType)3, 6385 },
	{ (Il2CppRGCTXDataType)2, 1786 },
	{ (Il2CppRGCTXDataType)2, 2570 },
	{ (Il2CppRGCTXDataType)3, 13192 },
	{ (Il2CppRGCTXDataType)3, 6386 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)2, 1509 },
	{ (Il2CppRGCTXDataType)3, 4842 },
	{ (Il2CppRGCTXDataType)3, 4841 },
	{ (Il2CppRGCTXDataType)2, 2559 },
	{ (Il2CppRGCTXDataType)3, 13127 },
	{ (Il2CppRGCTXDataType)3, 15334 },
	{ (Il2CppRGCTXDataType)2, 2569 },
	{ (Il2CppRGCTXDataType)3, 13191 },
	{ (Il2CppRGCTXDataType)3, 6378 },
	{ (Il2CppRGCTXDataType)2, 1785 },
	{ (Il2CppRGCTXDataType)2, 2566 },
	{ (Il2CppRGCTXDataType)3, 13166 },
	{ (Il2CppRGCTXDataType)3, 4840 },
	{ (Il2CppRGCTXDataType)3, 4839 },
	{ (Il2CppRGCTXDataType)3, 6379 },
	{ (Il2CppRGCTXDataType)2, 2558 },
	{ (Il2CppRGCTXDataType)3, 13126 },
	{ (Il2CppRGCTXDataType)3, 15333 },
	{ (Il2CppRGCTXDataType)2, 2565 },
	{ (Il2CppRGCTXDataType)3, 13165 },
	{ (Il2CppRGCTXDataType)3, 6392 },
	{ (Il2CppRGCTXDataType)2, 1787 },
	{ (Il2CppRGCTXDataType)2, 2574 },
	{ (Il2CppRGCTXDataType)3, 13223 },
	{ (Il2CppRGCTXDataType)3, 6796 },
	{ (Il2CppRGCTXDataType)3, 3385 },
	{ (Il2CppRGCTXDataType)3, 4844 },
	{ (Il2CppRGCTXDataType)3, 4843 },
	{ (Il2CppRGCTXDataType)3, 3384 },
	{ (Il2CppRGCTXDataType)3, 6393 },
	{ (Il2CppRGCTXDataType)2, 2560 },
	{ (Il2CppRGCTXDataType)3, 13128 },
	{ (Il2CppRGCTXDataType)3, 15335 },
	{ (Il2CppRGCTXDataType)2, 2573 },
	{ (Il2CppRGCTXDataType)3, 13222 },
	{ (Il2CppRGCTXDataType)3, 4833 },
	{ (Il2CppRGCTXDataType)3, 4834 },
	{ (Il2CppRGCTXDataType)3, 4845 },
	{ (Il2CppRGCTXDataType)3, 100 },
	{ (Il2CppRGCTXDataType)3, 99 },
	{ (Il2CppRGCTXDataType)2, 1428 },
	{ (Il2CppRGCTXDataType)2, 1502 },
	{ (Il2CppRGCTXDataType)3, 4835 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)2, 1520 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)2, 606 },
	{ (Il2CppRGCTXDataType)2, 675 },
	{ (Il2CppRGCTXDataType)3, 98 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)3, 71 },
	{ (Il2CppRGCTXDataType)2, 2390 },
	{ (Il2CppRGCTXDataType)3, 12193 },
	{ (Il2CppRGCTXDataType)2, 1425 },
	{ (Il2CppRGCTXDataType)2, 1500 },
	{ (Il2CppRGCTXDataType)3, 12194 },
	{ (Il2CppRGCTXDataType)3, 73 },
	{ (Il2CppRGCTXDataType)2, 473 },
	{ (Il2CppRGCTXDataType)2, 671 },
	{ (Il2CppRGCTXDataType)3, 70 },
	{ (Il2CppRGCTXDataType)3, 72 },
	{ (Il2CppRGCTXDataType)3, 4209 },
	{ (Il2CppRGCTXDataType)2, 1063 },
	{ (Il2CppRGCTXDataType)2, 3097 },
	{ (Il2CppRGCTXDataType)3, 12190 },
	{ (Il2CppRGCTXDataType)3, 12191 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)3, 12192 },
	{ (Il2CppRGCTXDataType)2, 415 },
	{ (Il2CppRGCTXDataType)2, 672 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)3, 10569 },
	{ (Il2CppRGCTXDataType)2, 775 },
	{ (Il2CppRGCTXDataType)3, 1021 },
	{ (Il2CppRGCTXDataType)3, 10574 },
	{ (Il2CppRGCTXDataType)3, 3360 },
	{ (Il2CppRGCTXDataType)2, 507 },
	{ (Il2CppRGCTXDataType)3, 10570 },
	{ (Il2CppRGCTXDataType)2, 2286 },
	{ (Il2CppRGCTXDataType)3, 1055 },
	{ (Il2CppRGCTXDataType)2, 789 },
	{ (Il2CppRGCTXDataType)2, 1023 },
	{ (Il2CppRGCTXDataType)3, 3366 },
	{ (Il2CppRGCTXDataType)3, 10571 },
	{ (Il2CppRGCTXDataType)3, 3355 },
	{ (Il2CppRGCTXDataType)3, 3356 },
	{ (Il2CppRGCTXDataType)3, 3354 },
	{ (Il2CppRGCTXDataType)3, 3357 },
	{ (Il2CppRGCTXDataType)2, 1019 },
	{ (Il2CppRGCTXDataType)2, 3060 },
	{ (Il2CppRGCTXDataType)3, 4832 },
	{ (Il2CppRGCTXDataType)3, 3359 },
	{ (Il2CppRGCTXDataType)2, 1362 },
	{ (Il2CppRGCTXDataType)3, 3358 },
	{ (Il2CppRGCTXDataType)2, 1291 },
	{ (Il2CppRGCTXDataType)2, 3012 },
	{ (Il2CppRGCTXDataType)2, 1404 },
	{ (Il2CppRGCTXDataType)2, 1483 },
	{ (Il2CppRGCTXDataType)3, 4192 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)3, 5203 },
	{ (Il2CppRGCTXDataType)3, 5204 },
	{ (Il2CppRGCTXDataType)3, 5209 },
	{ (Il2CppRGCTXDataType)2, 1560 },
	{ (Il2CppRGCTXDataType)3, 5206 },
	{ (Il2CppRGCTXDataType)3, 15776 },
	{ (Il2CppRGCTXDataType)2, 1025 },
	{ (Il2CppRGCTXDataType)3, 3375 },
	{ (Il2CppRGCTXDataType)1, 1359 },
	{ (Il2CppRGCTXDataType)2, 3026 },
	{ (Il2CppRGCTXDataType)3, 5205 },
	{ (Il2CppRGCTXDataType)1, 3026 },
	{ (Il2CppRGCTXDataType)1, 1560 },
	{ (Il2CppRGCTXDataType)2, 3095 },
	{ (Il2CppRGCTXDataType)2, 3026 },
	{ (Il2CppRGCTXDataType)3, 5210 },
	{ (Il2CppRGCTXDataType)3, 5208 },
	{ (Il2CppRGCTXDataType)3, 5207 },
	{ (Il2CppRGCTXDataType)2, 352 },
	{ (Il2CppRGCTXDataType)3, 3386 },
	{ (Il2CppRGCTXDataType)2, 486 },
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
