#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_250;
class Class_0_16E4307DCC419505_307;
class Class_1_C5DFDCA489B646ED;
class Class_1_C98C01B00CFF7D8A;
class Class_1_F5B35B1B6669CF16;
class Class_4_7162AE539CEC5D38;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED492469204624B4_METHOD_1_0AF87D0747BFAED3_OFFSET UNITYSDK_OFFSET(0xD8297A0)
#define CLASS_1_ED492469204624B4_METHOD_1_0C65243341F1EFB1_OFFSET UNITYSDK_OFFSET(0xD82A5E0)
#define CLASS_1_ED492469204624B4_METHOD_1_1F5EDD05AC33279E_OFFSET UNITYSDK_OFFSET(0xD829500)
#define CLASS_1_ED492469204624B4_METHOD_1_29447AAAFABC7909_OFFSET UNITYSDK_OFFSET(0xD829480)
#define CLASS_1_ED492469204624B4_METHOD_1_2EEC16014FBB8744_OFFSET UNITYSDK_OFFSET(0xD82ACF0)
#define CLASS_1_ED492469204624B4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD82B710)
#define CLASS_1_ED492469204624B4_METHOD_1_52B5825C3319CBDF_OFFSET UNITYSDK_OFFSET(0xD829B50)
#define CLASS_1_ED492469204624B4_METHOD_1_68F275A4D0E6A3DF_OFFSET UNITYSDK_OFFSET(0xD82AF90)
#define CLASS_1_ED492469204624B4_METHOD_1_69713DFF2FAB4C18_OFFSET UNITYSDK_OFFSET(0xD82A670)
#define CLASS_1_ED492469204624B4_METHOD_1_74841B4C1DB6DA69_OFFSET UNITYSDK_OFFSET(0xD829400)
#define CLASS_1_ED492469204624B4_METHOD_1_9B6777BABA447C60_OFFSET UNITYSDK_OFFSET(0xD82A7B0)
#define CLASS_1_ED492469204624B4_METHOD_1_B7AF459C5BA9108D_OFFSET UNITYSDK_OFFSET(0xD82A380)
#define CLASS_1_ED492469204624B4_METHOD_1_BA00547407BCD0F4_OFFSET UNITYSDK_OFFSET(0xD82B360)
#define CLASS_1_ED492469204624B4_METHOD_1_BB64A799AE4464F1_OFFSET UNITYSDK_OFFSET(0xD82A3F0)
#define CLASS_1_ED492469204624B4_METHOD_1_D3CEBCE5167DA4F3_OFFSET UNITYSDK_OFFSET(0xD8296A0)
#define CLASS_1_ED492469204624B4_METHOD_1_D5FF8B775A51562E_OFFSET UNITYSDK_OFFSET(0xD82A890)
#define CLASS_1_ED492469204624B4_METHOD_1_E1B15FDCBB5E6478_OFFSET UNITYSDK_OFFSET(0xD82B590)
#define CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_1_OFFSET UNITYSDK_OFFSET(0xD82B7E0)
#define CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_OFFSET UNITYSDK_OFFSET(0xD82B450)
#define CLASS_1_ED492469204624B4_METHOD_1_F429AA1C283F2F4A_OFFSET UNITYSDK_OFFSET(0xD829140)
#define CLASS_1_ED492469204624B4__CTOR_OFFSET UNITYSDK_OFFSET(0xD8290C0)

inline static constexpr unsigned int Class_1_ED492469204624B4_TypeDefinitionIndex = 74940;

class Class_1_ED492469204624B4 : public ::System::Object
{
public:
	::Class_1_C5DFDCA489B646ED* Field_1_4; // 0x10
	::Class_5_AF65C3A968E836D2* Field_1_1; // 0x18
	::Class_1_F5B35B1B6669CF16* Field_1_0; // 0x20
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x28
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x34

	::System::Void _ctor(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_F429AA1C283F2F4A(::Class_1_C98C01B00CFF7D8A* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a3, ::MoleMole::HollowChessboard::HollowEntity* a4, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 a5, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_C98C01B00CFF7D8A*, ::Enum_3_ABCAEFDF06E3479A, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_F429AA1C283F2F4A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_4_7162AE539CEC5D38* Method_1_D3CEBCE5167DA4F3(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::Class_4_7162AE539CEC5D38*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_D3CEBCE5167DA4F3_OFFSET))(a1);
	}

	::System::Void Method_1_0AF87D0747BFAED3(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_0AF87D0747BFAED3_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Method_1_52B5825C3319CBDF(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowEntity*& a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowEntity*&, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_52B5825C3319CBDF_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_B7AF459C5BA9108D(::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 a1, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 a2)
	{
		return ((::System::Boolean(*)(::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_B7AF459C5BA9108D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB64A799AE4464F1(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_250*>* a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_250*>*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_BB64A799AE4464F1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_0C65243341F1EFB1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_0C65243341F1EFB1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_69713DFF2FAB4C18(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_69713DFF2FAB4C18_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9B6777BABA447C60(::Class_1_C98C01B00CFF7D8A* a1, ::Class_0_16E4307DCC419505_307* a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_C98C01B00CFF7D8A*, ::Class_0_16E4307DCC419505_307*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_9B6777BABA447C60_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_D5FF8B775A51562E(::Class_5_AF65C3A968E836D2* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a2, ::Class_4_7162AE539CEC5D38* a3, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>* a4, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 a5)
	{
		return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_4_7162AE539CEC5D38*, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_D5FF8B775A51562E_OFFSET))(a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_68F275A4D0E6A3DF(::Class_1_C98C01B00CFF7D8A* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::MoleMole::HollowChessboard::HollowEntity* a3, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_C98C01B00CFF7D8A*, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowEntity*, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_68F275A4D0E6A3DF_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 Method_1_BA00547407BCD0F4(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_BA00547407BCD0F4_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_E7AAFFBB211F3AED(::Class_5_AF65C3A968E836D2* a1, ::Class_0_16E4307DCC419505_307* a2, ::Class_1_C98C01B00CFF7D8A* a3, ::Enum_3_ABCAEFDF06E3479A a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_0_16E4307DCC419505_307*, ::Class_1_C98C01B00CFF7D8A*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5 Method_1_29447AAAFABC7909(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A a1)
	{
		return ((::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5(*)(::PVOID, ::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_29447AAAFABC7909_OFFSET))(this, a1);
	}

	::MoleMole::PieceModelAnimType Method_1_74841B4C1DB6DA69(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A a1)
	{
		return ((::MoleMole::PieceModelAnimType(*)(::PVOID, ::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_74841B4C1DB6DA69_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_250*>* Method_1_2EEC16014FBB8744(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1, ::Class_4_7162AE539CEC5D38* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_250*>*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_4_7162AE539CEC5D38*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_2EEC16014FBB8744_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1B15FDCBB5E6478(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1, ::Class_4_7162AE539CEC5D38* a2, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 a3, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26 a4, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195 a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_4_7162AE539CEC5D38*, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26, ::Class_5_8A5B236F53009830_Enum_3_F97681B4A0594B26, ::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E1B15FDCBB5E6478_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1F5EDD05AC33279E(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1, ::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_1F5EDD05AC33279E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_E7AAFFBB211F3AED_1(::Class_5_AF65C3A968E836D2* a1, ::Class_0_16E4307DCC419505_307* a2, ::Class_1_C98C01B00CFF7D8A* a3, ::Enum_3_ABCAEFDF06E3479A a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_0_16E4307DCC419505_307*, ::Class_1_C98C01B00CFF7D8A*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
