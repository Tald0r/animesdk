#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_E0B416C586C5F6C4_METHOD_1_EF64464FE01908F1_OFFSET UNITYSDK_OFFSET(0xC2EE190)
#define MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_E0B416C586C5F6C4__CTOR_OFFSET UNITYSDK_OFFSET(0xC2EE180)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadCustomList_Class_1_E0B416C586C5F6C4_TypeDefinitionIndex = 64085;

	class MonoGamepadCustomList_Class_1_E0B416C586C5F6C4 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_E0B416C586C5F6C4__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_EF64464FE01908F1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADCUSTOMLIST_CLASS_1_E0B416C586C5F6C4_METHOD_1_EF64464FE01908F1_OFFSET))(this, a1);
		}
	};
}
