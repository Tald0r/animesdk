#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2187E7700BED0850.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_368BA05DC0912CDA;
class Class_1_968319E2802E2F02;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_21;
template <typename T> class Class_1_534AF681CC2BD5FD_190;

inline static constexpr unsigned int Class_1_7FCBE5BCF7AAB3AE_TypeDefinitionIndex = 47271;

template <typename TSort, typename TItemType>
class Class_1_7FCBE5BCF7AAB3AE : public ::System::Object
{
public:
	static ::Class_1_968319E2802E2F02** StaticGet_Field_1_0()
	{
		return (::Class_1_968319E2802E2F02**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FCBE5BCF7AAB3AE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_534AF681CC2BD5FD_190<TSort>** StaticGet_Field_1_1()
	{
		return (::Class_1_534AF681CC2BD5FD_190<TSort>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FCBE5BCF7AAB3AE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_2187E7700BED0850, ::System::Boolean>>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_2187E7700BED0850, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FCBE5BCF7AAB3AE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Func_2<TItemType, TSort>* Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC41950C_21<TSort>*>* Field_1_4; // 0x0
	::Class_1_968319E2802E2F02* Field_1_5; // 0x0
	::Class_1_368BA05DC0912CDA* Field_1_6; // 0x0
};
