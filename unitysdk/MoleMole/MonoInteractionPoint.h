#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class InteractionPoint; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOINTERACTIONPOINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x8F953B0)
#define MOLEMOLE_MONOINTERACTIONPOINT_DISTANCE2D_OFFSET UNITYSDK_OFFSET(0x8F951F0)
#define MOLEMOLE_MONOINTERACTIONPOINT_DISTANCESQ2D_OFFSET UNITYSDK_OFFSET(0x8F94AC0)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETINTERACTIONPOINTBYNAME_OFFSET UNITYSDK_OFFSET(0x8F942C0)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETNEARESTINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x8F93D20)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETPATHTOTARGETPOINT_OFFSET UNITYSDK_OFFSET(0x8F94430)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETREACHABLENEARESTINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x8F94520)
#define MOLEMOLE_MONOINTERACTIONPOINT_METHOD_5_93EFC2EFF979B1FC_OFFSET UNITYSDK_OFFSET(0x8F94B70)
#define MOLEMOLE_MONOINTERACTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x8F95590)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInteractionPoint_TypeDefinitionIndex = 56170;

	class MonoInteractionPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::InteractionPoint*>* interactionPointList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT__CTOR_OFFSET))(this);
		}

		::MoleMole::InteractionPoint* GetNearestInteractionPoint(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETNEARESTINTERACTIONPOINT_OFFSET))(this, a1);
		}

		::MoleMole::InteractionPoint* GetInteractionPointByName(::System::String* a1)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETINTERACTIONPOINTBYNAME_OFFSET))(this, a1);
		}

		static ::System::Void GetPathToTargetPoint(::MoleMole::InteractionPoint* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::MoleMole::InteractionPoint*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETPATHTOTARGETPOINT_OFFSET))(a1, a2, a3);
		}

		::MoleMole::InteractionPoint* GetReachableNearestInteractionPoint(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETREACHABLENEARESTINTERACTIONPOINT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Single DistanceSq2D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_DISTANCESQ2D_OFFSET))(a1, a2);
		}

		static ::System::Single Distance2D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_DISTANCE2D_OFFSET))(a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_AWAKE_OFFSET))(this);
		}

		::MoleMole::InteractionPoint* Method_5_93EFC2EFF979B1FC(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_METHOD_5_93EFC2EFF979B1FC_OFFSET))(this, a1, a2, a3);
		}
	};
}
