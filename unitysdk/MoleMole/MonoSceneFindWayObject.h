#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class FindWayObjectPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET UNITYSDK_OFFSET(0xD437AB0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET UNITYSDK_OFFSET(0xD437F20)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET UNITYSDK_OFFSET(0xD437390)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET UNITYSDK_OFFSET(0xD437B20)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0xD437BF0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_0CD27CF81DAA9C4A_OFFSET UNITYSDK_OFFSET(0xD43AA00)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_513522A29644217D_OFFSET UNITYSDK_OFFSET(0xD4396D0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xD437420)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_980ADFEE2E32342D_OFFSET UNITYSDK_OFFSET(0xD43A540)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_AC57C1C4868FD160_OFFSET UNITYSDK_OFFSET(0xD43A280)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_CCF1D6419B23EEE1_OFFSET UNITYSDK_OFFSET(0xD438980)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_EBF9BBCF4D808246_OFFSET UNITYSDK_OFFSET(0xD438E40)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F5586C5D862C8EF0_OFFSET UNITYSDK_OFFSET(0xD438320)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F9B8047F726FEAA7_OFFSET UNITYSDK_OFFSET(0xD438620)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD438030)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET UNITYSDK_OFFSET(0xD437920)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET UNITYSDK_OFFSET(0xD438190)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD438280)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneFindWayObject_TypeDefinitionIndex = 57310;

	class MonoSceneFindWayObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		// static const ::System::Single Field_7_20; // 0x0
		// static const ::System::Int32 Field_7_22 = 0x8; // 0x0
		// static const ::System::Int32 Field_7_23 = 0x6; // 0x0
		::System::Int32 wayID; // 0x28
		::Il2CppArray<::MoleMole::FindWayObjectPoint*>* wayPoints; // 0x30
		::System::String* matKey; // 0x38
		::Foundation::AssetRequestHandle Field_7_3; // 0x40
		::System::Single thickness; // 0x60
		::System::Single elbowRadius; // 0x64
		::System::Single fadeInTime; // 0x68
		::System::Single fadeOutTime; // 0x6C
		::System::String* FadeInCurveKey; // 0x70
		::System::String* FadeOutCurveKey; // 0x78
		::System::Boolean Field_7_10; // 0x80
		::UnityEngine::AnimationCurve* Field_7_11; // 0x88
		::UnityEngine::AnimationCurve* Field_7_12; // 0x90
		::System::Single Field_7_13; // 0x98
		::System::Single Field_7_14; // 0x9C
		::System::Single Field_7_15; // 0xA0
		::System::Boolean Field_7_16; // 0xA4
		::System::Boolean Field_7_17; // 0xA5
		::UnityEngine::Material* Field_7_18; // 0xA8
		::UnityEngine::Mesh* Field_7_19; // 0xB0
		::System::Boolean generateElbows; // 0xB8
		::System::Boolean avoidStrangling; // 0xB9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET))(this, a1);
		}

		::System::Void DoHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET))(this);
		}

		::System::Void SetToMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET))(this);
		}

		::System::Void DoStartReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET))(this);
		}

		::System::Void DoRealReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateWayPointsStartEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET))(this);
		}

		::System::Boolean Method_7_F5586C5D862C8EF0(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F5586C5D862C8EF0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_7_F9B8047F726FEAA7(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F9B8047F726FEAA7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_CCF1D6419B23EEE1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_CCF1D6419B23EEE1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_7_EBF9BBCF4D808246(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_EBF9BBCF4D808246_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_AC57C1C4868FD160()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_AC57C1C4868FD160_OFFSET))(this);
		}

		::System::Void Method_7_0CD27CF81DAA9C4A(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_0CD27CF81DAA9C4A_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_7_67D41ACFEF39E84E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_67D41ACFEF39E84E_OFFSET))(this);
		}

		::System::Void Method_7_980ADFEE2E32342D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_980ADFEE2E32342D_OFFSET))(this, a1);
		}

		::System::Void Method_7_513522A29644217D(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_513522A29644217D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
