#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/Enum_3_7B584A678A2DEB85.h"
#include "unitysdk/System/Object.h"

class Class_1_61587F018E03A222_1;
class Class_3_8675658B1FBE887E;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_8F4E0447EDFF454E_OFFSET UNITYSDK_OFFSET(0xB48C170)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_B38B4AE2771A8402_OFFSET UNITYSDK_OFFSET(0xB48B400)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB48C810)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_1_OFFSET UNITYSDK_OFFSET(0xB48BA70)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_OFFSET UNITYSDK_OFFSET(0xB48B390)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xB48C620)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_DF05B7628D304B6E_OFFSET UNITYSDK_OFFSET(0xB48BC90)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_E12C69EB8CD932C7_OFFSET UNITYSDK_OFFSET(0xB48B9A0)
#define CLASS_1_4CE63FCF9609E6DB_METHOD_1_EC07193EBB4649A8_OFFSET UNITYSDK_OFFSET(0xB48BAE0)
#define CLASS_1_4CE63FCF9609E6DB__CTOR_OFFSET UNITYSDK_OFFSET(0xB48B380)

inline static constexpr unsigned int Class_1_4CE63FCF9609E6DB_TypeDefinitionIndex = 54098;

class Class_1_4CE63FCF9609E6DB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_61587F018E03A222_1*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::Enum_3_7B584A678A2DEB85>* Field_1_3; // 0x28
	::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* Field_1_4; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C59EC92B8C2BFD96(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_OFFSET))(this, a1);
	}

	::System::Void Method_1_B38B4AE2771A8402(::Enum_3_71AA90D596A09AC8 a1, ::Class_3_8675658B1FBE887E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8, ::Class_3_8675658B1FBE887E*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_B38B4AE2771A8402_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF05B7628D304B6E(::Enum_3_71AA90D596A09AC8 a1, ::Class_3_8675658B1FBE887E* a2, ::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8, ::Class_3_8675658B1FBE887E*, ::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_DF05B7628D304B6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C59EC92B8C2BFD96_1(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_C59EC92B8C2BFD96_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F4E0447EDFF454E(::System::Collections::Generic::List_1<::System::Int32>*& a1, ::System::Int32& a2, ::Enum_3_7B584A678A2DEB85 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&, ::Enum_3_7B584A678A2DEB85, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_8F4E0447EDFF454E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_EC07193EBB4649A8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_EC07193EBB4649A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::UInt64 Method_1_E12C69EB8CD932C7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_E12C69EB8CD932C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CE63FCF9609E6DB_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}
};
