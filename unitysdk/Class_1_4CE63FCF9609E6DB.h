#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_3.h"
#include "unitysdk/Enum_3_7B584A678A2DEB85.h"
#include "unitysdk/System/Object.h"

class Class_1_61587F018E03A222;
class Class_3_8675658B1FBE887E;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xE7B3BB0)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_8F4E0447EDFF454E_OFFSET UNITYSDK_OFFSET(0xE7B43F0)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_B38B4AE2771A8402_OFFSET UNITYSDK_OFFSET(0xE7B32C0)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_1_OFFSET UNITYSDK_OFFSET(0xE7B3990)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_OFFSET UNITYSDK_OFFSET(0xE7B3920)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xE7B3D20)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_DF05B7628D304B6E_OFFSET UNITYSDK_OFFSET(0xE7B3F10)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_E12C69EB8CD932C7_OFFSET UNITYSDK_OFFSET(0xE7B3850)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_EC07193EBB4649A8_OFFSET UNITYSDK_OFFSET(0xE7B3A00)
#define CLASS_1_4CE63FCF9609E6DB__CTOR_OFFSET UNITYSDK_OFFSET(0xE7B32B0)

inline static constexpr unsigned int Class_1_4CE63FCF9609E6DB_TypeDefinitionIndex = 57842;

class Class_1_4CE63FCF9609E6DB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_61587F018E03A222*>* Field_1_2; // 0x18
	::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::Enum_3_7B584A678A2DEB85>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_1_1; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B38B4AE2771A8402(::Enum_3_71AA90D596A09AC8_3 a1, ::Class_3_8675658B1FBE887E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_3, ::Class_3_8675658B1FBE887E*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_B38B4AE2771A8402_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C59EC92B8C2BFD96(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_DF05B7628D304B6E(::Enum_3_71AA90D596A09AC8_3 a1, ::Class_3_8675658B1FBE887E* a2, ::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_3, ::Class_3_8675658B1FBE887E*, ::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_DF05B7628D304B6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_EC07193EBB4649A8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_EC07193EBB4649A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8F4E0447EDFF454E(::System::Collections::Generic::List_1<::System::Int32>*& a1, ::System::Int32& a2, ::Enum_3_7B584A678A2DEB85 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&, ::Enum_3_7B584A678A2DEB85, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_8F4E0447EDFF454E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_1_C59EC92B8C2BFD96_1(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E12C69EB8CD932C7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_E12C69EB8CD932C7_OFFSET))(this, a1, a2);
	}
};
