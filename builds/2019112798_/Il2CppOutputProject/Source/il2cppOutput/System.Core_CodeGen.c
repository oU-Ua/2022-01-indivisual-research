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
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000029 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000031 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000032 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000050 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000054 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000056 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005C TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000065 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006E TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000078 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000081 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000087 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000088 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008A TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008C System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008D System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008E System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000090 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000091 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000092 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000093 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000094 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000095 System.Void System.Linq.Set`1::Resize()
// 0x00000096 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000097 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000098 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000099 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009B System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009E System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000009F TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A1 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A3 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A4 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A5 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A6 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A9 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AA System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AB System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AC System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AD TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B3 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B6 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000B8 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B9 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BA System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BD System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C4 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C5 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C9 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CA System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CB System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[203] = 
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
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
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
static const int32_t s_InvokerIndices[203] = 
{
	6416,
	6416,
	6638,
	6638,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6319,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
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
static const Il2CppTokenRangePair s_rgctxIndices[66] = 
{
	{ 0x02000004, { 96, 4 } },
	{ 0x02000005, { 100, 9 } },
	{ 0x02000006, { 111, 7 } },
	{ 0x02000007, { 120, 10 } },
	{ 0x02000008, { 132, 11 } },
	{ 0x02000009, { 146, 9 } },
	{ 0x0200000A, { 158, 12 } },
	{ 0x0200000B, { 173, 1 } },
	{ 0x0200000C, { 174, 2 } },
	{ 0x0200000D, { 176, 12 } },
	{ 0x0200000E, { 188, 8 } },
	{ 0x0200000F, { 196, 11 } },
	{ 0x02000010, { 207, 12 } },
	{ 0x02000011, { 219, 12 } },
	{ 0x02000012, { 231, 6 } },
	{ 0x02000013, { 237, 2 } },
	{ 0x02000015, { 239, 8 } },
	{ 0x02000017, { 247, 3 } },
	{ 0x02000018, { 252, 5 } },
	{ 0x02000019, { 257, 7 } },
	{ 0x0200001A, { 264, 3 } },
	{ 0x0200001B, { 267, 7 } },
	{ 0x0200001C, { 274, 4 } },
	{ 0x0200001D, { 278, 23 } },
	{ 0x0200001F, { 301, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 2 } },
	{ 0x0600001A, { 58, 4 } },
	{ 0x0600001B, { 62, 4 } },
	{ 0x0600001C, { 66, 4 } },
	{ 0x0600001D, { 70, 3 } },
	{ 0x0600001E, { 73, 3 } },
	{ 0x0600001F, { 76, 1 } },
	{ 0x06000020, { 77, 1 } },
	{ 0x06000021, { 78, 3 } },
	{ 0x06000022, { 81, 3 } },
	{ 0x06000023, { 84, 2 } },
	{ 0x06000024, { 86, 2 } },
	{ 0x06000025, { 88, 5 } },
	{ 0x06000026, { 93, 3 } },
	{ 0x06000037, { 109, 2 } },
	{ 0x0600003C, { 118, 2 } },
	{ 0x06000041, { 130, 2 } },
	{ 0x06000047, { 143, 3 } },
	{ 0x0600004C, { 155, 3 } },
	{ 0x06000051, { 170, 3 } },
	{ 0x0600009A, { 250, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[303] = 
{
	{ (Il2CppRGCTXDataType)2, 6631 },
	{ (Il2CppRGCTXDataType)3, 25491 },
	{ (Il2CppRGCTXDataType)2, 10434 },
	{ (Il2CppRGCTXDataType)2, 9726 },
	{ (Il2CppRGCTXDataType)3, 43797 },
	{ (Il2CppRGCTXDataType)2, 7293 },
	{ (Il2CppRGCTXDataType)2, 9756 },
	{ (Il2CppRGCTXDataType)3, 43841 },
	{ (Il2CppRGCTXDataType)2, 9739 },
	{ (Il2CppRGCTXDataType)3, 43813 },
	{ (Il2CppRGCTXDataType)2, 6632 },
	{ (Il2CppRGCTXDataType)3, 25492 },
	{ (Il2CppRGCTXDataType)2, 10465 },
	{ (Il2CppRGCTXDataType)2, 9769 },
	{ (Il2CppRGCTXDataType)3, 43857 },
	{ (Il2CppRGCTXDataType)2, 7319 },
	{ (Il2CppRGCTXDataType)2, 9795 },
	{ (Il2CppRGCTXDataType)3, 43999 },
	{ (Il2CppRGCTXDataType)2, 9782 },
	{ (Il2CppRGCTXDataType)3, 43922 },
	{ (Il2CppRGCTXDataType)2, 1159 },
	{ (Il2CppRGCTXDataType)3, 161 },
	{ (Il2CppRGCTXDataType)3, 162 },
	{ (Il2CppRGCTXDataType)2, 3747 },
	{ (Il2CppRGCTXDataType)3, 15926 },
	{ (Il2CppRGCTXDataType)2, 1160 },
	{ (Il2CppRGCTXDataType)3, 171 },
	{ (Il2CppRGCTXDataType)3, 172 },
	{ (Il2CppRGCTXDataType)2, 3762 },
	{ (Il2CppRGCTXDataType)3, 15933 },
	{ (Il2CppRGCTXDataType)3, 48956 },
	{ (Il2CppRGCTXDataType)2, 1200 },
	{ (Il2CppRGCTXDataType)3, 348 },
	{ (Il2CppRGCTXDataType)3, 48962 },
	{ (Il2CppRGCTXDataType)2, 1208 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)2, 7950 },
	{ (Il2CppRGCTXDataType)3, 34617 },
	{ (Il2CppRGCTXDataType)2, 7951 },
	{ (Il2CppRGCTXDataType)3, 34618 },
	{ (Il2CppRGCTXDataType)3, 20932 },
	{ (Il2CppRGCTXDataType)3, 48896 },
	{ (Il2CppRGCTXDataType)2, 1163 },
	{ (Il2CppRGCTXDataType)3, 214 },
	{ (Il2CppRGCTXDataType)3, 48998 },
	{ (Il2CppRGCTXDataType)2, 1211 },
	{ (Il2CppRGCTXDataType)3, 407 },
	{ (Il2CppRGCTXDataType)3, 48913 },
	{ (Il2CppRGCTXDataType)2, 1189 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)2, 1530 },
	{ (Il2CppRGCTXDataType)3, 2973 },
	{ (Il2CppRGCTXDataType)3, 2974 },
	{ (Il2CppRGCTXDataType)2, 7294 },
	{ (Il2CppRGCTXDataType)3, 27603 },
	{ (Il2CppRGCTXDataType)3, 48920 },
	{ (Il2CppRGCTXDataType)2, 1192 },
	{ (Il2CppRGCTXDataType)3, 320 },
	{ (Il2CppRGCTXDataType)2, 5713 },
	{ (Il2CppRGCTXDataType)2, 4036 },
	{ (Il2CppRGCTXDataType)2, 4279 },
	{ (Il2CppRGCTXDataType)2, 4605 },
	{ (Il2CppRGCTXDataType)2, 5714 },
	{ (Il2CppRGCTXDataType)2, 4037 },
	{ (Il2CppRGCTXDataType)2, 4280 },
	{ (Il2CppRGCTXDataType)2, 4606 },
	{ (Il2CppRGCTXDataType)2, 5715 },
	{ (Il2CppRGCTXDataType)2, 4038 },
	{ (Il2CppRGCTXDataType)2, 4281 },
	{ (Il2CppRGCTXDataType)2, 4607 },
	{ (Il2CppRGCTXDataType)2, 4282 },
	{ (Il2CppRGCTXDataType)2, 4608 },
	{ (Il2CppRGCTXDataType)3, 15927 },
	{ (Il2CppRGCTXDataType)2, 5712 },
	{ (Il2CppRGCTXDataType)2, 4278 },
	{ (Il2CppRGCTXDataType)2, 4604 },
	{ (Il2CppRGCTXDataType)2, 2615 },
	{ (Il2CppRGCTXDataType)2, 4260 },
	{ (Il2CppRGCTXDataType)2, 4261 },
	{ (Il2CppRGCTXDataType)2, 4602 },
	{ (Il2CppRGCTXDataType)3, 15925 },
	{ (Il2CppRGCTXDataType)2, 4259 },
	{ (Il2CppRGCTXDataType)2, 4601 },
	{ (Il2CppRGCTXDataType)3, 15924 },
	{ (Il2CppRGCTXDataType)2, 4035 },
	{ (Il2CppRGCTXDataType)2, 4277 },
	{ (Il2CppRGCTXDataType)2, 4034 },
	{ (Il2CppRGCTXDataType)3, 48874 },
	{ (Il2CppRGCTXDataType)3, 14737 },
	{ (Il2CppRGCTXDataType)2, 3552 },
	{ (Il2CppRGCTXDataType)2, 4263 },
	{ (Il2CppRGCTXDataType)2, 4603 },
	{ (Il2CppRGCTXDataType)2, 4847 },
	{ (Il2CppRGCTXDataType)2, 4308 },
	{ (Il2CppRGCTXDataType)2, 4614 },
	{ (Il2CppRGCTXDataType)3, 16151 },
	{ (Il2CppRGCTXDataType)3, 25493 },
	{ (Il2CppRGCTXDataType)3, 25495 },
	{ (Il2CppRGCTXDataType)2, 849 },
	{ (Il2CppRGCTXDataType)3, 25494 },
	{ (Il2CppRGCTXDataType)3, 25503 },
	{ (Il2CppRGCTXDataType)2, 6635 },
	{ (Il2CppRGCTXDataType)2, 9740 },
	{ (Il2CppRGCTXDataType)3, 43814 },
	{ (Il2CppRGCTXDataType)3, 25504 },
	{ (Il2CppRGCTXDataType)2, 4370 },
	{ (Il2CppRGCTXDataType)2, 4661 },
	{ (Il2CppRGCTXDataType)3, 15941 },
	{ (Il2CppRGCTXDataType)3, 48839 },
	{ (Il2CppRGCTXDataType)2, 9783 },
	{ (Il2CppRGCTXDataType)3, 43923 },
	{ (Il2CppRGCTXDataType)3, 25496 },
	{ (Il2CppRGCTXDataType)2, 6634 },
	{ (Il2CppRGCTXDataType)2, 9727 },
	{ (Il2CppRGCTXDataType)3, 43798 },
	{ (Il2CppRGCTXDataType)3, 15940 },
	{ (Il2CppRGCTXDataType)3, 25497 },
	{ (Il2CppRGCTXDataType)3, 48838 },
	{ (Il2CppRGCTXDataType)2, 9770 },
	{ (Il2CppRGCTXDataType)3, 43858 },
	{ (Il2CppRGCTXDataType)3, 25510 },
	{ (Il2CppRGCTXDataType)2, 6636 },
	{ (Il2CppRGCTXDataType)2, 9757 },
	{ (Il2CppRGCTXDataType)3, 43842 },
	{ (Il2CppRGCTXDataType)3, 27664 },
	{ (Il2CppRGCTXDataType)3, 12795 },
	{ (Il2CppRGCTXDataType)3, 15942 },
	{ (Il2CppRGCTXDataType)3, 12794 },
	{ (Il2CppRGCTXDataType)3, 25511 },
	{ (Il2CppRGCTXDataType)3, 48840 },
	{ (Il2CppRGCTXDataType)2, 9796 },
	{ (Il2CppRGCTXDataType)3, 44000 },
	{ (Il2CppRGCTXDataType)3, 25524 },
	{ (Il2CppRGCTXDataType)2, 6638 },
	{ (Il2CppRGCTXDataType)2, 9785 },
	{ (Il2CppRGCTXDataType)3, 43925 },
	{ (Il2CppRGCTXDataType)3, 25525 },
	{ (Il2CppRGCTXDataType)2, 4373 },
	{ (Il2CppRGCTXDataType)2, 4664 },
	{ (Il2CppRGCTXDataType)3, 15946 },
	{ (Il2CppRGCTXDataType)3, 15945 },
	{ (Il2CppRGCTXDataType)2, 9742 },
	{ (Il2CppRGCTXDataType)3, 43816 },
	{ (Il2CppRGCTXDataType)3, 48846 },
	{ (Il2CppRGCTXDataType)2, 9784 },
	{ (Il2CppRGCTXDataType)3, 43924 },
	{ (Il2CppRGCTXDataType)3, 25517 },
	{ (Il2CppRGCTXDataType)2, 6637 },
	{ (Il2CppRGCTXDataType)2, 9772 },
	{ (Il2CppRGCTXDataType)3, 43860 },
	{ (Il2CppRGCTXDataType)3, 15944 },
	{ (Il2CppRGCTXDataType)3, 15943 },
	{ (Il2CppRGCTXDataType)3, 25518 },
	{ (Il2CppRGCTXDataType)2, 9741 },
	{ (Il2CppRGCTXDataType)3, 43815 },
	{ (Il2CppRGCTXDataType)3, 48845 },
	{ (Il2CppRGCTXDataType)2, 9771 },
	{ (Il2CppRGCTXDataType)3, 43859 },
	{ (Il2CppRGCTXDataType)3, 25531 },
	{ (Il2CppRGCTXDataType)2, 6639 },
	{ (Il2CppRGCTXDataType)2, 9798 },
	{ (Il2CppRGCTXDataType)3, 44002 },
	{ (Il2CppRGCTXDataType)3, 27665 },
	{ (Il2CppRGCTXDataType)3, 12797 },
	{ (Il2CppRGCTXDataType)3, 15948 },
	{ (Il2CppRGCTXDataType)3, 15947 },
	{ (Il2CppRGCTXDataType)3, 12796 },
	{ (Il2CppRGCTXDataType)3, 25532 },
	{ (Il2CppRGCTXDataType)2, 9743 },
	{ (Il2CppRGCTXDataType)3, 43817 },
	{ (Il2CppRGCTXDataType)3, 48847 },
	{ (Il2CppRGCTXDataType)2, 9797 },
	{ (Il2CppRGCTXDataType)3, 44001 },
	{ (Il2CppRGCTXDataType)3, 15937 },
	{ (Il2CppRGCTXDataType)3, 15938 },
	{ (Il2CppRGCTXDataType)3, 15949 },
	{ (Il2CppRGCTXDataType)3, 351 },
	{ (Il2CppRGCTXDataType)3, 350 },
	{ (Il2CppRGCTXDataType)2, 4359 },
	{ (Il2CppRGCTXDataType)2, 4653 },
	{ (Il2CppRGCTXDataType)3, 15939 },
	{ (Il2CppRGCTXDataType)2, 4396 },
	{ (Il2CppRGCTXDataType)2, 4693 },
	{ (Il2CppRGCTXDataType)3, 353 },
	{ (Il2CppRGCTXDataType)2, 1069 },
	{ (Il2CppRGCTXDataType)2, 1201 },
	{ (Il2CppRGCTXDataType)3, 349 },
	{ (Il2CppRGCTXDataType)3, 352 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)2, 4362 },
	{ (Il2CppRGCTXDataType)2, 4655 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)2, 845 },
	{ (Il2CppRGCTXDataType)2, 1209 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)3, 216 },
	{ (Il2CppRGCTXDataType)2, 9001 },
	{ (Il2CppRGCTXDataType)3, 40011 },
	{ (Il2CppRGCTXDataType)2, 4352 },
	{ (Il2CppRGCTXDataType)2, 4648 },
	{ (Il2CppRGCTXDataType)3, 40012 },
	{ (Il2CppRGCTXDataType)3, 218 },
	{ (Il2CppRGCTXDataType)2, 838 },
	{ (Il2CppRGCTXDataType)2, 1164 },
	{ (Il2CppRGCTXDataType)3, 215 },
	{ (Il2CppRGCTXDataType)3, 217 },
	{ (Il2CppRGCTXDataType)3, 409 },
	{ (Il2CppRGCTXDataType)3, 410 },
	{ (Il2CppRGCTXDataType)2, 9005 },
	{ (Il2CppRGCTXDataType)3, 40016 },
	{ (Il2CppRGCTXDataType)2, 4365 },
	{ (Il2CppRGCTXDataType)2, 4657 },
	{ (Il2CppRGCTXDataType)3, 40017 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)2, 1212 },
	{ (Il2CppRGCTXDataType)3, 408 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)3, 308 },
	{ (Il2CppRGCTXDataType)2, 9003 },
	{ (Il2CppRGCTXDataType)3, 40013 },
	{ (Il2CppRGCTXDataType)2, 4355 },
	{ (Il2CppRGCTXDataType)2, 4650 },
	{ (Il2CppRGCTXDataType)3, 40014 },
	{ (Il2CppRGCTXDataType)3, 40015 },
	{ (Il2CppRGCTXDataType)3, 310 },
	{ (Il2CppRGCTXDataType)2, 840 },
	{ (Il2CppRGCTXDataType)2, 1190 },
	{ (Il2CppRGCTXDataType)3, 307 },
	{ (Il2CppRGCTXDataType)3, 309 },
	{ (Il2CppRGCTXDataType)3, 322 },
	{ (Il2CppRGCTXDataType)2, 842 },
	{ (Il2CppRGCTXDataType)3, 324 },
	{ (Il2CppRGCTXDataType)2, 1193 },
	{ (Il2CppRGCTXDataType)3, 321 },
	{ (Il2CppRGCTXDataType)3, 323 },
	{ (Il2CppRGCTXDataType)2, 10480 },
	{ (Il2CppRGCTXDataType)2, 2616 },
	{ (Il2CppRGCTXDataType)3, 14777 },
	{ (Il2CppRGCTXDataType)2, 3568 },
	{ (Il2CppRGCTXDataType)2, 10905 },
	{ (Il2CppRGCTXDataType)3, 40008 },
	{ (Il2CppRGCTXDataType)3, 40009 },
	{ (Il2CppRGCTXDataType)2, 4864 },
	{ (Il2CppRGCTXDataType)3, 40010 },
	{ (Il2CppRGCTXDataType)2, 752 },
	{ (Il2CppRGCTXDataType)2, 1166 },
	{ (Il2CppRGCTXDataType)3, 228 },
	{ (Il2CppRGCTXDataType)3, 34592 },
	{ (Il2CppRGCTXDataType)2, 7952 },
	{ (Il2CppRGCTXDataType)3, 34619 },
	{ (Il2CppRGCTXDataType)2, 1531 },
	{ (Il2CppRGCTXDataType)3, 2975 },
	{ (Il2CppRGCTXDataType)3, 34598 },
	{ (Il2CppRGCTXDataType)3, 12737 },
	{ (Il2CppRGCTXDataType)2, 879 },
	{ (Il2CppRGCTXDataType)3, 34593 },
	{ (Il2CppRGCTXDataType)2, 7947 },
	{ (Il2CppRGCTXDataType)3, 3402 },
	{ (Il2CppRGCTXDataType)2, 1553 },
	{ (Il2CppRGCTXDataType)2, 2800 },
	{ (Il2CppRGCTXDataType)3, 12755 },
	{ (Il2CppRGCTXDataType)3, 34594 },
	{ (Il2CppRGCTXDataType)3, 12732 },
	{ (Il2CppRGCTXDataType)3, 12733 },
	{ (Il2CppRGCTXDataType)3, 12731 },
	{ (Il2CppRGCTXDataType)3, 12734 },
	{ (Il2CppRGCTXDataType)2, 2796 },
	{ (Il2CppRGCTXDataType)2, 10538 },
	{ (Il2CppRGCTXDataType)3, 15935 },
	{ (Il2CppRGCTXDataType)3, 12736 },
	{ (Il2CppRGCTXDataType)2, 4191 },
	{ (Il2CppRGCTXDataType)3, 12735 },
	{ (Il2CppRGCTXDataType)2, 4043 },
	{ (Il2CppRGCTXDataType)2, 10474 },
	{ (Il2CppRGCTXDataType)2, 4311 },
	{ (Il2CppRGCTXDataType)2, 4616 },
	{ (Il2CppRGCTXDataType)3, 14756 },
	{ (Il2CppRGCTXDataType)2, 3561 },
	{ (Il2CppRGCTXDataType)3, 16815 },
	{ (Il2CppRGCTXDataType)3, 16816 },
	{ (Il2CppRGCTXDataType)3, 16821 },
	{ (Il2CppRGCTXDataType)2, 4858 },
	{ (Il2CppRGCTXDataType)3, 16818 },
	{ (Il2CppRGCTXDataType)3, 49992 },
	{ (Il2CppRGCTXDataType)2, 2804 },
	{ (Il2CppRGCTXDataType)3, 12785 },
	{ (Il2CppRGCTXDataType)1, 4182 },
	{ (Il2CppRGCTXDataType)2, 10486 },
	{ (Il2CppRGCTXDataType)3, 16817 },
	{ (Il2CppRGCTXDataType)1, 10486 },
	{ (Il2CppRGCTXDataType)1, 4858 },
	{ (Il2CppRGCTXDataType)2, 10903 },
	{ (Il2CppRGCTXDataType)2, 10486 },
	{ (Il2CppRGCTXDataType)2, 4317 },
	{ (Il2CppRGCTXDataType)2, 4620 },
	{ (Il2CppRGCTXDataType)3, 16822 },
	{ (Il2CppRGCTXDataType)3, 16820 },
	{ (Il2CppRGCTXDataType)3, 16819 },
	{ (Il2CppRGCTXDataType)2, 640 },
	{ (Il2CppRGCTXDataType)3, 12798 },
	{ (Il2CppRGCTXDataType)2, 858 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	203,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	66,
	s_rgctxIndices,
	303,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
