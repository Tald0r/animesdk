#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_2C434B932ED0B61F;
class Class_2_83891D8D0E76B890;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtualCutSceneCamera; }

#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_002A3C2EF46C74CF_OFFSET UNITYSDK_OFFSET(0x686A090)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_3432859576FFF31F_OFFSET UNITYSDK_OFFSET(0x686A070)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_422E4D06A3C7DF36_1_OFFSET UNITYSDK_OFFSET(0x6869FA0)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_422E4D06A3C7DF36_OFFSET UNITYSDK_OFFSET(0x6869E70)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_4DA895CFB760E2A1_1_OFFSET UNITYSDK_OFFSET(0x6869740)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_4DA895CFB760E2A1_2_OFFSET UNITYSDK_OFFSET(0x68698A0)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_4DA895CFB760E2A1_OFFSET UNITYSDK_OFFSET(0x6868D30)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_91C5568D426A83F6_OFFSET UNITYSDK_OFFSET(0x68677C0)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x6869F70)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_9E68A0871110703F_OFFSET UNITYSDK_OFFSET(0x6867A70)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x6868E90)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x68677B0)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6869E10)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_DA624ED5E7AFDE43_1_OFFSET UNITYSDK_OFFSET(0x6869D90)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0x6867BB0)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_E5E42B46DE6979AF_OFFSET UNITYSDK_OFFSET(0x6868FE0)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_EAE0D51194139181_OFFSET UNITYSDK_OFFSET(0x6867C30)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0x6869C90)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_F343EB366B5A896D_1_OFFSET UNITYSDK_OFFSET(0x6867A00)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0x6869D10)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x6869610)
#define CLASS_2_A98E9BF6AC9012EF_METHOD_2_FFFEA3B2FB2730AD_OFFSET UNITYSDK_OFFSET(0x686A130)
#define CLASS_2_A98E9BF6AC9012EF__CTOR_OFFSET UNITYSDK_OFFSET(0x6869A00)

inline static constexpr unsigned int Class_2_A98E9BF6AC9012EF_TypeDefinitionIndex = 49474;

class Class_2_A98E9BF6AC9012EF : public ::Class_1_2A3859B4230FECE9
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	::Cinemachine::CameraState Field_2_1; // 0x38
	::MoleMole::Cameras::NapVirtualCutSceneCamera* Field_2_0; // 0x120
	::Class_2_83891D8D0E76B890* Field_2_2; // 0x128

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_91C5568D426A83F6(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_91C5568D426A83F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9E68A0871110703F(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_9E68A0871110703F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EAE0D51194139181(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_EAE0D51194139181_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA624ED5E7AFDE43_1(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_DA624ED5E7AFDE43_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4DA895CFB760E2A1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_4DA895CFB760E2A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4DA895CFB760E2A1_1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_4DA895CFB760E2A1_1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rect Method_2_422E4D06A3C7DF36()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_422E4D06A3C7DF36_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_422E4D06A3C7DF36_1()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_422E4D06A3C7DF36_1_OFFSET))(this);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_2_3432859576FFF31F()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_3432859576FFF31F_OFFSET))(this);
	}

	::System::Void Method_2_002A3C2EF46C74CF(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_002A3C2EF46C74CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E42B46DE6979AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_E5E42B46DE6979AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DA895CFB760E2A1_2(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_4DA895CFB760E2A1_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F343EB366B5A896D_1(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_F343EB366B5A896D_1_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_2_FFFEA3B2FB2730AD()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_FFFEA3B2FB2730AD_OFFSET))(this);
	}

	::Class_1_2C434B932ED0B61F* Method_2_9C06C768B25E4E13()
	{
		return ((::Class_1_2C434B932ED0B61F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A98E9BF6AC9012EF_METHOD_2_9C06C768B25E4E13_OFFSET))(this);
	}
};
