#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_7D047D1B6B651F9C;
class Class_1_986CA5FC483F9BD8;
class Class_2_D39C2FCEF4D4B922;
class Class_2_E7B5A02ED2B31407;
namespace MoleMole { class CameraDelayData; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CameraModuleDirectionData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_362;

#define CLASS_1_A422B5C99AB5650D_METHOD_1_0340884D728972E3_OFFSET UNITYSDK_OFFSET(0xE7B5760)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0xE7BB270)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_05FE9C5ED5EF266A_OFFSET UNITYSDK_OFFSET(0xE7B6940)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0xE7C0160)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_097768D86C218FF4_OFFSET UNITYSDK_OFFSET(0xE7BA590)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_097E072BCEB2DFAF_OFFSET UNITYSDK_OFFSET(0xE7BF680)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_0C85ED55B43C6510_OFFSET UNITYSDK_OFFSET(0xE7BA630)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_15A0C00D0AF78536_OFFSET UNITYSDK_OFFSET(0xE7BC5F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE7B9CF0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_255BE7B5E4C9B018_OFFSET UNITYSDK_OFFSET(0xE7BB580)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_1_OFFSET UNITYSDK_OFFSET(0xE7B9D00)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_OFFSET UNITYSDK_OFFSET(0xE7B5670)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xE7BA3F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_3432859576FFF31F_OFFSET UNITYSDK_OFFSET(0xE7BB560)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_1_OFFSET UNITYSDK_OFFSET(0xE7BB420)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_OFFSET UNITYSDK_OFFSET(0xE7BB2E0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0xE7BE400)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4434C1B3C7070205_OFFSET UNITYSDK_OFFSET(0xE7BB550)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0xE7BE2D0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_1_OFFSET UNITYSDK_OFFSET(0xE7BFF80)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_OFFSET UNITYSDK_OFFSET(0xE7BFC70)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_5B12FB584315CCB9_OFFSET UNITYSDK_OFFSET(0xE7B9E10)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_1_OFFSET UNITYSDK_OFFSET(0xE7BFC80)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_OFFSET UNITYSDK_OFFSET(0xE7BC400)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_71E6511DBF2244D9_OFFSET UNITYSDK_OFFSET(0xE7BDD90)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_76C6CA61FA3AF162_OFFSET UNITYSDK_OFFSET(0xE7BC7C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xE7BA340)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_7891671122F5C4CB_OFFSET UNITYSDK_OFFSET(0xE7BF4C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_79A71C42C344F272_OFFSET UNITYSDK_OFFSET(0xE7BFE70)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_7D9E0AC8DDDB087D_OFFSET UNITYSDK_OFFSET(0xE7B83D0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_7E239D2D893221C6_OFFSET UNITYSDK_OFFSET(0xE7B9940)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_857FF94CE920A41B_OFFSET UNITYSDK_OFFSET(0xE7B61C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_897B7867084DDD4E_OFFSET UNITYSDK_OFFSET(0xE7BEC30)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_89C52E338BB8A276_OFFSET UNITYSDK_OFFSET(0xE7C0030)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_92EF378E5C246C05_OFFSET UNITYSDK_OFFSET(0xE7BB9A0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_93826312070FC6F3_OFFSET UNITYSDK_OFFSET(0xE7BE780)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_95F053D451652F2E_OFFSET UNITYSDK_OFFSET(0xE7B8150)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_963BD5843D278A37_OFFSET UNITYSDK_OFFSET(0xE7B6FD0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_A43E50D4ABCBF27B_OFFSET UNITYSDK_OFFSET(0xE7B7140)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_B0AA35323E65AF78_OFFSET UNITYSDK_OFFSET(0xE7BAA00)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_B0B02299A559EC10_OFFSET UNITYSDK_OFFSET(0xE7B5550)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_B228DB26E10594DB_OFFSET UNITYSDK_OFFSET(0xE7BC2F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xE7BE160)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xE7BF430)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xE7BE240)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DA6A516C6C038113_OFFSET UNITYSDK_OFFSET(0xE7BF1A0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DD360325DD9325C8_OFFSET UNITYSDK_OFFSET(0xE7BE410)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DE2C6C862AAD02E2_OFFSET UNITYSDK_OFFSET(0xE7B9A00)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_E28D14934A7B8499_OFFSET UNITYSDK_OFFSET(0xE7BA750)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_E4B4A3F40157A79A_OFFSET UNITYSDK_OFFSET(0xE7BB670)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0xE7BFF90)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xE7BB1D0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_EE5A9D6A8551521B_OFFSET UNITYSDK_OFFSET(0xE7B5F70)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_F0589B1D9EEFB5E2_OFFSET UNITYSDK_OFFSET(0xE7BEAC0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xE7BA4F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FB525D2D16F36EA5_OFFSET UNITYSDK_OFFSET(0xE7B6640)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xE7BF5F0)
#define CLASS_1_A422B5C99AB5650D__CTOR_OFFSET UNITYSDK_OFFSET(0xE7B4F50)

inline static constexpr unsigned int Class_1_A422B5C99AB5650D_TypeDefinitionIndex = 56562;

class Class_1_A422B5C99AB5650D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_8; // 0x0
	// static const ::System::Single Field_1_27; // 0x0
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_22; // 0x10
	::Class_2_E7B5A02ED2B31407* Field_1_17; // 0x18
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_21; // 0x20
	::MoleMole::Cameras::CameraDataAccessor* Field_1_2; // 0x28
	::Class_0_16E4307DCC419505_362<::System::Single>* Field_1_9; // 0x30
	::Cinemachine::CameraState Field_1_0; // 0x38
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_20; // 0x120
	::Class_1_7D047D1B6B651F9C* Field_1_5; // 0x128
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_19; // 0x130
	::Class_2_E7B5A02ED2B31407* Field_1_15; // 0x138
	::Class_2_D39C2FCEF4D4B922* Field_1_1; // 0x140
	::Class_0_16E4307DCC419505_362<::System::Single>* Field_1_10; // 0x148
	::MoleMole::CameraModuleDirectionData* Field_1_18; // 0x150
	::Class_1_986CA5FC483F9BD8* Field_1_11; // 0x158
	::Class_2_E7B5A02ED2B31407* Field_1_16; // 0x160
	::MoleMole::CameraDelayData* Field_1_28; // 0x168
	::Class_1_7D047D1B6B651F9C* Field_1_4; // 0x170
	::Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0 Field_1_31; // 0x178
	::System::UInt32 Field_1_37; // 0x1C8
	::UnityEngine::Vector3 Field_1_33; // 0x1CC
	::UnityEngine::Vector3 Field_1_26; // 0x1D8
	::UnityEngine::Vector3 Field_1_38; // 0x1E4
	::System::Boolean Field_1_3; // 0x1F0
	::System::Byte Field_1_14; // 0x1F1
	::UnityEngine::Vector3 Field_1_30; // 0x1F4
	::System::Single Field_1_29; // 0x200
	::Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0 Field_1_32; // 0x204
	::UnityEngine::Quaternion Field_1_36; // 0x254
	::System::Single Field_1_7; // 0x264
	::UnityEngine::Vector3 Field_1_24; // 0x268
	::UnityEngine::Vector2 Field_1_39; // 0x274
	::UnityEngine::Vector3 Field_1_25; // 0x27C
	::System::Single Field_1_6; // 0x288
	::System::Single Field_1_13; // 0x28C
	::UnityEngine::Vector3 Field_1_34; // 0x290
	::System::Single Field_1_12; // 0x29C
	::UnityEngine::Vector3 Field_1_23; // 0x2A0
	::UnityEngine::Vector2 Field_1_35; // 0x2AC

	::System::Void _ctor(::Class_2_D39C2FCEF4D4B922* a1, ::MoleMole::CameraModuleAvatarDataConfigExt* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D39C2FCEF4D4B922*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B0B02299A559EC10(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_B0B02299A559EC10_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_1_EE5A9D6A8551521B(::UnityEngine::Vector3 a1, ::Struct_2_7E9A981C4706FCC7& a2, ::System::Single a3)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_7E9A981C4706FCC7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_EE5A9D6A8551521B_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* Method_1_7E239D2D893221C6()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_7E239D2D893221C6_OFFSET))(this);
	}

	static ::System::String* Method_1_DE2C6C862AAD02E2(::UnityEngine::Rect a1)
	{
		return ((::System::String*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DE2C6C862AAD02E2_OFFSET))(a1);
	}

	::Class_1_986CA5FC483F9BD8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_986CA5FC483F9BD8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_95F053D451652F2E(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_95F053D451652F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D9E0AC8DDDB087D(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_7D9E0AC8DDDB087D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_2E01693CBA549693()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_2E01693CBA549693_1()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_1_OFFSET))(this);
	}

	static ::System::String* Method_1_097768D86C218FF4(::UnityEngine::Vector2 a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_097768D86C218FF4_OFFSET))(a1);
	}

	::System::Single Method_1_0C85ED55B43C6510(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_0C85ED55B43C6510_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::CameraDelayData* Method_1_E28D14934A7B8499(::MoleMole::CameraDelayDatas* a1, ::System::Single a2)
	{
		return ((::MoleMole::CameraDelayData*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_E28D14934A7B8499_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rect Method_1_B0AA35323E65AF78(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_B0AA35323E65AF78_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_05FE9C5ED5EF266A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_05FE9C5ED5EF266A_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Void Method_1_426BC41501263DDE(::System::String* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Func_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_426BC41501263DDE_1(::System::String* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Func_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4434C1B3C7070205(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4434C1B3C7070205_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_1_3432859576FFF31F()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_3432859576FFF31F_OFFSET))(this);
	}

	::System::Void Method_1_255BE7B5E4C9B018(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_255BE7B5E4C9B018_OFFSET))(this, a1);
	}

	::System::Void Method_1_92EF378E5C246C05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_92EF378E5C246C05_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_5D3291D964FEACFF(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_15A0C00D0AF78536(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_15A0C00D0AF78536_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_76C6CA61FA3AF162(::Class_1_A422B5C99AB5650D*& a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Quaternion& a6, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>& a7)
	{
		return ((::System::Void(*)(::Class_1_A422B5C99AB5650D*&, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_76C6CA61FA3AF162_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::Class_2_D39C2FCEF4D4B922* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_D39C2FCEF4D4B922*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::Cinemachine::CameraState Method_1_DD360325DD9325C8(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DD360325DD9325C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_E4B4A3F40157A79A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_E4B4A3F40157A79A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector4 Method_1_B228DB26E10594DB(::UnityEngine::Vector4 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_B228DB26E10594DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cinemachine::CameraState Method_1_857FF94CE920A41B(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_857FF94CE920A41B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B12FB584315CCB9(::Cinemachine::CameraState& a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion& a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_5B12FB584315CCB9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::UnityEngine::Vector2 Method_1_F0589B1D9EEFB5E2(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_F0589B1D9EEFB5E2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_897B7867084DDD4E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_897B7867084DDD4E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_DA6A516C6C038113(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DA6A516C6C038113_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	static ::UnityEngine::Rect Method_1_7891671122F5C4CB(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_7891671122F5C4CB_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_A43E50D4ABCBF27B(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_A43E50D4ABCBF27B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_097E072BCEB2DFAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Rect a4, ::UnityEngine::Rect a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_097E072BCEB2DFAF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4F31904B94CD26A8(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_5D3291D964FEACFF_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_1_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_79A71C42C344F272(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_79A71C42C344F272_OFFSET))(a1, a2);
	}

	::System::Void Method_1_4F31904B94CD26A8_1(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93826312070FC6F3(::UnityEngine::Rect& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_93826312070FC6F3_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Single Method_1_0340884D728972E3(::Cinemachine::CameraState& a1, ::MoleMole::Cameras::CameraDataAccessor* a2, ::UnityEngine::Rect a3, ::System::Single a4, ::System::Single& a5)
	{
		return ((::System::Single(*)(::Cinemachine::CameraState&, ::MoleMole::Cameras::CameraDataAccessor*, ::UnityEngine::Rect, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_0340884D728972E3_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EBF44BC910948FDA_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_89C52E338BB8A276(::UnityEngine::Vector3 a1, ::Struct_2_7E9A981C4706FCC7& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_7E9A981C4706FCC7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_89C52E338BB8A276_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_71E6511DBF2244D9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_71E6511DBF2244D9_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_FB525D2D16F36EA5(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FB525D2D16F36EA5_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_1_963BD5843D278A37(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_963BD5843D278A37_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
