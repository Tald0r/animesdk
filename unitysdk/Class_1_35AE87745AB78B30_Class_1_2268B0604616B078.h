#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InitCharacterPerform; }
namespace System { class Action; }

#define CLASS_1_35AE87745AB78B30_CLASS_1_2268B0604616B078_METHOD_1_F8D4B3E7B01AFD3B_OFFSET UNITYSDK_OFFSET(0xB060630)
#define CLASS_1_35AE87745AB78B30_CLASS_1_2268B0604616B078__CTOR_OFFSET UNITYSDK_OFFSET(0xB060620)

inline static constexpr unsigned int Class_1_35AE87745AB78B30_Class_1_2268B0604616B078_TypeDefinitionIndex = 43730;

class Class_1_35AE87745AB78B30_Class_1_2268B0604616B078 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_CLASS_1_2268B0604616B078__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8D4B3E7B01AFD3B(::MoleMole::InitCharacterPerform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InitCharacterPerform*))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_CLASS_1_2268B0604616B078_METHOD_1_F8D4B3E7B01AFD3B_OFFSET))(this, a1);
	}
};
