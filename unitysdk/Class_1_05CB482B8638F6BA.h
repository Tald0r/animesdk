#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_5CAF78499FEC005C;
class Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D;
class Class_1_EDF7E2913A3DD535;
class Class_1_FFFD203DD3F0C31F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_05CB482B8638F6BA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x16C49740)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_3E8D102494D67925_OFFSET UNITYSDK_OFFSET(0x16C494A0)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x16C49340)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_8E0F5833C4E97BF7_OFFSET UNITYSDK_OFFSET(0x16C48620)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x16C49750)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_C983A6882B884491_OFFSET UNITYSDK_OFFSET(0x16C49860)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_E59BEF6CC817DFCA_1_OFFSET UNITYSDK_OFFSET(0x16C49A50)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_E59BEF6CC817DFCA_OFFSET UNITYSDK_OFFSET(0x16C49350)
#define CLASS_1_05CB482B8638F6BA_METHOD_1_F614BBA31F0FD52E_OFFSET UNITYSDK_OFFSET(0x16C491F0)
#define CLASS_1_05CB482B8638F6BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C48440)
#define CLASS_1_05CB482B8638F6BA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C48490)

inline static constexpr unsigned int Class_1_05CB482B8638F6BA_TypeDefinitionIndex = 51499;

class Class_1_05CB482B8638F6BA : public ::System::Object
{
public:
	static ::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D** StaticGet_Field_1_3()
	{
		return (::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05CB482B8638F6BA_TypeDefinitionIndex)->GetStaticField(0x33040);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* Field_1_0; // 0x18
	::Class_1_FFFD203DD3F0C31F* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5CAF78499FEC005C*>* Field_1_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA__CTOR_OFFSET))(this);
	}

	::Class_1_5CAF78499FEC005C* Method_1_8E0F5833C4E97BF7(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_5CAF78499FEC005C* a2, ::Class_1_EDF7E2913A3DD535* a3)
	{
		return ((::Class_1_5CAF78499FEC005C*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_5CAF78499FEC005C*, ::Class_1_EDF7E2913A3DD535*))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_8E0F5833C4E97BF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F614BBA31F0FD52E(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_F614BBA31F0FD52E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FFFD203DD3F0C31F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFFD203DD3F0C31F*))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_5CAF78499FEC005C* Method_1_E59BEF6CC817DFCA(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_5CAF78499FEC005C*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_E59BEF6CC817DFCA_OFFSET))(this, a1);
	}

	::Class_1_5CAF78499FEC005C* Method_1_3E8D102494D67925(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_5CAF78499FEC005C*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_3E8D102494D67925_OFFSET))(this, a1);
	}

	::Class_1_FFFD203DD3F0C31F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FFFD203DD3F0C31F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_5CAF78499FEC005C* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_5CAF78499FEC005C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C983A6882B884491(::MoleMole::HollowChessboard::RenderDataHandle a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_C983A6882B884491_OFFSET))(this, a1, a2);
	}

	::Class_1_5CAF78499FEC005C* Method_1_E59BEF6CC817DFCA_1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_5CAF78499FEC005C*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_05CB482B8638F6BA_METHOD_1_E59BEF6CC817DFCA_1_OFFSET))(this, a1);
	}
};
