#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_6F4F578FDC25740A_CLASS_1_322B5154BB2C543D_METHOD_1_CEF79EFCACAFAA04_OFFSET UNITYSDK_OFFSET(0x7400360)
#define CLASS_2_6F4F578FDC25740A_CLASS_1_322B5154BB2C543D__CTOR_OFFSET UNITYSDK_OFFSET(0x7400350)

inline static constexpr unsigned int Class_2_6F4F578FDC25740A_Class_1_322B5154BB2C543D_TypeDefinitionIndex = 51042;

class Class_2_6F4F578FDC25740A_Class_1_322B5154BB2C543D : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_CLASS_1_322B5154BB2C543D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEF79EFCACAFAA04(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_CLASS_1_322B5154BB2C543D_METHOD_1_CEF79EFCACAFAA04_OFFSET))(this, a1);
	}
};
