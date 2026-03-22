#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_60C3536070A7752F;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_60C3536070A7752F_CLASS_1_38C31F50FB4CA7A2_METHOD_1_673DF5ECC0F21210_OFFSET UNITYSDK_OFFSET(0x697DEA0)
#define CLASS_3_60C3536070A7752F_CLASS_1_38C31F50FB4CA7A2__CTOR_OFFSET UNITYSDK_OFFSET(0x697DE90)

inline static constexpr unsigned int Class_3_60C3536070A7752F_Class_1_38C31F50FB4CA7A2_TypeDefinitionIndex = 60502;

class Class_3_60C3536070A7752F_Class_1_38C31F50FB4CA7A2 : public ::System::Object
{
public:
	::Class_3_60C3536070A7752F* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_CLASS_1_38C31F50FB4CA7A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_673DF5ECC0F21210(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_60C3536070A7752F_CLASS_1_38C31F50FB4CA7A2_METHOD_1_673DF5ECC0F21210_OFFSET))(this, a1);
	}
};
