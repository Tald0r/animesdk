#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_494697B4AB731572;
class Class_1_C18F998324203B33;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_1_829E65A484EE12DD__CTOR_OFFSET UNITYSDK_OFFSET(0x811EE50)

inline static constexpr unsigned int Class_1_829E65A484EE12DD_TypeDefinitionIndex = 80590;

class Class_1_829E65A484EE12DD : public ::System::Object
{
public:
	::Class_1_494697B4AB731572* Field_1_5; // 0x10
	::MoleMole::CustomCollisionConfigData* Field_1_4; // 0x18
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_1; // 0x20
	::Class_1_C18F998324203B33* Field_1_2; // 0x28
	::MoleMole::Cameras::CameraDataAccessor* Field_1_3; // 0x30
	::UnityEngine::Ray Field_1_0; // 0x38

	::System::Void _ctor(::Class_1_494697B4AB731572* a1, ::MoleMole::CustomCollisionConfigData* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_494697B4AB731572*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_829E65A484EE12DD__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
