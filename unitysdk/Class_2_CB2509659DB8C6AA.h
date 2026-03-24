#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_02E84E3D148EE908.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_1_1473C3E3E800D9E0;
class Class_1_AB60BE3454AE2EF0;
class Class_1_D78EEB0971654883;
class Class_1_E5B7864412CDC074;
class Class_1_F50B5EAC0B6702FB;
class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CB2509659DB8C6AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA86B740)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_073B1439B8822A5B_OFFSET UNITYSDK_OFFSET(0xA86DED0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_1BE88C8A1AB99A42_1_OFFSET UNITYSDK_OFFSET(0xA86EC30)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_1BE88C8A1AB99A42_OFFSET UNITYSDK_OFFSET(0xA86CD60)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA86D8E0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_1D4884971B8D11B7_OFFSET UNITYSDK_OFFSET(0xA86EBA0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_297DCB6EEBBF9FB2_OFFSET UNITYSDK_OFFSET(0xA86EFD0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_425BE2FC3B83C815_OFFSET UNITYSDK_OFFSET(0xA86F140)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA86BEE0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xA86E6B0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_708BE988F4663FE8_OFFSET UNITYSDK_OFFSET(0xA86E7E0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_748B1819019EADA9_OFFSET UNITYSDK_OFFSET(0xA86EDD0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_76A7805CCDF0EF4D_OFFSET UNITYSDK_OFFSET(0xA86CF10)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_7F8A5A95815B532D_OFFSET UNITYSDK_OFFSET(0xA86DF90)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_82896EC53DEC3A6E_OFFSET UNITYSDK_OFFSET(0xA86E130)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_917F5B347FD41F60_OFFSET UNITYSDK_OFFSET(0xA86EA80)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_9362E8FA030FB7C8_OFFSET UNITYSDK_OFFSET(0xA86C220)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_99961F2CBA9BC8DD_OFFSET UNITYSDK_OFFSET(0xA86D4A0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_A5E89FFF9B5F6178_OFFSET UNITYSDK_OFFSET(0xA86D960)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_AAB958C808A9F6D2_1_OFFSET UNITYSDK_OFFSET(0xA86EB90)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_AAB958C808A9F6D2_2_OFFSET UNITYSDK_OFFSET(0xA86EFA0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_AAB958C808A9F6D2_OFFSET UNITYSDK_OFFSET(0xA86CF00)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_B93AEB6283F30D27_OFFSET UNITYSDK_OFFSET(0xA86E1D0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_BD784CB277941C0D_1_OFFSET UNITYSDK_OFFSET(0xA86EFC0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_BD784CB277941C0D_2_OFFSET UNITYSDK_OFFSET(0xA86F130)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_BD784CB277941C0D_OFFSET UNITYSDK_OFFSET(0xA86EFB0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_C2E87E5B9B2DA7DB_OFFSET UNITYSDK_OFFSET(0xA86EF10)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_C40BC63AC81886AD_OFFSET UNITYSDK_OFFSET(0xA86C6D0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_C74F4D2570E1073E_OFFSET UNITYSDK_OFFSET(0xA86E440)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_CEB90124B6C2EAC5_OFFSET UNITYSDK_OFFSET(0xA86CA30)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_D00952478A5F1AD7_OFFSET UNITYSDK_OFFSET(0xA86D020)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_D0CD2FF885EB29CA_OFFSET UNITYSDK_OFFSET(0xA86E760)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_D268AD353BBF0E38_OFFSET UNITYSDK_OFFSET(0xA86C560)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_DBAF50518B383E19_OFFSET UNITYSDK_OFFSET(0xA86F120)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_E7B0C037122A3134_OFFSET UNITYSDK_OFFSET(0xA86C9B0)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xA86FF10)
#define CLASS_2_CB2509659DB8C6AA_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xA86C3D0)
#define CLASS_2_CB2509659DB8C6AA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA86C1E0)
#define CLASS_2_CB2509659DB8C6AA__CTOR_OFFSET UNITYSDK_OFFSET(0xA86BF60)

inline static constexpr unsigned int Class_2_CB2509659DB8C6AA_TypeDefinitionIndex = 45984;

class Class_2_CB2509659DB8C6AA : public ::Foundation::Singleton_1<::Class_2_CB2509659DB8C6AA*>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB2509659DB8C6AA_TypeDefinitionIndex)->GetStaticField(0xEAB0);
	}
	::System::Collections::Generic::Dictionary_2<::Struct_2_02E84E3D148EE908, ::MoleMole::HollowChessboard::HollowChessboardUID>* Field_2_11; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_5_AF65C3A968E836D2*>*>* Field_2_9; // 0x18
	::Class_5_AF65C3A968E836D2* Field_2_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_1473C3E3E800D9E0*>* Field_2_10; // 0x28
	::Class_1_AB60BE3454AE2EF0* Field_2_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_5_AF65C3A968E836D2*>* Field_2_7; // 0x38
	::MoleMole::HollowChessboard::HollowChessboardUID Field_2_6; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::MoleMole::HollowChessboard::HollowChessboardUID Field_2_5; // 0x4C
	::System::Int32 Field_2_2; // 0x54
	::MoleMole::HollowChessboard::HollowChessboardUID Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_DISPOSE_OFFSET))(this);
	}

	::Class_5_AF65C3A968E836D2* Method_2_9362E8FA030FB7C8(::System::Int32 a1)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_9362E8FA030FB7C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_E7B0C037122A3134(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_E7B0C037122A3134_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BE88C8A1AB99A42(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_1BE88C8A1AB99A42_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_AAB958C808A9F6D2()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_AAB958C808A9F6D2_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_76A7805CCDF0EF4D(::Struct_2_02E84E3D148EE908 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_76A7805CCDF0EF4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D00952478A5F1AD7(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_D00952478A5F1AD7_OFFSET))(this, a1);
	}

	::System::Void Method_2_99961F2CBA9BC8DD(::System::Action_1<::Class_5_AF65C3A968E836D2*>* a1, ::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_5_AF65C3A968E836D2*>*, ::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_99961F2CBA9BC8DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_5_AF65C3A968E836D2* Method_2_A5E89FFF9B5F6178(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>* a2, ::System::Int32 a3, ::MoleMole::Vector2Int a4, ::Struct_2_A1A45D8655270887 a5)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>*, ::System::Int32, ::MoleMole::Vector2Int, ::Struct_2_A1A45D8655270887))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_A5E89FFF9B5F6178_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_5_AF65C3A968E836D2* Method_2_C74F4D2570E1073E(::Class_1_D78EEB0971654883* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::Config::ConfigHollowChessboard* a3, ::MoleMole::Config::ConfigHollowChessboardCamera* a4, ::Class_1_E5B7864412CDC074* a5, ::Class_1_F50B5EAC0B6702FB* a6, ::System::Boolean a7, ::System::Nullable_1<::UnityEngine::Vector3> a8, ::UnityEngine::Transform* a9, ::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837 a10, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a11)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::Class_1_D78EEB0971654883*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::Config::ConfigHollowChessboard*, ::MoleMole::Config::ConfigHollowChessboardCamera*, ::Class_1_E5B7864412CDC074*, ::Class_1_F50B5EAC0B6702FB*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*, ::Class_2_CB2509659DB8C6AA_Enum_3_5865512D2D2D4837, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_C74F4D2570E1073E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::Class_5_AF65C3A968E836D2* Method_2_D0CD2FF885EB29CA(::System::UInt32 a1)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_D0CD2FF885EB29CA_OFFSET))(this, a1);
	}

	::Class_1_1473C3E3E800D9E0* Method_2_917F5B347FD41F60(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::Class_1_1473C3E3E800D9E0*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_917F5B347FD41F60_OFFSET))(this, a1);
	}

	::Class_5_AF65C3A968E836D2* Method_2_CEB90124B6C2EAC5(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Boolean a2)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_CEB90124B6C2EAC5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D268AD353BBF0E38(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_D268AD353BBF0E38_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_AAB958C808A9F6D2_1()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_AAB958C808A9F6D2_1_OFFSET))(this);
	}

	::Class_1_D78EEB0971654883* Method_2_1D4884971B8D11B7(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::Class_1_D78EEB0971654883*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_1D4884971B8D11B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BE88C8A1AB99A42_1(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_1BE88C8A1AB99A42_1_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_748B1819019EADA9(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E a2, ::System::Boolean a3)
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_748B1819019EADA9_OFFSET))(this, a1, a2, a3);
	}

	::Class_5_AF65C3A968E836D2* Method_2_C2E87E5B9B2DA7DB(::Struct_2_02E84E3D148EE908 a1, ::System::Boolean a2)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::Struct_2_02E84E3D148EE908, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_C2E87E5B9B2DA7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7F8A5A95815B532D(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Class_1_1473C3E3E800D9E0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_1473C3E3E800D9E0*))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_7F8A5A95815B532D_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_AAB958C808A9F6D2_2()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_AAB958C808A9F6D2_2_OFFSET))(this);
	}

	::System::Void Method_2_C40BC63AC81886AD(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_C40BC63AC81886AD_OFFSET))(this, a1);
	}

	::Class_5_AF65C3A968E836D2* Method_2_BD784CB277941C0D()
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_BD784CB277941C0D_OFFSET))(this);
	}

	::Class_5_AF65C3A968E836D2* Method_2_BD784CB277941C0D_1()
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_BD784CB277941C0D_1_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_073B1439B8822A5B()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_073B1439B8822A5B_OFFSET))(this);
	}

	::Class_1_AB60BE3454AE2EF0* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_AB60BE3454AE2EF0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Void Method_2_297DCB6EEBBF9FB2(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_297DCB6EEBBF9FB2_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_2_708BE988F4663FE8(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_708BE988F4663FE8_OFFSET))(this, a1, a2);
	}

	::Class_5_AF65C3A968E836D2* Method_2_DBAF50518B383E19()
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_DBAF50518B383E19_OFFSET))(this);
	}

	::Class_5_AF65C3A968E836D2* Method_2_BD784CB277941C0D_2()
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_BD784CB277941C0D_2_OFFSET))(this);
	}

	::System::Boolean Method_2_425BE2FC3B83C815(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_425BE2FC3B83C815_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_82896EC53DEC3A6E(::Class_1_1473C3E3E800D9E0* a1, ::Struct_2_02E84E3D148EE908 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1473C3E3E800D9E0*, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_82896EC53DEC3A6E_OFFSET))(this, a1, a2);
	}

	::Class_5_AF65C3A968E836D2* Method_2_B93AEB6283F30D27(::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::Int32 a3, ::MoleMole::Vector2Int a4, ::Struct_2_A1A45D8655270887 a5, ::MoleMole::Config::ConfigHollowChessboard* a6, ::MoleMole::Config::ConfigHollowChessboardCamera* a7, ::Class_1_E5B7864412CDC074* a8, ::Class_1_F50B5EAC0B6702FB* a9, ::System::Boolean a10, ::System::Nullable_1<::UnityEngine::Vector3> a11, ::UnityEngine::Transform* a12)
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::Vector2Int, ::Struct_2_A1A45D8655270887, ::MoleMole::Config::ConfigHollowChessboard*, ::MoleMole::Config::ConfigHollowChessboardCamera*, ::Class_1_E5B7864412CDC074*, ::Class_1_F50B5EAC0B6702FB*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_B93AEB6283F30D27_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2509659DB8C6AA_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
