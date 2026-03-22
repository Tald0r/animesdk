#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_AE36917A57939791.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_025A1030984A033D;
class Class_3_3B94962EA5BB51E1;

#define CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6_METHOD_1_D91156C8F43A4C56_OFFSET UNITYSDK_OFFSET(0x90B1F20)
#define CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x90B1EB0)
#define CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x90B1DE0)
#define CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6__CTOR_OFFSET UNITYSDK_OFFSET(0x90B1C60)

inline static constexpr unsigned int Class_1_360A6A3FE351890B_Class_1_0CA000F58F020EC6_TypeDefinitionIndex = 46434;

class Class_1_360A6A3FE351890B_Class_1_0CA000F58F020EC6 : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::HollowCell* StaticGet_Field_1_0()
	{
		return (::MoleMole::HollowChessboard::HollowCell*)Il2CppClass::FromTypeDefinitionIndex(Class_1_360A6A3FE351890B_Class_1_0CA000F58F020EC6_TypeDefinitionIndex)->GetStaticField(0x10030);
	}
	::Class_3_3B94962EA5BB51E1* Field_1_10; // 0x10
	::Class_3_025A1030984A033D* Field_1_11; // 0x18
	::System::Single Field_1_1; // 0x20
	::Struct_2_AE36917A57939791 Field_1_12; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x38
	::System::Single Field_1_7; // 0x44
	::UnityEngine::Quaternion Field_1_4; // 0x48
	::System::Single Field_1_2; // 0x58
	::System::Single Field_1_6; // 0x5C
	::System::Single Field_1_8; // 0x60
	::UnityEngine::Vector3 Field_1_9; // 0x64
	::System::Single Field_1_5; // 0x70

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6__CTOR_1_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D91156C8F43A4C56(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_360A6A3FE351890B_CLASS_1_0CA000F58F020EC6_METHOD_1_D91156C8F43A4C56_OFFSET))(this, a1, a2);
	}
};
