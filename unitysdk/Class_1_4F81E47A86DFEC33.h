#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DFF9931974CDE28.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_17E0E0442218CD79.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_0_16E4307DCC419505_332;
class Class_1_1C46DBAB65E43874;
class Class_1_4F81E47A86DFEC33_Class_1_50976B27DA2231DE;
class Class_2_ED6948B5924B9BC1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F81E47A86DFEC33_METHOD_1_0E02C4B6B05D1D1A_OFFSET UNITYSDK_OFFSET(0x95608F0)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_16D7A04257589AE9_OFFSET UNITYSDK_OFFSET(0x95616A0)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_1C763C6178E05F9A_OFFSET UNITYSDK_OFFSET(0x9560710)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_534E75C4D9B91EA3_OFFSET UNITYSDK_OFFSET(0x9560D50)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_54CD0459B58F15EE_OFFSET UNITYSDK_OFFSET(0x95612E0)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_788EFD7077986588_OFFSET UNITYSDK_OFFSET(0x95619F0)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_8C995E085DD61EF0_OFFSET UNITYSDK_OFFSET(0x955FAB0)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x955F920)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_CE67F8DAFFC0635B_OFFSET UNITYSDK_OFFSET(0x9560F80)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x955F7C0)
#define CLASS_1_4F81E47A86DFEC33_METHOD_1_DCF69FCDBDC9EE54_OFFSET UNITYSDK_OFFSET(0x95604D0)
#define CLASS_1_4F81E47A86DFEC33__CCTOR_OFFSET UNITYSDK_OFFSET(0x955EE20)
#define CLASS_1_4F81E47A86DFEC33__CTOR_OFFSET UNITYSDK_OFFSET(0x955F5D0)

inline static constexpr unsigned int Class_1_4F81E47A86DFEC33_TypeDefinitionIndex = 55077;

class Class_1_4F81E47A86DFEC33 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_4F81E47A86DFEC33_Class_1_50976B27DA2231DE*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_1_4F81E47A86DFEC33_Class_1_50976B27DA2231DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F81E47A86DFEC33_TypeDefinitionIndex)->GetStaticField(0x409B0);
	}
	::System::Collections::Generic::HashSet_1<::Enum_3_3DFF9931974CDE28>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_3DFF9931974CDE28, ::Class_0_16E4307DCC419505_332*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::RenderDataHandle, ::Struct_2_6CC2897B74C41026_3>* Field_1_3; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_B43DD0430B0FE876_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C995E085DD61EF0(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* a1, ::Class_1_1C46DBAB65E43874* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*, ::Class_1_1C46DBAB65E43874*))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_8C995E085DD61EF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C763C6178E05F9A(::Enum_3_3DFF9931974CDE28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3DFF9931974CDE28))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_1C763C6178E05F9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E02C4B6B05D1D1A(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_255*>* a1, ::Struct_2_17E0E0442218CD79 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_255*>*, ::Struct_2_17E0E0442218CD79))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_0E02C4B6B05D1D1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_1_534E75C4D9B91EA3(::MoleMole::HollowChessboard::RenderDataHandle a1, ::Struct_2_17E0E0442218CD79 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::Struct_2_17E0E0442218CD79))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_534E75C4D9B91EA3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_54CD0459B58F15EE(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_255*>* a1, ::Struct_2_17E0E0442218CD79 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_255*>*, ::Struct_2_17E0E0442218CD79))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_54CD0459B58F15EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCF69FCDBDC9EE54(::MoleMole::HollowChessboard::RenderDataHandle a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_DCF69FCDBDC9EE54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_16D7A04257589AE9(::Class_2_ED6948B5924B9BC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_ED6948B5924B9BC1*))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_16D7A04257589AE9_OFFSET))(this, a1);
	}

	::System::Void Method_1_788EFD7077986588(::Struct_2_17E0E0442218CD79& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_17E0E0442218CD79&))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_788EFD7077986588_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE67F8DAFFC0635B(::Enum_3_3DFF9931974CDE28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3DFF9931974CDE28))((::PBYTE)hIl2Cpp + CLASS_1_4F81E47A86DFEC33_METHOD_1_CE67F8DAFFC0635B_OFFSET))(this, a1);
	}
};
