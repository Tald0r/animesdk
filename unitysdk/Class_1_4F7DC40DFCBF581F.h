#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1035.h"
#include "unitysdk/System/Object.h"

class Class_2_0C2477C03847E749_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F7DC40DFCBF581F_FINALIZE_OFFSET UNITYSDK_OFFSET(0xB09A2A0)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB09A180)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_13F2B083ED3B80E6_OFFSET UNITYSDK_OFFSET(0xB09A420)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB098560)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_19F311AC09A8016C_OFFSET UNITYSDK_OFFSET(0xB09AF00)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_2A0AD3ABBD6BB40E_OFFSET UNITYSDK_OFFSET(0xB098B10)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xB0987F0)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xB0985E0)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB09AA90)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_337B58129308C33F_OFFSET UNITYSDK_OFFSET(0xB09A8B0)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_36170E9D9D3D8AF6_OFFSET UNITYSDK_OFFSET(0xB09A8A0)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_492B5CEAF18AFFFE_OFFSET UNITYSDK_OFFSET(0xB09A890)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0xB09A310)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_D3A2BAC85671505B_OFFSET UNITYSDK_OFFSET(0xB09AB60)
#define CLASS_1_4F7DC40DFCBF581F_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB09A5F0)
#define CLASS_1_4F7DC40DFCBF581F__CTOR_OFFSET UNITYSDK_OFFSET(0xB09A680)

inline static constexpr unsigned int Class_1_4F7DC40DFCBF581F_TypeDefinitionIndex = 74588;

class Class_1_4F7DC40DFCBF581F : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_0C2477C03847E749_1*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_6; // 0x28
	::Struct_2_1862835F8661A21F_1035 Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0C2477C03847E749_1*>*>*>* Field_1_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*>*>* Field_1_1; // 0x50
	::System::Int32 Field_1_7; // 0x58
	::System::Boolean Field_1_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A0AD3ABBD6BB40E(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_2A0AD3ABBD6BB40E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*>*>* Method_1_492B5CEAF18AFFFE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_492B5CEAF18AFFFE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>* Method_1_36170E9D9D3D8AF6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_36170E9D9D3D8AF6_OFFSET))(this);
	}

	::Class_2_0C2477C03847E749_1* Method_1_337B58129308C33F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_0C2477C03847E749_1*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_337B58129308C33F_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::Class_2_0C2477C03847E749_1*>* Method_1_13F2B083ED3B80E6()
	{
		return ((::Il2CppArray<::Class_2_0C2477C03847E749_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_13F2B083ED3B80E6_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_0C2477C03847E749_1* Method_1_D3A2BAC85671505B(::System::Int32 a1)
	{
		return ((::Class_2_0C2477C03847E749_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_D3A2BAC85671505B_OFFSET))(this, a1);
	}

	::Class_2_0C2477C03847E749_1* Method_1_19F311AC09A8016C(::System::Int32 a1)
	{
		return ((::Class_2_0C2477C03847E749_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F7DC40DFCBF581F_METHOD_1_19F311AC09A8016C_OFFSET))(this, a1);
	}
};
