#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/Struct_2_4930D2C214CA4F0A.h"
#include "unitysdk/Struct_2_642E45C6B0A5D00A.h"
#include "unitysdk/Struct_2_98E26EC29C4FAB94.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/Struct_2_FBDDDFB807AE5AF5.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_88D8B6F46ADD4B5A;
class Class_1_E85C6B6436A9E3DA;
class Class_3_96CE54D1B5F2FEE8;
class Class_4_6B5E197F92845903;
class Class_4_932266083770655D;
class Class_4_C3281F1010689A02;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal::Internal { class Mach25ObjectInstancing; }

#define CLASS_3_BE848A35FC349094_METHOD_3_00CF90939841E387_OFFSET UNITYSDK_OFFSET(0x1AB13BF0)
#define CLASS_3_BE848A35FC349094_METHOD_3_1F49294A70542425_OFFSET UNITYSDK_OFFSET(0x1AB10B10)
#define CLASS_3_BE848A35FC349094_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1AB15C10)
#define CLASS_3_BE848A35FC349094_METHOD_3_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x1AB10D80)
#define CLASS_3_BE848A35FC349094_METHOD_3_327B657776861CA3_OFFSET UNITYSDK_OFFSET(0x1AB15CF0)
#define CLASS_3_BE848A35FC349094_METHOD_3_51F2B897ACF469BD_OFFSET UNITYSDK_OFFSET(0x1AB15980)
#define CLASS_3_BE848A35FC349094_METHOD_3_5596A39D4479DE72_OFFSET UNITYSDK_OFFSET(0x1AB152F0)
#define CLASS_3_BE848A35FC349094_METHOD_3_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x1AB11020)
#define CLASS_3_BE848A35FC349094_METHOD_3_6194F0C44E68EDE4_OFFSET UNITYSDK_OFFSET(0x1AB13740)
#define CLASS_3_BE848A35FC349094_METHOD_3_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x1AB11B80)
#define CLASS_3_BE848A35FC349094_METHOD_3_9F5FF55B2290E4A4_OFFSET UNITYSDK_OFFSET(0x1AB12470)
#define CLASS_3_BE848A35FC349094_METHOD_3_B1DC735D24356779_OFFSET UNITYSDK_OFFSET(0x1AB12EE0)
#define CLASS_3_BE848A35FC349094_METHOD_3_C10BF158F2861604_OFFSET UNITYSDK_OFFSET(0x1AB15A80)
#define CLASS_3_BE848A35FC349094_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AB15FF0)
#define CLASS_3_BE848A35FC349094_METHOD_3_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x1AB139E0)
#define CLASS_3_BE848A35FC349094_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1AB10F70)
#define CLASS_3_BE848A35FC349094_METHOD_3_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x1AB15C80)
#define CLASS_3_BE848A35FC349094_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1AB13970)
#define CLASS_3_BE848A35FC349094__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB13520)

inline static constexpr unsigned int Class_3_BE848A35FC349094_TypeDefinitionIndex = 80139;

class Class_3_BE848A35FC349094 : public ::Class_2_CEC393DDA7BD65D6
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::MoleMole::Arcade::BallsRace::BrEntityType, ::Class_4_C3281F1010689A02*, ::Class_4_932266083770655D*>>*>* Field_3_13; // 0x28
	::Class_4_932266083770655D* Field_3_9; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_5; // 0x38
	::Class_1_88D8B6F46ADD4B5A* Field_3_15; // 0x40
	::Class_3_96CE54D1B5F2FEE8* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_14; // 0x50
	::Class_4_6B5E197F92845903* Field_3_0; // 0x58
	::Class_4_932266083770655D* Field_3_2; // 0x60
	::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing* Field_3_12; // 0x68
	::System::Single Field_3_10; // 0x70
	::System::Single Field_3_8; // 0x74
	::UnityEngine::Quaternion Field_3_3; // 0x78
	::System::Single Field_3_4; // 0x88
	::Struct_2_E614D3B245F96744 Field_3_16; // 0x8C
	::System::Single Field_3_11; // 0x98
	::System::Boolean Field_3_6; // 0x9C
	::System::UInt64 Field_3_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1F49294A70542425(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_1F49294A70542425_OFFSET))(this, a1);
	}

	::System::Void Method_3_2943CB55423DBA35(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_2943CB55423DBA35_OFFSET))(this, a1);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::System::Single Method_3_6194F0C44E68EDE4(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_6194F0C44E68EDE4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC4DC8FB65DC8FF4(::Struct_2_98E26EC29C4FAB94 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_98E26EC29C4FAB94))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_3_51F2B897ACF469BD(::Struct_2_FBDDDFB807AE5AF5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBDDDFB807AE5AF5))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_51F2B897ACF469BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_9F5FF55B2290E4A4(::Class_4_C3281F1010689A02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_9F5FF55B2290E4A4_OFFSET))(this, a1);
	}

	::System::Void Method_3_C10BF158F2861604(::Struct_2_4930D2C214CA4F0A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4930D2C214CA4F0A))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_C10BF158F2861604_OFFSET))(this, a1);
	}

	::System::Void Method_3_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_5596A39D4479DE72(::Class_4_C3281F1010689A02* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_5596A39D4479DE72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_00CF90939841E387(::Class_4_C3281F1010689A02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_00CF90939841E387_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9_1(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_327B657776861CA3(::Struct_2_642E45C6B0A5D00A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_642E45C6B0A5D00A))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_327B657776861CA3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1DC735D24356779(::Class_4_932266083770655D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_932266083770655D*))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_B1DC735D24356779_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
