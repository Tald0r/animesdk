#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"

class Class_1_48956C855353AC97;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_2_EF480C3F09B3116B_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x7611F20)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_0DA9A964A9F3B516_OFFSET UNITYSDK_OFFSET(0x7610B40)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x76117C0)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7612760)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_4DF98D928623DEE3_OFFSET UNITYSDK_OFFSET(0x7611FB0)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_7BF27AEAF4A73A36_OFFSET UNITYSDK_OFFSET(0x7611850)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_824C621D9879193F_OFFSET UNITYSDK_OFFSET(0x7610A60)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x76123B0)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_8FECAA4C9B7CDAEE_OFFSET UNITYSDK_OFFSET(0x7612470)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x7610A50)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_CFF14E54F38CCBE0_OFFSET UNITYSDK_OFFSET(0x76110A0)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_DA624ED5E7AFDE43_1_OFFSET UNITYSDK_OFFSET(0x76126E0)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0x7611020)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0x7612660)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_EF9B65474F0FE119_OFFSET UNITYSDK_OFFSET(0x7611A10)
#define CLASS_2_EF480C3F09B3116B_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0x76125E0)
#define CLASS_2_EF480C3F09B3116B__CTOR_OFFSET UNITYSDK_OFFSET(0x7612460)

inline static constexpr unsigned int Class_2_EF480C3F09B3116B_TypeDefinitionIndex = 62891;

class Class_2_EF480C3F09B3116B : public ::Class_1_2A3859B4230FECE9
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_824C621D9879193F(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_824C621D9879193F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CFF14E54F38CCBE0(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_CFF14E54F38CCBE0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_EF9B65474F0FE119(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_EF9B65474F0FE119_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_48956C855353AC97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48956C855353AC97*))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8FECAA4C9B7CDAEE(::Class_1_48956C855353AC97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_48956C855353AC97*))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_8FECAA4C9B7CDAEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DA9A964A9F3B516(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_0DA9A964A9F3B516_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DF98D928623DEE3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_4DF98D928623DEE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7BF27AEAF4A73A36(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_7BF27AEAF4A73A36_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA624ED5E7AFDE43_1(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_DA624ED5E7AFDE43_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF480C3F09B3116B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
