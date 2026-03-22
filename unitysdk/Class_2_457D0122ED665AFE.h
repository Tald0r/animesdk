#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_494697B4AB731572.h"
#include "unitysdk/MoleMole/CustomCollisionConfigData_CustomCollisionAlgorithm.h"

class Class_2_45534E9ACEDAE009;
class Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840;
class Class_2_93FB50D4049727A0;
class Class_2_DA22CBE4C7989D9F;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_2_457D0122ED665AFE_METHOD_2_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x779FC40)
#define CLASS_2_457D0122ED665AFE_METHOD_2_57119881929565D0_OFFSET UNITYSDK_OFFSET(0x779FBB0)
#define CLASS_2_457D0122ED665AFE_METHOD_2_5FF3D794AAC76116_OFFSET UNITYSDK_OFFSET(0x779F380)
#define CLASS_2_457D0122ED665AFE_METHOD_2_94F261199A6AC853_OFFSET UNITYSDK_OFFSET(0x779F5F0)
#define CLASS_2_457D0122ED665AFE_METHOD_2_9ED7637DBE55A9AE_OFFSET UNITYSDK_OFFSET(0x779F6C0)
#define CLASS_2_457D0122ED665AFE__CTOR_OFFSET UNITYSDK_OFFSET(0x779F220)

inline static constexpr unsigned int Class_2_457D0122ED665AFE_TypeDefinitionIndex = 55306;

class Class_2_457D0122ED665AFE : public ::Class_1_494697B4AB731572
{
public:
	::Class_2_45534E9ACEDAE009* Field_2_1; // 0x18
	::Class_2_DA22CBE4C7989D9F* Field_2_0; // 0x20
	::Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840* Field_2_3; // 0x28
	::Class_2_93FB50D4049727A0* Field_2_2; // 0x30

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FF3D794AAC76116(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_5FF3D794AAC76116_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_94F261199A6AC853(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_94F261199A6AC853_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_57119881929565D0(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_57119881929565D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9ED7637DBE55A9AE(::Cinemachine::CameraState& a1, ::System::Single a2, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_9ED7637DBE55A9AE_OFFSET))(this, a1, a2, a3);
	}
};
