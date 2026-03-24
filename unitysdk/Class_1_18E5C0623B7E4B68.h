#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo_LineType.h"
#include "unitysdk/Struct_2_90CF7B92576C9A88.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5711CB95EE68214E;
class Class_1_6360C4960CAEFC9B;
class Class_5_AF65C3A968E836D2;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_18E5C0623B7E4B68_METHOD_1_020E9287B4BCC852_OFFSET UNITYSDK_OFFSET(0x9B71860)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_410502AC7D7FFDCB_OFFSET UNITYSDK_OFFSET(0x9B71A90)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_54DADD0A0126F107_OFFSET UNITYSDK_OFFSET(0x9B71650)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_609C48A994D1F25E_OFFSET UNITYSDK_OFFSET(0x9B71380)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x9B70F00)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_7B4EBB4195A11E27_OFFSET UNITYSDK_OFFSET(0x9B71470)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_9A5A7BA22667FCB3_OFFSET UNITYSDK_OFFSET(0x9B70940)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_B39C84498C282F8D_OFFSET UNITYSDK_OFFSET(0x9B70E90)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_D6D94AF7589CE04E_OFFSET UNITYSDK_OFFSET(0x9B71110)
#define CLASS_1_18E5C0623B7E4B68_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x9B70CA0)
#define CLASS_1_18E5C0623B7E4B68__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B70900)
#define CLASS_1_18E5C0623B7E4B68__CTOR_OFFSET UNITYSDK_OFFSET(0x9B70800)

inline static constexpr unsigned int Class_1_18E5C0623B7E4B68_TypeDefinitionIndex = 46310;

class Class_1_18E5C0623B7E4B68 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18E5C0623B7E4B68_TypeDefinitionIndex)->GetStaticField(0x10480);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Class_1_6360C4960CAEFC9B*>* Field_1_1; // 0x10
	::Class_5_AF65C3A968E836D2* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>* Field_1_2; // 0x20
	::UnityEngine::MaterialPropertyBlock* Field_1_6; // 0x28
	::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>* Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68__CCTOR_OFFSET))();
	}

	::Struct_2_90CF7B92576C9A88 Method_1_9A5A7BA22667FCB3(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::Foundation::Unreal::FTransform3D a2, ::System::Boolean a3)
	{
		return ((::Struct_2_90CF7B92576C9A88(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_9A5A7BA22667FCB3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B39C84498C282F8D(::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>*))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_B39C84498C282F8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}

	::System::Void Method_1_D6D94AF7589CE04E(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_D6D94AF7589CE04E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_609C48A994D1F25E(::Class_1_6360C4960CAEFC9B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6360C4960CAEFC9B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_609C48A994D1F25E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B4EBB4195A11E27(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo_LineType, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_7B4EBB4195A11E27_OFFSET))(this, a1);
	}

	::System::Void Method_1_54DADD0A0126F107(::Class_5_AF65C3A968E836D2* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_54DADD0A0126F107_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_5711CB95EE68214E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5711CB95EE68214E*))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_020E9287B4BCC852(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_020E9287B4BCC852_OFFSET))(this, a1, a2);
	}

	::Class_1_6360C4960CAEFC9B* Method_1_410502AC7D7FFDCB(::MoleMole::HollowChessboard::ChessboardView::LineInfo a1, ::System::Boolean a2)
	{
		return ((::Class_1_6360C4960CAEFC9B*(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_18E5C0623B7E4B68_METHOD_1_410502AC7D7FFDCB_OFFSET))(this, a1, a2);
	}
};
