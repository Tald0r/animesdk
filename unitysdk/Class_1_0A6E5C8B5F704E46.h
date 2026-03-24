#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_3_0029CC0B0DA27E39;
class Class_4_7162AE539CEC5D38;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_29008C43B49D5994_OFFSET UNITYSDK_OFFSET(0xCE7F350)
#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_9D3D562222435479_OFFSET UNITYSDK_OFFSET(0xCE7ECC0)
#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_B2DFD33DF29E34DD_OFFSET UNITYSDK_OFFSET(0xCE7E760)
#define CLASS_1_0A6E5C8B5F704E46_METHOD_1_D7A717643D418342_OFFSET UNITYSDK_OFFSET(0xCE7EA50)
#define CLASS_1_0A6E5C8B5F704E46__CTOR_OFFSET UNITYSDK_OFFSET(0xCE7E740)

inline static constexpr unsigned int Class_1_0A6E5C8B5F704E46_TypeDefinitionIndex = 64154;

class Class_1_0A6E5C8B5F704E46 : public ::System::Object
{
public:
	::Class_3_0029CC0B0DA27E39* Field_1_0; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x18
	::Enum_3_ABCAEFDF06E3479A Field_1_1; // 0x24

	::System::Void _ctor(::Class_3_0029CC0B0DA27E39* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0029CC0B0DA27E39*, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B2DFD33DF29E34DD(::Class_5_AF65C3A968E836D2* a1, ::Class_4_7162AE539CEC5D38* a2, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_4_7162AE539CEC5D38*, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*&))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_B2DFD33DF29E34DD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_9D3D562222435479(::Class_3_0029CC0B0DA27E39* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_1_0AEBFEBDADDA07AC*& a3)
	{
		return ((::System::Boolean(*)(::Class_3_0029CC0B0DA27E39*, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0AEBFEBDADDA07AC*&))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_9D3D562222435479_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>* Method_1_D7A717643D418342(::Class_4_7162AE539CEC5D38* a1, ::Class_3_0029CC0B0DA27E39* a2, ::Class_5_AF65C3A968E836D2* a3, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*(*)(::PVOID, ::Class_4_7162AE539CEC5D38*, ::Class_3_0029CC0B0DA27E39*, ::Class_5_AF65C3A968E836D2*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_D7A717643D418342_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Nullable_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195> Method_1_29008C43B49D5994(::Class_4_7162AE539CEC5D38* a1, ::Class_3_0029CC0B0DA27E39* a2, ::Class_5_AF65C3A968E836D2* a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Nullable_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>(*)(::Class_4_7162AE539CEC5D38*, ::Class_3_0029CC0B0DA27E39*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_0A6E5C8B5F704E46_METHOD_1_29008C43B49D5994_OFFSET))(a1, a2, a3, a4);
	}
};
