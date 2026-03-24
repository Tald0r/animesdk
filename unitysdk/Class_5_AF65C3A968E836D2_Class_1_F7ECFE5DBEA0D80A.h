#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7ECB9691B142D586;
class Class_5_AF65C3A968E836D2;
namespace DG::Tweening { class TweenCallback; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_049D0CDAB05162F1_OFFSET UNITYSDK_OFFSET(0xA2E3AA0)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xA2E3700)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_1_OFFSET UNITYSDK_OFFSET(0xA2E4780)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xA2E4410)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CD4F0)

inline static constexpr unsigned int Class_5_AF65C3A968E836D2_Class_1_F7ECFE5DBEA0D80A_TypeDefinitionIndex = 48459;

class Class_5_AF65C3A968E836D2_Class_1_F7ECFE5DBEA0D80A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* Field_1_2; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::UnityEngine::AnimationCurve* Field_1_8; // 0x20
	::Class_5_AF65C3A968E836D2* Field_1_3; // 0x28
	::DG::Tweening::TweenCallback* Field_1_11; // 0x30
	::DG::Tweening::TweenCallback* Field_1_10; // 0x38
	::MoleMole::Vector2Int Field_1_5; // 0x40
	::System::Single Field_1_0; // 0x48
	::System::Single Field_1_9; // 0x4C
	::System::Single Field_1_7; // 0x50
	::UnityEngine::Vector3 Field_1_4; // 0x54
	::System::Boolean Field_1_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_1_049D0CDAB05162F1(::Class_1_7ECB9691B142D586* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_049D0CDAB05162F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_B732DC7FA82BA621_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_F7ECFE5DBEA0D80A_METHOD_1_B732DC7FA82BA621_1_OFFSET))(this);
	}
};
