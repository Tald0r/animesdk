#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Class_2_1A3414978CEF17EE.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_1_OFFSET UNITYSDK_OFFSET(0x67CA2A0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x67C9870)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_22C031C2E2271C85_OFFSET UNITYSDK_OFFSET(0x67C93D0)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_91A20B55684399F1_OFFSET UNITYSDK_OFFSET(0x67C9990)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x67C9320)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_C4697BD0C46DB624_OFFSET UNITYSDK_OFFSET(0x67C9E10)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x67C9700)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x67C9310)
#define CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x67C9300)
#define CLASS_3_02949FFE0617AE6C__CTOR_OFFSET UNITYSDK_OFFSET(0x67C92C0)

inline static constexpr unsigned int Class_3_02949FFE0617AE6C_TypeDefinitionIndex = 68493;

class Class_3_02949FFE0617AE6C : public ::Class_2_1A3414978CEF17EE<::MoleMole::HollowChessboard::SceneAnimRenderSection*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_3_2; // 0x28
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_1; // 0x30
	::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType> Field_3_0; // 0x40

	::System::Void _ctor(::MoleMole::HollowChessboard::SceneAnimRenderSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689 Method_3_91A20B55684399F1()
	{
		return ((::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_91A20B55684399F1_OFFSET))(this);
	}

	::System::Void Method_3_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_3_C4697BD0C46DB624(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_C4697BD0C46DB624_OFFSET))(this, a1);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_06A2B758FCB8A24E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_06A2B758FCB8A24E_1_OFFSET))(this);
	}

	::System::Boolean Method_3_22C031C2E2271C85()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02949FFE0617AE6C_METHOD_3_22C031C2E2271C85_OFFSET))(this);
	}
};
