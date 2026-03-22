#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_019870FE224FBE5A.h"
#include "unitysdk/Class_1_019870FE224FBE5A_Enum_3_30DBE09C3D99043A.h"

namespace MoleMole { class UIHollowMainPageContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_3D60E0FFE694D985_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x8B7FE70)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x8B7FCB0)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x8B7FE80)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0x8B7FD30)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_D516C68C85520F4E_OFFSET UNITYSDK_OFFSET(0x8B7FCC0)
#define CLASS_2_3D60E0FFE694D985__CTOR_OFFSET UNITYSDK_OFFSET(0x8B7FDA0)

inline static constexpr unsigned int Class_2_3D60E0FFE694D985_TypeDefinitionIndex = 61633;

class Class_2_3D60E0FFE694D985 : public ::Class_1_019870FE224FBE5A
{
public:
	::MoleMole::UIHollowMainPageContext* Field_2_0; // 0x88
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_2_1; // 0x90
	::System::Int32 Field_2_4; // 0x98
	::System::Int32 Field_2_3; // 0x9C
	::System::Boolean Field_2_2; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985__CTOR_OFFSET))(this);
	}

	::Class_1_019870FE224FBE5A_Enum_3_30DBE09C3D99043A Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_019870FE224FBE5A_Enum_3_30DBE09C3D99043A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_2_D516C68C85520F4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_D516C68C85520F4E_OFFSET))(this);
	}

	::System::Void Method_2_9B6BAF49879647BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_9B6BAF49879647BD_OFFSET))(this);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}
};
