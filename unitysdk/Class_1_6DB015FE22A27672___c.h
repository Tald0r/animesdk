#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6DB015FE22A27672___C_METHOD_1_E6B642CE92413603_OFFSET UNITYSDK_OFFSET(0x8190910)
#define CLASS_1_6DB015FE22A27672___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x81908C0)
#define CLASS_1_6DB015FE22A27672___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8190900)

inline static constexpr unsigned int Class_1_6DB015FE22A27672___c_TypeDefinitionIndex = 55078;

class Class_1_6DB015FE22A27672___c : public ::System::Object
{
public:
	static ::Class_1_6DB015FE22A27672___c** StaticGet___9()
	{
		return (::Class_1_6DB015FE22A27672___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DB015FE22A27672___c_TypeDefinitionIndex)->GetStaticField(0x2E900);
	}
	static ::System::Func_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DB015FE22A27672___c_TypeDefinitionIndex)->GetStaticField(0x2E908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_E6B642CE92413603(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672___C_METHOD_1_E6B642CE92413603_OFFSET))(this, a1);
	}
};
