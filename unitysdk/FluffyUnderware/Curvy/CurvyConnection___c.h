#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { template <typename T> class Predicate_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEDCF30)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEDCF70)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__ONSCENELOADED_B__31_0_OFFSET UNITYSDK_OFFSET(0x1AEDCF90)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__REMOVENULLCPS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1AEDCF80)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection___c_TypeDefinitionIndex = 35645;

	class CurvyConnection___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::CurvyConnection___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::CurvyConnection___c**)Il2CppClass::FromTypeDefinitionIndex(CurvyConnection___c_TypeDefinitionIndex)->GetStaticField(0x252B0);
		}
		static ::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>** StaticGet___9__31_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyConnection___c_TypeDefinitionIndex)->GetStaticField(0x252B8);
		}
		static ::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>** StaticGet___9__25_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyConnection___c_TypeDefinitionIndex)->GetStaticField(0x252C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveNullCPs_b__25_0(::FluffyUnderware::Curvy::CurvySplineSegment* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__REMOVENULLCPS_B__25_0_OFFSET))(this, cp);
		}

		::System::Boolean _OnSceneLoaded_b__31_0(::FluffyUnderware::Curvy::CurvySplineSegment* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__ONSCENELOADED_B__31_0_OFFSET))(this, cp);
		}
	};
}
