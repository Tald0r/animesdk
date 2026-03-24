#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_395;
class Class_2_CE524E0BB2F7DB94;
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_0B0C993B34575B04_OFFSET UNITYSDK_OFFSET(0xB7E5C20)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xB7E6080)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_19B14977ABA39612_1_OFFSET UNITYSDK_OFFSET(0xB7E4ED0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0xB7E52E0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB7E62B0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_20A4F4259B985034_OFFSET UNITYSDK_OFFSET(0xB7E5A70)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_242C14B87BCE28F3_OFFSET UNITYSDK_OFFSET(0xB7E2C30)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_2B16B5F01C53C142_OFFSET UNITYSDK_OFFSET(0xB7E4380)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_35BAAC83AC1968DF_OFFSET UNITYSDK_OFFSET(0xB7E3970)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xB7E6800)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3A28462B95074C25_OFFSET UNITYSDK_OFFSET(0xB7E3140)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3B256494624AE507_1_OFFSET UNITYSDK_OFFSET(0xB7E6BA0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3B256494624AE507_OFFSET UNITYSDK_OFFSET(0xB7E68A0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3D9596909EB37141_OFFSET UNITYSDK_OFFSET(0xB7E4AC0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0xB7E57B0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_4236E7E31C05E4C7_OFFSET UNITYSDK_OFFSET(0xB7E2F00)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_1_OFFSET UNITYSDK_OFFSET(0xB7E6360)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_2_OFFSET UNITYSDK_OFFSET(0xB7E66E0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_3_OFFSET UNITYSDK_OFFSET(0xB7E6770)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_OFFSET UNITYSDK_OFFSET(0xB7E5B90)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0xB7E5DC0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_5D5B1891CA405015_OFFSET UNITYSDK_OFFSET(0xB7E5920)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0xB7E6590)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_6C76983C70A89A92_OFFSET UNITYSDK_OFFSET(0xB7E5700)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0xB7E3760)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xB7E48C0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_9BE2513CD38A5F3E_OFFSET UNITYSDK_OFFSET(0xB7E5FE0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A18662FA482D7639_OFFSET UNITYSDK_OFFSET(0xB7E5870)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0xB7E5AA0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB7E63F0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A767000790C2B6C7_OFFSET UNITYSDK_OFFSET(0xB7E3630)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_AC3009196FFE7496_1_OFFSET UNITYSDK_OFFSET(0xB7E5F50)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_AC3009196FFE7496_2_OFFSET UNITYSDK_OFFSET(0xB7E6950)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_AC3009196FFE7496_OFFSET UNITYSDK_OFFSET(0xB7E5D30)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_B839AD5CB4E018CF_OFFSET UNITYSDK_OFFSET(0xB7E44F0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_BA1B3CCCB56FD281_OFFSET UNITYSDK_OFFSET(0xB7E6480)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_BE6C5D91F3539B47_OFFSET UNITYSDK_OFFSET(0xB7E4DB0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xB7E5EC0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_C76BE59F2FF3E457_OFFSET UNITYSDK_OFFSET(0xB7E6A10)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xB7E6240)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D675F692CCA6D70B_1_OFFSET UNITYSDK_OFFSET(0xB7E4700)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D675F692CCA6D70B_2_OFFSET UNITYSDK_OFFSET(0xB7E47F0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D675F692CCA6D70B_OFFSET UNITYSDK_OFFSET(0xB7E4570)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_F24A112B56A2E4B4_1_OFFSET UNITYSDK_OFFSET(0xB7E6050)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0xB7E69E0)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB7E6330)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_FA07211BE90EEC5E_OFFSET UNITYSDK_OFFSET(0xB7E4960)
#define CLASS_3_A8DF8B2CF8EBC070_METHOD_3_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0xB7E37D0)
#define CLASS_3_A8DF8B2CF8EBC070__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E2B00)

inline static constexpr unsigned int Class_3_A8DF8B2CF8EBC070_TypeDefinitionIndex = 54512;

class Class_3_A8DF8B2CF8EBC070 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::Class_2_CE524E0BB2F7DB94* Field_3_3; // 0x28
	::Il2CppArray<::Class_2_CE524E0BB2F7DB94*>* Field_3_4; // 0x30
	::Il2CppArray<::UnityEngine::Vector4>* Field_3_1; // 0x38
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x40
	::Il2CppArray<::System::Int32>* Field_3_0; // 0x48
	::System::Boolean Field_3_5; // 0x50
	::System::Boolean Field_3_6; // 0x51

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_4236E7E31C05E4C7(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_4236E7E31C05E4C7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_3_A767000790C2B6C7(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A767000790C2B6C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_FD1A8012013ED9C5_OFFSET))(this, a1);
	}

	::System::Void Method_3_35BAAC83AC1968DF(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_35BAAC83AC1968DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2B16B5F01C53C142(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_2B16B5F01C53C142_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D675F692CCA6D70B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D675F692CCA6D70B_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_D675F692CCA6D70B_2(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D675F692CCA6D70B_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Int32 Method_3_3D9596909EB37141(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Boolean a12, ::System::Single a13, ::System::Single a14, ::MoleMole::TextureSheetSkipFrameParam* a15, ::System::Int32 a16, ::System::Int32 a17, ::Class_0_16E4307DCC419505_395* a18)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::Int32, ::Class_0_16E4307DCC419505_395*))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3D9596909EB37141_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Boolean Method_3_BE6C5D91F3539B47(::UnityEngine::Vector4 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_BE6C5D91F3539B47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B839AD5CB4E018CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_B839AD5CB4E018CF_OFFSET))(this);
	}

	::System::Void Method_3_6C76983C70A89A92(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_6C76983C70A89A92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94* Method_3_242C14B87BCE28F3(::System::Int32 a1)
	{
		return ((::Class_2_CE524E0BB2F7DB94*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_242C14B87BCE28F3_OFFSET))(this, a1);
	}

	::System::Void Method_3_A18662FA482D7639(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A18662FA482D7639_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5D5B1891CA405015(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_5D5B1891CA405015_OFFSET))(this, a1, a2);
	}

	::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE Method_3_20A4F4259B985034()
	{
		return ((::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_20A4F4259B985034_OFFSET))(this);
	}

	::System::Int32 Method_3_A24680A134F40BA4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A24680A134F40BA4_OFFSET))(this, a1);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B0C993B34575B04(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_0B0C993B34575B04_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC3009196FFE7496(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_AC3009196FFE7496_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_513F60E1612756A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_3_AC3009196FFE7496_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_AC3009196FFE7496_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_9BE2513CD38A5F3E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_9BE2513CD38A5F3E_OFFSET))(this);
	}

	::System::Void Method_3_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_3_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_19B14977ABA39612_OFFSET))(this);
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_3_BA1B3CCCB56FD281(::System::Int32 a1, ::MoleMole::HollowPieceBlendMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_BA1B3CCCB56FD281_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_640514F2FC7A7607_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_797B0DC3D00A8877_OFFSET))(a1);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_2(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_3A28462B95074C25(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::Class_0_16E4307DCC419505_395* a18)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::Class_0_16E4307DCC419505_395*))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3A28462B95074C25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_3_47EDE3CF74BCE1B1_3(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_47EDE3CF74BCE1B1_3_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Void Method_3_3B256494624AE507(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3B256494624AE507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AC3009196FFE7496_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_AC3009196FFE7496_2_OFFSET))(this, a1);
	}

	::System::String* Method_3_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_F24A112B56A2E4B4_OFFSET))(this);
	}

	::System::Void Method_3_19B14977ABA39612_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_19B14977ABA39612_1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_FA07211BE90EEC5E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_FA07211BE90EEC5E_OFFSET))(this, a1);
	}

	::System::Void Method_3_C76BE59F2FF3E457(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_C76BE59F2FF3E457_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_F24A112B56A2E4B4_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_F24A112B56A2E4B4_1_OFFSET))(this);
	}

	::System::Void Method_3_3B256494624AE507_1(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A8DF8B2CF8EBC070_METHOD_3_3B256494624AE507_1_OFFSET))(this, a1, a2);
	}
};
