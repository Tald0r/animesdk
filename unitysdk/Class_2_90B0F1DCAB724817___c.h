#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_90B0F1DCAB724817___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0xCBE5720)
#define CLASS_2_90B0F1DCAB724817___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBE56D0)
#define CLASS_2_90B0F1DCAB724817___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE5710)

inline static constexpr unsigned int Class_2_90B0F1DCAB724817___c_TypeDefinitionIndex = 66874;

class Class_2_90B0F1DCAB724817___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__5_6()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90B0F1DCAB724817___c_TypeDefinitionIndex)->GetStaticField(0x3C930);
	}
	static ::Class_2_90B0F1DCAB724817___c** StaticGet___9()
	{
		return (::Class_2_90B0F1DCAB724817___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90B0F1DCAB724817___c_TypeDefinitionIndex)->GetStaticField(0x3C938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90B0F1DCAB724817___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90B0F1DCAB724817___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_7FE3EA8542ED97C3()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90B0F1DCAB724817___C_METHOD_1_7FE3EA8542ED97C3_OFFSET))(this);
	}
};
