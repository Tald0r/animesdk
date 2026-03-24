#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4107ECDD60341DBB_Enum_3_B5BE3CFE93AA8FF9.h"
#include "unitysdk/Enum_3_56DB378E6AE6977F.h"
#include "unitysdk/Enum_3_B28A8DD160969CDB.h"
#include "unitysdk/Foundation/IpAddressUtil_IpType.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/CommandLineGraphicsSetting.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/DateTime.h"

namespace InfluxDB { class PointData; }
namespace MoleMole { class CommandLinePerformanceSetting; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_2AE1DD483C2D668E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x71CFED0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x71D1200)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_06C78929ECD81BD2_OFFSET UNITYSDK_OFFSET(0x71D1210)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x71D2730)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_17C48747D6B42CA6_OFFSET UNITYSDK_OFFSET(0x71D2D10)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x71D27D0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_1BC9A9CD23CEDC68_OFFSET UNITYSDK_OFFSET(0x71D1800)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x71D28C0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x71D28E0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x71D0820)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x71D1930)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x71D1130)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_490CF9B24F02BA36_1_OFFSET UNITYSDK_OFFSET(0x71D24D0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_490CF9B24F02BA36_OFFSET UNITYSDK_OFFSET(0x71D0890)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_4AA83B53120A2D75_OFFSET UNITYSDK_OFFSET(0x71D1CE0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x71CFA60)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_643FFA1166071130_OFFSET UNITYSDK_OFFSET(0x71D19C0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x71D02E0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_966F5CF0F75E9939_OFFSET UNITYSDK_OFFSET(0x71D0670)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_9CDAB9CCAB25B086_OFFSET UNITYSDK_OFFSET(0x71D2A90)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_A8851E0E6CBF1392_OFFSET UNITYSDK_OFFSET(0x71D0660)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x71D1920)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x71D11F0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_A9904C52B0346522_OFFSET UNITYSDK_OFFSET(0x71D0F60)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x71D0BF0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_B8F56E06A00A3CDD_OFFSET UNITYSDK_OFFSET(0x71D2740)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_CD390A7D8A14E39C_OFFSET UNITYSDK_OFFSET(0x71D23E0)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x71D0390)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_D5D27EFD534280E0_OFFSET UNITYSDK_OFFSET(0x71D1400)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x71D1000)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x71D0D80)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x71D2710)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x71D2720)
#define CLASS_2_2AE1DD483C2D668E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x71D0650)
#define CLASS_2_2AE1DD483C2D668E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x71CFBD0)
#define CLASS_2_2AE1DD483C2D668E_UPDATE_OFFSET UNITYSDK_OFFSET(0x71CF910)
#define CLASS_2_2AE1DD483C2D668E__CCTOR_OFFSET UNITYSDK_OFFSET(0x71D02D0)
#define CLASS_2_2AE1DD483C2D668E__CTOR_OFFSET UNITYSDK_OFFSET(0x71D0230)

inline static constexpr unsigned int Class_2_2AE1DD483C2D668E_TypeDefinitionIndex = 80413;

class Class_2_2AE1DD483C2D668E : public ::Foundation::SingletonDisposable_1<::Class_2_2AE1DD483C2D668E*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AE1DD483C2D668E_TypeDefinitionIndex)->GetStaticField(0xBE40);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AE1DD483C2D668E_TypeDefinitionIndex)->GetStaticField(0xBE41);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AE1DD483C2D668E_TypeDefinitionIndex)->GetStaticField(0xBE42);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2AE1DD483C2D668E_TypeDefinitionIndex)->GetStaticField(0xBE43);
	}
	// static const ::System::Single Field_2_4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>* Field_2_6; // 0x10
	::Struct_2_52A902145F5BE513_1 Field_2_10; // 0x18
	::System::String* Field_2_7; // 0x1D0
	::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::String*>* Field_2_8; // 0x1D8
	::System::Boolean Field_2_9; // 0x1E0
	::System::Single Field_2_5; // 0x1E4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E__CCTOR_OFFSET))();
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_UPDATE_OFFSET))(this, a1);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Foundation::IpAddressUtil_IpType Method_2_A8851E0E6CBF1392()
	{
		return ((::Foundation::IpAddressUtil_IpType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_A8851E0E6CBF1392_OFFSET))(this);
	}

	::MoleMole::CommandLineGraphicsSetting Method_2_966F5CF0F75E9939()
	{
		return ((::MoleMole::CommandLineGraphicsSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_966F5CF0F75E9939_OFFSET))(this);
	}

	::System::Void Method_2_490CF9B24F02BA36(::Struct_2_52A902145F5BE513_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_52A902145F5BE513_1))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_490CF9B24F02BA36_OFFSET))(this, a1);
	}

	::Enum_3_B28A8DD160969CDB Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_B28A8DD160969CDB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_06C78929ECD81BD2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_06C78929ECD81BD2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D5D27EFD534280E0(::System::String* a1, ::System::Boolean a2, ::System::DateTime a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::DateTime, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_D5D27EFD534280E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::Enum_3_56DB378E6AE6977F Method_2_A96DCA30C6927810_1()
	{
		return ((::Enum_3_56DB378E6AE6977F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_A9904C52B0346522()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_A9904C52B0346522_OFFSET))(this);
	}

	::System::Boolean Method_2_643FFA1166071130()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_643FFA1166071130_OFFSET))(this);
	}

	::System::Void Method_2_4AA83B53120A2D75(::Class_2_4107ECDD60341DBB_Enum_3_B5BE3CFE93AA8FF9 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4107ECDD60341DBB_Enum_3_B5BE3CFE93AA8FF9, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_4AA83B53120A2D75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_490CF9B24F02BA36_1(::Struct_2_52A902145F5BE513_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_52A902145F5BE513_1))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_490CF9B24F02BA36_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_1BC9A9CD23CEDC68(::InfluxDB::PointData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InfluxDB::PointData*))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_1BC9A9CD23CEDC68_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD390A7D8A14E39C(::Struct_2_52A902145F5BE513_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_52A902145F5BE513_1))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_CD390A7D8A14E39C_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::MoleMole::CommandLinePerformanceSetting* Method_2_B8F56E06A00A3CDD()
	{
		return ((::MoleMole::CommandLinePerformanceSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_B8F56E06A00A3CDD_OFFSET))(this);
	}

	::Struct_2_52A902145F5BE513_1 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_52A902145F5BE513_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_1F8314262457963A_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_9CDAB9CCAB25B086(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_9CDAB9CCAB25B086_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::Foundation::NapPlatform Method_2_17C48747D6B42CA6()
	{
		return ((::Foundation::NapPlatform(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_17C48747D6B42CA6_OFFSET))(this);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AE1DD483C2D668E_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}
};
