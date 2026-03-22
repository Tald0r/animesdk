#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_GETGROUNDANGLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2D3A30)
#define MOLEMOLE_GETGROUNDANGLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D3A70)
#define MOLEMOLE_GETGROUNDANGLE___C__FILTERRAYCASTBYDISTANCEANDTAG_B__7_0_OFFSET UNITYSDK_OFFSET(0xC2D3A80)

namespace MoleMole
{
	inline static constexpr unsigned int GetGroundAngle___c_TypeDefinitionIndex = 45822;

	class GetGroundAngle___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(GetGroundAngle___c_TypeDefinitionIndex)->GetStaticField(0x2FBE0);
		}
		static ::MoleMole::GetGroundAngle___c** StaticGet___9()
		{
			return (::MoleMole::GetGroundAngle___c**)Il2CppClass::FromTypeDefinitionIndex(GetGroundAngle___c_TypeDefinitionIndex)->GetStaticField(0x2FBE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FilterRayCastByDistanceAndTag_b__7_0(::UnityEngine::RaycastHit a, ::UnityEngine::RaycastHit b)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE___C__FILTERRAYCASTBYDISTANCEANDTAG_B__7_0_OFFSET))(this, a, b);
		}
	};
}
