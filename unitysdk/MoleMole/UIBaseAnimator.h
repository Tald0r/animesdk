#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MdbComponent; }

#define MOLEMOLE_UIBASEANIMATOR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD0241B0)
#define MOLEMOLE_UIBASEANIMATOR_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0xD0236A0)
#define MOLEMOLE_UIBASEANIMATOR_INITIALIZEFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xD024210)
#define MOLEMOLE_UIBASEANIMATOR_METHOD_5_5D14218DF4113429_OFFSET UNITYSDK_OFFSET(0xD023710)
#define MOLEMOLE_UIBASEANIMATOR_METHOD_5_BF25B2F4A3A2819D_OFFSET UNITYSDK_OFFSET(0xD024340)
#define MOLEMOLE_UIBASEANIMATOR_PLAYALLLAYERANIMATION_OFFSET UNITYSDK_OFFSET(0xD023C80)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_1_OFFSET UNITYSDK_OFFSET(0xD023EE0)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_2_OFFSET UNITYSDK_OFFSET(0xD024040)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xD023DB0)
#define MOLEMOLE_UIBASEANIMATOR_SETBOOL_OFFSET UNITYSDK_OFFSET(0xD023910)
#define MOLEMOLE_UIBASEANIMATOR_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xD023A30)
#define MOLEMOLE_UIBASEANIMATOR_SETINT_OFFSET UNITYSDK_OFFSET(0xD023B60)
#define MOLEMOLE_UIBASEANIMATOR_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0xD023800)
#define MOLEMOLE_UIBASEANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD024320)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseAnimator_TypeDefinitionIndex = 78561;

	class UIBaseAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Field_5_0; // 0x18
		::UnityEngine::MdbComponent* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* GetAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_GETANIMATOR_OFFSET))(this);
		}

		::System::Void SetTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAllLayerAnimation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYALLLAYERANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayAnimation(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAnimation_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_1_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAnimation_2(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void InitializeForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_INITIALIZEFORCEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Animator* Method_5_5D14218DF4113429()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_METHOD_5_5D14218DF4113429_OFFSET))(this);
		}

		::UnityEngine::MdbComponent* Method_5_BF25B2F4A3A2819D()
		{
			return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_METHOD_5_BF25B2F4A3A2819D_OFFSET))(this);
		}
	};
}
