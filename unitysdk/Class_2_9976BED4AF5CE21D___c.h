#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_9976BED4AF5CE21D___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0x8901FC0)
#define CLASS_2_9976BED4AF5CE21D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8901F70)
#define CLASS_2_9976BED4AF5CE21D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8901FB0)

inline static constexpr unsigned int Class_2_9976BED4AF5CE21D___c_TypeDefinitionIndex = 44568;

class Class_2_9976BED4AF5CE21D___c : public ::System::Object
{
public:
	static ::Class_2_9976BED4AF5CE21D___c** StaticGet___9()
	{
		return (::Class_2_9976BED4AF5CE21D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9976BED4AF5CE21D___c_TypeDefinitionIndex)->GetStaticField(0x3E8B0);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__14_6()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9976BED4AF5CE21D___c_TypeDefinitionIndex)->GetStaticField(0x3E8B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9976BED4AF5CE21D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9976BED4AF5CE21D___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_7FE3EA8542ED97C3()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9976BED4AF5CE21D___C_METHOD_1_7FE3EA8542ED97C3_OFFSET))(this);
	}
};
