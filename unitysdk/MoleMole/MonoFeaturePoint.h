#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F35B080B137ECC46;
namespace MoleMole { class FeaturePoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOFEATUREPOINT_GETFEATUREPOINTANGLE_OFFSET UNITYSDK_OFFSET(0x6E40550)
#define MOLEMOLE_MONOFEATUREPOINT_GETNEARESTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x6E3FFC0)
#define MOLEMOLE_MONOFEATUREPOINT_METHOD_5_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x6E402D0)
#define MOLEMOLE_MONOFEATUREPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x6E40810)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFeaturePoint_TypeDefinitionIndex = 66920;

	class MonoFeaturePoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FeaturePoint*>* featurePointList; // 0x18
		::Class_3_F35B080B137ECC46* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT__CTOR_OFFSET))(this);
		}

		::MoleMole::FeaturePoint* GetNearestFeaturePoint()
		{
			return ((::MoleMole::FeaturePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_GETNEARESTFEATUREPOINT_OFFSET))(this);
		}

		::System::Single GetFeaturePointAngle(::MoleMole::FeaturePoint* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::FeaturePoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_GETFEATUREPOINTANGLE_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_METHOD_5_EBAB6A35C21A2A5B_OFFSET))(this);
		}
	};
}
