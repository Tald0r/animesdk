#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_C8A4CA21E9D7DEAD.h"
#include "unitysdk/Class_5_B2845C2A66134217_Struct_2_75998F823CB8F99E.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardGroupAnimNode_ChessboardGroupAnimType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
class Class_2_208CC9941471731A_161;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_B2845C2A66134217_METHOD_5_00F49FDE161B336F_OFFSET UNITYSDK_OFFSET(0x6DAC230)
#define CLASS_5_B2845C2A66134217_METHOD_5_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x6DADDC0)
#define CLASS_5_B2845C2A66134217_METHOD_5_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x6DAD410)
#define CLASS_5_B2845C2A66134217_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x6DADAC0)
#define CLASS_5_B2845C2A66134217_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x6DAD100)
#define CLASS_5_B2845C2A66134217_METHOD_5_A3DCAAF0AC67F160_OFFSET UNITYSDK_OFFSET(0x6DADC50)
#define CLASS_5_B2845C2A66134217_METHOD_5_AA1851071D4E8FF4_OFFSET UNITYSDK_OFFSET(0x6DAD810)
#define CLASS_5_B2845C2A66134217_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6DADD60)
#define CLASS_5_B2845C2A66134217_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6DAD7A0)
#define CLASS_5_B2845C2A66134217_METHOD_5_CC9338786C773E16_OFFSET UNITYSDK_OFFSET(0x6DAB600)
#define CLASS_5_B2845C2A66134217_METHOD_5_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x6DAB7E0)
#define CLASS_5_B2845C2A66134217_METHOD_5_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x6DABC00)
#define CLASS_5_B2845C2A66134217__CTOR_OFFSET UNITYSDK_OFFSET(0x6DAD6E0)

inline static constexpr unsigned int Class_5_B2845C2A66134217_TypeDefinitionIndex = 56614;

class Class_5_B2845C2A66134217 : public ::Class_4_C8A4CA21E9D7DEAD
{
public:
	// static const ::System::Int32 Field_5_6 = 0x64; // 0x0
	::UnityEngine::AnimationCurve* Field_5_3; // 0x40
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_5_7; // 0x48
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_5_8; // 0x50
	::Class_2_208CC9941471731A_161* Field_5_4; // 0x58
	::System::Single Field_5_2; // 0x60
	::MoleMole::Config::ConfigChessboardGroupAnimNode_ChessboardGroupAnimType Field_5_0; // 0x64
	::System::Single Field_5_1; // 0x68
	::System::Int32 Field_5_5; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_CC9338786C773E16(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_CC9338786C773E16_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_5_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_00F49FDE161B336F(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_00F49FDE161B336F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_5_AA1851071D4E8FF4(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_AA1851071D4E8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_5_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_5_A3DCAAF0AC67F160(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_B2845C2A66134217_Struct_2_75998F823CB8F99E& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_5_B2845C2A66134217_Struct_2_75998F823CB8F99E&))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_A3DCAAF0AC67F160_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_5_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_B2845C2A66134217_METHOD_5_85377D41FEE05B66_OFFSET))(this);
	}
};
