#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_5396005F9A53A130_1.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_7D1178ED3F03CA16.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_204;
class Class_1_6F763FE7425E8072;
class Class_4_B99AA5AE371451AA;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86A85CB5038B7046_METHOD_1_1289AAEAF1BAD5E1_OFFSET UNITYSDK_OFFSET(0x76113C0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_13194ECB7F84A1D5_OFFSET UNITYSDK_OFFSET(0x76115C0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_169CA316C0C2C8F4_OFFSET UNITYSDK_OFFSET(0x7613E30)
#define CLASS_1_86A85CB5038B7046_METHOD_1_16A533A29044DE20_OFFSET UNITYSDK_OFFSET(0x7611AB0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_196B296F2317D8CB_OFFSET UNITYSDK_OFFSET(0x7614DD0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_1F421B1A9BB50216_OFFSET UNITYSDK_OFFSET(0x7613840)
#define CLASS_1_86A85CB5038B7046_METHOD_1_2928DFA0E28FF764_OFFSET UNITYSDK_OFFSET(0x76143B0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_327AA43C6FA1BF1D_OFFSET UNITYSDK_OFFSET(0x7612920)
#define CLASS_1_86A85CB5038B7046_METHOD_1_38752412B052D0A4_OFFSET UNITYSDK_OFFSET(0x76118C0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_50FBAFCFC52302FF_OFFSET UNITYSDK_OFFSET(0x7615230)
#define CLASS_1_86A85CB5038B7046_METHOD_1_585F516F2193A5F9_OFFSET UNITYSDK_OFFSET(0x7613190)
#define CLASS_1_86A85CB5038B7046_METHOD_1_733C975925EB0A74_OFFSET UNITYSDK_OFFSET(0x76134A0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_798ED5286F794817_OFFSET UNITYSDK_OFFSET(0x7614D10)
#define CLASS_1_86A85CB5038B7046_METHOD_1_7AF3F620A6B6FA6C_OFFSET UNITYSDK_OFFSET(0x7613CC0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_8CBFF4EC280B41DB_OFFSET UNITYSDK_OFFSET(0x7613B90)
#define CLASS_1_86A85CB5038B7046_METHOD_1_A2234F2451595673_OFFSET UNITYSDK_OFFSET(0x7612F50)
#define CLASS_1_86A85CB5038B7046_METHOD_1_B51C268A10AE0D9D_OFFSET UNITYSDK_OFFSET(0x7614860)
#define CLASS_1_86A85CB5038B7046_METHOD_1_BEF34FA77B485A75_OFFSET UNITYSDK_OFFSET(0x7614250)
#define CLASS_1_86A85CB5038B7046_METHOD_1_C942D98B60641864_OFFSET UNITYSDK_OFFSET(0x7612190)
#define CLASS_1_86A85CB5038B7046_METHOD_1_D302F3CC6003DE5F_OFFSET UNITYSDK_OFFSET(0x7611F30)
#define CLASS_1_86A85CB5038B7046_METHOD_1_E3616C3E0B1005A5_OFFSET UNITYSDK_OFFSET(0x76125C0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_ED1BB7EFAB7166F8_OFFSET UNITYSDK_OFFSET(0x7613670)
#define CLASS_1_86A85CB5038B7046_METHOD_1_EEFF95A0B816C68D_OFFSET UNITYSDK_OFFSET(0x7613220)
#define CLASS_1_86A85CB5038B7046_METHOD_1_F232DA5FE2B51D5A_OFFSET UNITYSDK_OFFSET(0x7614180)
#define CLASS_1_86A85CB5038B7046_METHOD_1_FA3CF91C9C995791_OFFSET UNITYSDK_OFFSET(0x76124A0)
#define CLASS_1_86A85CB5038B7046_METHOD_1_FBC3223FEE6FA98D_OFFSET UNITYSDK_OFFSET(0x7614B50)
#define CLASS_1_86A85CB5038B7046_METHOD_1_FF89AE845DE8C992_OFFSET UNITYSDK_OFFSET(0x76146F0)
#define CLASS_1_86A85CB5038B7046__CCTOR_OFFSET UNITYSDK_OFFSET(0x7611380)

inline static constexpr unsigned int Class_1_86A85CB5038B7046_TypeDefinitionIndex = 61608;

class Class_1_86A85CB5038B7046 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86A85CB5038B7046_TypeDefinitionIndex)->GetStaticField(0x33560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046__CCTOR_OFFSET))();
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_1289AAEAF1BAD5E1(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_1289AAEAF1BAD5E1_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_13194ECB7F84A1D5(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_13194ECB7F84A1D5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_16A533A29044DE20(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Struct_2_50968EFA8638B3BF a2, ::MoleMole::HollowChessboard::HollowEntity*& a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::MoleMole::HollowChessboard::HollowEntity*&, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_16A533A29044DE20_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_6F763FE7425E8072* Method_1_D302F3CC6003DE5F(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::Class_1_6F763FE7425E8072*(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_D302F3CC6003DE5F_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_C942D98B60641864(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a6, ::System::Boolean a7, ::MoleMole::UIHollowChessPieceParticle_TransformType a8, ::System::Nullable_1<::Foundation::Unreal::FTransform> a9)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_C942D98B60641864_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_1_E3616C3E0B1005A5(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_E3616C3E0B1005A5_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_327AA43C6FA1BF1D(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::Class_1_86A85CB5038B7046_Struct_2_5396005F9A53A130_1& a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::Class_1_86A85CB5038B7046_Struct_2_5396005F9A53A130_1&))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_327AA43C6FA1BF1D_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_A2234F2451595673(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Int32 a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_A2234F2451595673_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_733C975925EB0A74(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_733C975925EB0A74_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_ED1BB7EFAB7166F8(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6, ::MoleMole::HollowChessboard::RenderDataAliveType a7)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_ED1BB7EFAB7166F8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_1F421B1A9BB50216(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_1F421B1A9BB50216_OFFSET))(a1, a2, a3);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_8CBFF4EC280B41DB(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_8CBFF4EC280B41DB_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_7AF3F620A6B6FA6C(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Int32 a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_7AF3F620A6B6FA6C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_585F516F2193A5F9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_585F516F2193A5F9_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_169CA316C0C2C8F4(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a6, ::System::Boolean a7, ::MoleMole::UIHollowChessPieceParticle_TransformType a8, ::System::Nullable_1<::Foundation::Unreal::FTransform> a9)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_169CA316C0C2C8F4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_1_F232DA5FE2B51D5A(::Class_1_6F763FE7425E8072* a1)
	{
		return ((::System::Void(*)(::Class_1_6F763FE7425E8072*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_F232DA5FE2B51D5A_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_BEF34FA77B485A75(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Int32 a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_BEF34FA77B485A75_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_2928DFA0E28FF764(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_2928DFA0E28FF764_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FF89AE845DE8C992(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_FF89AE845DE8C992_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_38752412B052D0A4(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_38752412B052D0A4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_B51C268A10AE0D9D(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_B51C268A10AE0D9D_OFFSET))(a1);
	}

	static ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689 Method_1_FBC3223FEE6FA98D(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::System::UInt64 a3, ::MoleMole::HollowChessboard::HollowCell a4, ::Class_1_86A85CB5038B7046_Struct_2_7D1178ED3F03CA16& a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::UInt64, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_86A85CB5038B7046_Struct_2_7D1178ED3F03CA16&, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_FBC3223FEE6FA98D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_EEFF95A0B816C68D(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Class_1_86A85CB5038B7046_Struct_2_7D1178ED3F03CA16& a4, ::MoleMole::HollowChessboard::RenderDataAliveType a5, ::System::Boolean a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_86A85CB5038B7046_Struct_2_7D1178ED3F03CA16&, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_EEFF95A0B816C68D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::BlendTextureSheetData* Method_1_798ED5286F794817(::System::String* a1)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_798ED5286F794817_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_196B296F2317D8CB(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Struct_2_50968EFA8638B3BF a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_196B296F2317D8CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FA3CF91C9C995791(::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689& a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::UInt64 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689&, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_FA3CF91C9C995791_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_50FBAFCFC52302FF(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_86A85CB5038B7046_METHOD_1_50FBAFCFC52302FF_OFFSET))(a1);
	}
};
