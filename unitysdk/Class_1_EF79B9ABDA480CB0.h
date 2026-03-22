#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30.h"
#include "unitysdk/Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UrbanMapMeshHeightInfo; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_01F6D6781788AB62_OFFSET UNITYSDK_OFFSET(0xBA59E60)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_03454CD87CB8226B_OFFSET UNITYSDK_OFFSET(0xBA59A90)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_161CE82DE0497A06_OFFSET UNITYSDK_OFFSET(0xBA55EC0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xBA556D0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_2527D92F050F86D5_OFFSET UNITYSDK_OFFSET(0xBA568A0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0xBA58FB0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_33531F86B1000CF5_OFFSET UNITYSDK_OFFSET(0xBA55FE0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_3D4CFFFBC92DA0B7_OFFSET UNITYSDK_OFFSET(0xBA5A140)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_431477787D58DFDD_OFFSET UNITYSDK_OFFSET(0xBA55A60)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA59FE0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xBA53370)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_486AF1E6C0038D4C_1_OFFSET UNITYSDK_OFFSET(0xBA59E30)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0xBA53670)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xBA59A50)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0xBA59E40)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBA53360)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_541535654D13B35D_OFFSET UNITYSDK_OFFSET(0xBA54670)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_607112B48EA5DC32_OFFSET UNITYSDK_OFFSET(0xBA553A0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_60DACDE1C2CDD71F_OFFSET UNITYSDK_OFFSET(0xBA59560)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_67D04068F791BA12_OFFSET UNITYSDK_OFFSET(0xBA55760)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_77195FD7E9A92F9D_OFFSET UNITYSDK_OFFSET(0xBA53450)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0xBA5A730)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_816BFE60B2DD5A9E_OFFSET UNITYSDK_OFFSET(0xBA56BF0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_87C5D508B87EDB0C_OFFSET UNITYSDK_OFFSET(0xBA59FD0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_9037F1E5607EA334_OFFSET UNITYSDK_OFFSET(0xBA54260)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_98AF69A4B7665FE1_OFFSET UNITYSDK_OFFSET(0xBA536B0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xBA578F0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0xBA59A70)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_A2C7696BD0B96C07_OFFSET UNITYSDK_OFFSET(0xBA59A60)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_AFDF4B7598FBFD2E_OFFSET UNITYSDK_OFFSET(0xBA583A0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_BDA76F015BC79B63_OFFSET UNITYSDK_OFFSET(0xBA585E0)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA59710)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_D1488CDBB6E94B89_OFFSET UNITYSDK_OFFSET(0xBA53B60)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xBA53680)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_F8EFD0FECAE4BDAF_OFFSET UNITYSDK_OFFSET(0xBA59770)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0xBA53A70)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_FF798D152DDA9A15_1_OFFSET UNITYSDK_OFFSET(0xBA5A720)
#define CLASS_1_EF79B9ABDA480CB0_METHOD_1_FF798D152DDA9A15_OFFSET UNITYSDK_OFFSET(0xBA53350)
#define CLASS_1_EF79B9ABDA480CB0__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA53340)
#define CLASS_1_EF79B9ABDA480CB0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA53320)

inline static constexpr unsigned int Class_1_EF79B9ABDA480CB0_TypeDefinitionIndex = 45116;

class Class_1_EF79B9ABDA480CB0 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_62()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF79B9ABDA480CB0_TypeDefinitionIndex)->GetStaticField(0xFD30);
	}
	::Class_2_000597E145D7A42A<::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30>* Field_1_28; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshHeightInfo*>* Field_1_44; // 0x18
	::UnityEngine::Camera* Field_1_0; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_1_22; // 0x28
	::UnityEngine::Transform* Field_1_45; // 0x30
	::System::Func_1<::System::Boolean>* Field_1_52; // 0x38
	::System::Func_1<::System::Boolean>* Field_1_51; // 0x40
	::System::Single Field_1_35; // 0x48
	::UnityEngine::Vector3 Field_1_36; // 0x4C
	::System::Single Field_1_25; // 0x58
	::System::Single Field_1_46; // 0x5C
	::System::Single Field_1_4; // 0x60
	::UnityEngine::Vector2 Field_1_54; // 0x64
	::System::Single Field_1_9; // 0x6C
	::UnityEngine::Bounds Field_1_12; // 0x70
	::System::Single Field_1_42; // 0x88
	::UnityEngine::Vector3 Field_1_34; // 0x8C
	::System::Single Field_1_40; // 0x98
	::System::Single Field_1_37; // 0x9C
	::UnityEngine::Vector3 Field_1_2; // 0xA0
	::System::Single Field_1_49; // 0xAC
	::System::Single Field_1_38; // 0xB0
	::System::Single Field_1_3; // 0xB4
	::System::Single Field_1_7; // 0xB8
	::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191 Field_1_27; // 0xBC
	::UnityEngine::Vector2 Field_1_39; // 0xD8
	::System::Boolean Field_1_58; // 0xE0
	::System::Boolean Field_1_50; // 0xE1
	::System::Boolean Field_1_32; // 0xE2
	::System::Boolean Field_1_31; // 0xE3
	::UnityEngine::Bounds Field_1_13; // 0xE4
	::System::Single Field_1_21; // 0xFC
	::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191 Field_1_26; // 0x100
	::System::Single Field_1_59; // 0x11C
	::System::Single Field_1_61; // 0x120
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_41; // 0x124
	::UnityEngine::Vector3 Field_1_56; // 0x134
	::System::Single Field_1_30; // 0x140
	::System::Boolean Field_1_48; // 0x144
	::System::Boolean Field_1_33; // 0x145
	::System::Boolean Field_1_47; // 0x146
	::UnityEngine::Vector3 Field_1_14; // 0x148
	::UnityEngine::Vector3 Field_1_15; // 0x154
	::System::Single Field_1_19; // 0x160
	::System::Single Field_1_29; // 0x164
	::System::Single Field_1_6; // 0x168
	::UnityEngine::Vector3 Field_1_57; // 0x16C
	::System::Single Field_1_23; // 0x178
	::System::Single Field_1_60; // 0x17C
	::System::Single Field_1_16; // 0x180
	::System::Single Field_1_10; // 0x184
	::System::Single Field_1_43; // 0x188
	::System::Single Field_1_17; // 0x18C
	::UnityEngine::Vector2 Field_1_53; // 0x190
	::System::Single Field_1_5; // 0x198
	::UnityEngine::Vector3 Field_1_1; // 0x19C
	::System::Single Field_1_8; // 0x1A8
	::UnityEngine::Vector2 Field_1_55; // 0x1AC
	::System::Single Field_1_11; // 0x1B4
	::System::Single Field_1_24; // 0x1B8
	::System::Single Field_1_18; // 0x1BC
	::System::Single Field_1_20; // 0x1C0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FF798D152DDA9A15(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_FF798D152DDA9A15_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_77195FD7E9A92F9D(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_77195FD7E9A92F9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191 Method_1_98AF69A4B7665FE1(::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191 a1, ::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191 a2, ::System::Single a3)
	{
		return ((::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191(*)(::PVOID, ::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191, ::Class_1_EF79B9ABDA480CB0_Struct_2_D192A2DF33C35191, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_98AF69A4B7665FE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Boolean Method_1_D1488CDBB6E94B89(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_D1488CDBB6E94B89_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_9037F1E5607EA334(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_9037F1E5607EA334_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_541535654D13B35D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_541535654D13B35D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_607112B48EA5DC32(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_607112B48EA5DC32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_431477787D58DFDD(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::UnityEngine::Bounds a13, ::UnityEngine::Vector2 a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::UnityEngine::Vector2 a17, ::UnityEngine::Vector2 a18, ::System::Boolean a19, ::MoleMole::Cameras::CameraTrackBlending* a20)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_431477787D58DFDD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
	}

	::System::Void Method_1_33531F86B1000CF5(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_33531F86B1000CF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_67D04068F791BA12(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_67D04068F791BA12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_816BFE60B2DD5A9E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_816BFE60B2DD5A9E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_60DACDE1C2CDD71F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_60DACDE1C2CDD71F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8EFD0FECAE4BDAF(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_F8EFD0FECAE4BDAF_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_A2C7696BD0B96C07(::Class_2_000597E145D7A42A<::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30>*))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_A2C7696BD0B96C07_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_A2846FC5EA0763C6_OFFSET))(this);
	}

	::System::Void Method_1_BDA76F015BC79B63(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_BDA76F015BC79B63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_161CE82DE0497A06(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_161CE82DE0497A06_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2527D92F050F86D5(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_2527D92F050F86D5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_03454CD87CB8226B(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::UnityEngine::Bounds a13, ::UnityEngine::Vector2 a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::UnityEngine::Vector2 a17, ::UnityEngine::Vector2 a18, ::System::Boolean a19)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_03454CD87CB8226B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C_1()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_486AF1E6C0038D4C_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_01F6D6781788AB62(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_01F6D6781788AB62_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30>* Method_1_87C5D508B87EDB0C()
	{
		return ((::Class_2_000597E145D7A42A<::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_87C5D508B87EDB0C_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_3D4CFFFBC92DA0B7(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::MoleMole::Cameras::CameraTrackBlending* a13, ::UnityEngine::Bounds a14, ::UnityEngine::Vector2 a15, ::UnityEngine::Vector2 a16, ::UnityEngine::Vector2 a17, ::UnityEngine::Vector2 a18, ::UnityEngine::Vector2 a19, ::System::Boolean a20)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_3D4CFFFBC92DA0B7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
	}

	::System::Void Method_1_AFDF4B7598FBFD2E(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_AFDF4B7598FBFD2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF798D152DDA9A15_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_FF798D152DDA9A15_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF79B9ABDA480CB0_METHOD_1_7778ABE51AFDB516_OFFSET))(this);
	}
};
