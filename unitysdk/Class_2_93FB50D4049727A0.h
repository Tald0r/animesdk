#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_53A2E307D92A577A.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_494697B4AB731572;
class Class_1_8B714AED6096E68C;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_93FB50D4049727A0_METHOD_2_634F01115BE25546_OFFSET UNITYSDK_OFFSET(0x845B750)
#define CLASS_2_93FB50D4049727A0__CTOR_OFFSET UNITYSDK_OFFSET(0x845AC30)

inline static constexpr unsigned int Class_2_93FB50D4049727A0_TypeDefinitionIndex = 46673;

class Class_2_93FB50D4049727A0 : public ::Class_1_53A2E307D92A577A
{
public:
	::Il2CppArray<::UnityEngine::Ray>* Field_2_1; // 0x28
	::Class_1_8B714AED6096E68C* Field_2_2; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_494697B4AB731572* a1, ::MoleMole::CustomCollisionConfigData* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_494697B4AB731572*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_93FB50D4049727A0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_634F01115BE25546(::Cinemachine::CameraState a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_93FB50D4049727A0_METHOD_2_634F01115BE25546_OFFSET))(this, a1, a2, a3);
	}
};
