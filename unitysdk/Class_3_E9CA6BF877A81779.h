#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2B686E029302D4EC;
class Class_1_B56AEEA9EF6A2890;
class Class_4_AC6D98911872E0CE;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E9CA6BF877A81779_METHOD_3_0B9873702AAF54CB_OFFSET UNITYSDK_OFFSET(0x91391A0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_1832FA2ECF2B8B19_OFFSET UNITYSDK_OFFSET(0x913B890)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9139660)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_32E5829A08214E61_OFFSET UNITYSDK_OFFSET(0x913B700)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x913C0B0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_5068F669523739DA_OFFSET UNITYSDK_OFFSET(0x9139720)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_65736AD7B729F7DE_OFFSET UNITYSDK_OFFSET(0x913B350)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_720B327034ECF813_OFFSET UNITYSDK_OFFSET(0x9139E40)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_778FA688D221A275_OFFSET UNITYSDK_OFFSET(0x913A170)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_805EC4FDFBEE9FFB_OFFSET UNITYSDK_OFFSET(0x913BA30)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_89ACC0CD3A3AFD3F_OFFSET UNITYSDK_OFFSET(0x913A730)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_8A594F69DEE6A9FA_OFFSET UNITYSDK_OFFSET(0x91398C0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_1_OFFSET UNITYSDK_OFFSET(0x913A590)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_OFFSET UNITYSDK_OFFSET(0x9139B00)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x913AF10)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_AADADE2E7E712CBF_OFFSET UNITYSDK_OFFSET(0x913BB90)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x913A9E0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x913C250)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_CEC21AA00737347E_OFFSET UNITYSDK_OFFSET(0x913AB70)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_E7BC66F94B7A6CBF_OFFSET UNITYSDK_OFFSET(0x9139CA0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_F0C26FD243C15D0F_OFFSET UNITYSDK_OFFSET(0x913B560)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_FB8F7751208F6238_OFFSET UNITYSDK_OFFSET(0x913B0A0)
#define CLASS_3_E9CA6BF877A81779__CTOR_OFFSET UNITYSDK_OFFSET(0x9139040)

inline static constexpr unsigned int Class_3_E9CA6BF877A81779_TypeDefinitionIndex = 57456;

class Class_3_E9CA6BF877A81779 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHollowChessPieceParticle*>* Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::UIHollowChessPieceParticle*>* Field_3_3; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_3_2; // 0x40
	::Class_1_B56AEEA9EF6A2890* Field_3_4; // 0x48

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B9873702AAF54CB(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_0B9873702AAF54CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_5068F669523739DA(::Class_1_2B686E029302D4EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B686E029302D4EC*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_5068F669523739DA_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_8A594F69DEE6A9FA(::System::String* a1, ::System::Boolean a2, ::Class_4_AC6D98911872E0CE* a3, ::System::Boolean a4, ::MoleMole::UIHollowChessPieceParticle_TransformType a5, ::System::Nullable_1<::Foundation::Unreal::FTransform> a6)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::System::Boolean, ::Class_4_AC6D98911872E0CE*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_8A594F69DEE6A9FA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_3_E7BC66F94B7A6CBF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_E7BC66F94B7A6CBF_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_9CD4C99A95D56585(::System::String* a1, ::System::Boolean a2, ::Class_4_AC6D98911872E0CE* a3, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_TransformType a6, ::System::Nullable_1<::Foundation::Unreal::FTransform> a7, ::System::Single a8, ::System::Boolean a9)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::System::Boolean, ::Class_4_AC6D98911872E0CE*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_9CD4C99A95D56585_1(::System::String* a1, ::System::Boolean a2, ::Class_4_AC6D98911872E0CE* a3, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_TransformType a6, ::System::Nullable_1<::Foundation::Unreal::FTransform> a7, ::System::Single a8, ::System::Boolean a9)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::System::Boolean, ::Class_4_AC6D98911872E0CE*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_3_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Boolean Method_3_CEC21AA00737347E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_CEC21AA00737347E_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::String* Method_3_FB8F7751208F6238(::MoleMole::HollowChessPieceSizeType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::HollowChessPieceSizeType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_FB8F7751208F6238_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_65736AD7B729F7DE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_65736AD7B729F7DE_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_89ACC0CD3A3AFD3F(::System::String* a1, ::Class_4_AC6D98911872E0CE* a2, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a3, ::MoleMole::UIHollowChessPieceParticle_TransformType a4, ::System::Nullable_1<::Foundation::Unreal::FTransform> a5)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::Class_4_AC6D98911872E0CE*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_89ACC0CD3A3AFD3F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_F0C26FD243C15D0F(::Class_1_B56AEEA9EF6A2890* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B56AEEA9EF6A2890*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_F0C26FD243C15D0F_OFFSET))(this, a1);
	}

	::System::String* Method_3_32E5829A08214E61()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_32E5829A08214E61_OFFSET))(this);
	}

	::System::Void Method_3_778FA688D221A275(::System::Boolean a1, ::Class_4_AC6D98911872E0CE* a2, ::System::Boolean a3, ::MoleMole::UIHollowChessPieceParticle* a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_4_AC6D98911872E0CE*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_778FA688D221A275_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_1832FA2ECF2B8B19(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_1832FA2ECF2B8B19_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_720B327034ECF813(::System::String* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2, ::Class_4_AC6D98911872E0CE* a3, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a4, ::MoleMole::UIHollowChessPieceParticle_TransformType a5, ::System::Nullable_1<::Foundation::Unreal::FTransform> a6)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*, ::Class_4_AC6D98911872E0CE*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_720B327034ECF813_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_AADADE2E7E712CBF(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_AADADE2E7E712CBF_OFFSET))(this, a1);
	}

	::System::Void Method_3_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_3_805EC4FDFBEE9FFB(::Class_4_AC6D98911872E0CE* a1, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a2, ::MoleMole::UIHollowChessPieceParticle_TransformType a3, ::System::Nullable_1<::Foundation::Unreal::FTransform> a4, ::MoleMole::UIHollowChessPieceParticle* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>, ::MoleMole::UIHollowChessPieceParticle*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_805EC4FDFBEE9FFB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_C8E2469222842786_OFFSET))(this);
	}
};
