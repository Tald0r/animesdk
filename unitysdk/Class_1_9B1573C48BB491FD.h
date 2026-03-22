#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/System/Object.h"

class Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C;
namespace MoleMole { class ConfigDownloader; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_9B1573C48BB491FD_ADDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xFDA83F0)
#define CLASS_1_9B1573C48BB491FD_CLOSE_OFFSET UNITYSDK_OFFSET(0xFDA9270)
#define CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADEDSIZE_OFFSET UNITYSDK_OFFSET(0xFDA9090)
#define CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xFDA9170)
#define CLASS_1_9B1573C48BB491FD_GETTOTALNEEDDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xFDA9730)
#define CLASS_1_9B1573C48BB491FD_GET_ISENABLEVERIFIER_OFFSET UNITYSDK_OFFSET(0xFDA83D0)
#define CLASS_1_9B1573C48BB491FD_GET_ISSHOWALIVEKEEPER_OFFSET UNITYSDK_OFFSET(0xFDA83B0)
#define CLASS_1_9B1573C48BB491FD_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xFDA81A0)
#define CLASS_1_9B1573C48BB491FD_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xFDA8180)
#define CLASS_1_9B1573C48BB491FD_GET_ONUPDATEDELTA_OFFSET UNITYSDK_OFFSET(0xFDA8160)
#define CLASS_1_9B1573C48BB491FD_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFDA8140)
#define CLASS_1_9B1573C48BB491FD_GET_ONWEBRESPONSE_OFFSET UNITYSDK_OFFSET(0xFDA8120)
#define CLASS_1_9B1573C48BB491FD_ISDONE_OFFSET UNITYSDK_OFFSET(0xFDA9640)
#define CLASS_1_9B1573C48BB491FD_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xFDA96C0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_1C4AB311C5F7F725_OFFSET UNITYSDK_OFFSET(0xFDAD490)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_21EAE8EE56AEE451_OFFSET UNITYSDK_OFFSET(0xFDAAE40)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_26EDB267E37FAB3C_OFFSET UNITYSDK_OFFSET(0xFDAA1F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xFDACFC0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0xFDADC20)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFDA8830)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_39FFE99F2DCEB398_OFFSET UNITYSDK_OFFSET(0xFDAC5E0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_3AC8F91835D61B3F_OFFSET UNITYSDK_OFFSET(0xFDA85B0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_3BB5E8AF3669DD69_OFFSET UNITYSDK_OFFSET(0xFDAA6B0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0xFDAC5F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_58D830BED947ACCC_OFFSET UNITYSDK_OFFSET(0xFDAA2F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_601078E132B9F236_OFFSET UNITYSDK_OFFSET(0xFDAD5F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_696E70B96088889D_OFFSET UNITYSDK_OFFSET(0xFDADAF0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_6A521C35B3EF553F_OFFSET UNITYSDK_OFFSET(0xFDAC530)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0xFDAD870)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_70BBBEA481107523_OFFSET UNITYSDK_OFFSET(0xFDAD850)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_7F1B8738237E0A4B_OFFSET UNITYSDK_OFFSET(0xFDACA00)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xFDA8980)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_8A87B4D6FB7FDD03_OFFSET UNITYSDK_OFFSET(0xFDAAB00)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xFDAA150)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFDA9590)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_97FECEFC129264AF_OFFSET UNITYSDK_OFFSET(0xFDAA800)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_1_OFFSET UNITYSDK_OFFSET(0xFDAA560)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_OFFSET UNITYSDK_OFFSET(0xFDA97C0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xFDAAA90)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_1_OFFSET UNITYSDK_OFFSET(0xFDACCE0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xFDAC610)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A93B7CD3768E295E_OFFSET UNITYSDK_OFFSET(0xFDAC600)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xFDAD460)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_AD0F9D7AB7E793D8_OFFSET UNITYSDK_OFFSET(0xFDAA470)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_AD3BA6426D34368E_OFFSET UNITYSDK_OFFSET(0xFDA98F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_B283605EECB8DCF3_OFFSET UNITYSDK_OFFSET(0xFDAC390)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0xFDAD980)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xFDAD450)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xFDADBF0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xFDADBE0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xFDAA6A0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0xFDAD470)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0xFDAD480)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0xFDADC00)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xFDAA690)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D03F13E5EC3F80DD_OFFSET UNITYSDK_OFFSET(0xFDA97B0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D3B9FBAF07067BAD_OFFSET UNITYSDK_OFFSET(0xFDAD990)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0xFDA9020)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_DF5EFA7071326019_OFFSET UNITYSDK_OFFSET(0xFDAC8F0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_EE5D71FBB4261BF2_OFFSET UNITYSDK_OFFSET(0xFDAAA80)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xFDAD860)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xFDADBC0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xFDADBD0)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0xFDADC10)
#define CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFDAA550)
#define CLASS_1_9B1573C48BB491FD_PAUSE_OFFSET UNITYSDK_OFFSET(0xFDA93E0)
#define CLASS_1_9B1573C48BB491FD_SET_ISENABLEVERIFIER_OFFSET UNITYSDK_OFFSET(0xFDA83E0)
#define CLASS_1_9B1573C48BB491FD_SET_ISSHOWALIVEKEEPER_OFFSET UNITYSDK_OFFSET(0xFDA83C0)
#define CLASS_1_9B1573C48BB491FD_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xFDA81B0)
#define CLASS_1_9B1573C48BB491FD_SET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xFDA8190)
#define CLASS_1_9B1573C48BB491FD_SET_ONUPDATEDELTA_OFFSET UNITYSDK_OFFSET(0xFDA8170)
#define CLASS_1_9B1573C48BB491FD_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFDA8150)
#define CLASS_1_9B1573C48BB491FD_SET_ONWEBRESPONSE_OFFSET UNITYSDK_OFFSET(0xFDA8130)
#define CLASS_1_9B1573C48BB491FD_START_OFFSET UNITYSDK_OFFSET(0xFDA8660)
#define CLASS_1_9B1573C48BB491FD_UNPAUSE_OFFSET UNITYSDK_OFFSET(0xFDA9490)
#define CLASS_1_9B1573C48BB491FD_UPDATE_OFFSET UNITYSDK_OFFSET(0xFDA8CC0)
#define CLASS_1_9B1573C48BB491FD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA81C0)

inline static constexpr unsigned int Class_1_9B1573C48BB491FD_TypeDefinitionIndex = 67967;

class Class_1_9B1573C48BB491FD : public ::System::Object
{
public:
	// static const ::System::String* Field_1_21; // 0x0
	::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_15; // 0x10
	::System::Action_2<::System::String*, ::System::Boolean>* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_4; // 0x20
	::System::Action_2<::System::Single, ::System::Int64>* Field_1_13; // 0x28
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_17; // 0x30
	::System::Action_1<::System::Boolean>* Field_1_20; // 0x38
	::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>* Field_1_12; // 0x40
	::System::Collections::Generic::Queue_1<::System::Single>* Field_1_27; // 0x48
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_18; // 0x50
	::System::Collections::Generic::Queue_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_28; // 0x58
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_16; // 0x60
	::System::Action_1<::System::Int64>* Field_1_14; // 0x68
	::System::Collections::Generic::Queue_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_29; // 0x70
	::System::Exception* Field_1_8; // 0x78
	::System::Threading::ManualResetEvent* Field_1_30; // 0x80
	::System::Action_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Field_1_19; // 0x88
	::System::Int64 Field_1_23; // 0x90
	::System::Int32 Field_1_34; // 0x98
	::System::Int32 Field_1_31; // 0x9C
	::Enum_3_0A3761FE34514D6C Field_1_0; // 0xA0
	::System::Int32 Field_1_5; // 0xA4
	::System::Int32 Field_1_7; // 0xA8
	::System::Int32 Field_1_37; // 0xAC
	::System::Boolean Field_1_10; // 0xB0
	::System::Boolean Field_1_2; // 0xB1
	::System::Boolean Field_1_40; // 0xB2
	::System::Boolean Field_1_39; // 0xB3
	::System::Single Field_1_38; // 0xB4
	::System::Boolean Field_1_3; // 0xB8
	::System::Boolean Field_1_1; // 0xB9
	::System::Boolean Field_1_9; // 0xBA
	::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 Field_1_6; // 0xBC
	::System::Int64 Field_1_22; // 0xC0
	::System::Int32 Field_1_33; // 0xC8
	::System::Int32 Field_1_36; // 0xCC
	::System::Single Field_1_25; // 0xD0
	::System::Int32 Field_1_35; // 0xD4
	::System::Int64 Field_1_24; // 0xD8
	::System::Int32 Field_1_32; // 0xE0
	::System::Single Field_1_26; // 0xE4

	::System::Void _ctor(::System::Int32 a1, ::MoleMole::ConfigDownloader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::ConfigDownloader*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Action_2<::System::String*, ::System::Boolean>* get_onWebResponse()
	{
		return ((::System::Action_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONWEBRESPONSE_OFFSET))(this);
	}

	::System::Void set_onWebResponse(::System::Action_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONWEBRESPONSE_OFFSET))(this, a1);
	}

	::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>* get_onUpdate()
	{
		return ((::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONUPDATE_OFFSET))(this);
	}

	::System::Void set_onUpdate(::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_4<::System::Int64, ::System::Int64, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONUPDATE_OFFSET))(this, a1);
	}

	::System::Action_2<::System::Single, ::System::Int64>* get_onUpdateDelta()
	{
		return ((::System::Action_2<::System::Single, ::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONUPDATEDELTA_OFFSET))(this);
	}

	::System::Void set_onUpdateDelta(::System::Action_2<::System::Single, ::System::Int64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Single, ::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONUPDATEDELTA_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Int64>* get_onFinished()
	{
		return ((::System::Action_1<::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONFINISHED_OFFSET))(this);
	}

	::System::Void set_onFinished(::System::Action_1<::System::Int64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONFINISHED_OFFSET))(this, a1);
	}

	::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>* get_onFailed()
	{
		return ((::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ONFAILED_OFFSET))(this);
	}

	::System::Void set_onFailed(::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ONFAILED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShowAliveKeeper()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ISSHOWALIVEKEEPER_OFFSET))(this);
	}

	::System::Void set_IsShowAliveKeeper(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ISSHOWALIVEKEEPER_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnableVerifier()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GET_ISENABLEVERIFIER_OFFSET))(this);
	}

	::System::Void set_IsEnableVerifier(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_SET_ISENABLEVERIFIER_OFFSET))(this, a1);
	}

	::System::Void AddDownload(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int64 a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_ADDDOWNLOAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_UPDATE_OFFSET))(this);
	}

	::System::Void Close()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_CLOSE_OFFSET))(this);
	}

	::System::Void Pause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_PAUSE_OFFSET))(this);
	}

	::System::Void UnPause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_UNPAUSE_OFFSET))(this);
	}

	::System::Boolean IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_ISDONE_OFFSET))(this);
	}

	::System::Boolean IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_ISFINISHED_OFFSET))(this);
	}

	::System::Int64 GetTotalDownloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADSIZE_OFFSET))(this);
	}

	::System::Int64 GetTotalDownloadedSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GETTOTALDOWNLOADEDSIZE_OFFSET))(this);
	}

	::System::Int64 GetTotalNeedDownloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_GETTOTALNEEDDOWNLOADSIZE_OFFSET))(this);
	}

	::System::Void Method_1_D03F13E5EC3F80DD(::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D03F13E5EC3F80DD_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_9B81597B4B113C3D()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_OFFSET))(this);
	}

	::System::Void Method_1_AD3BA6426D34368E(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_AD3BA6426D34368E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58D830BED947ACCC(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_58D830BED947ACCC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int64 Method_1_9B81597B4B113C3D_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9B81597B4B113C3D_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_3BB5E8AF3669DD69()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_3BB5E8AF3669DD69_OFFSET))(this);
	}

	::System::Void Method_1_97FECEFC129264AF(::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_97FECEFC129264AF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>* Method_1_EE5D71FBB4261BF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_EE5D71FBB4261BF2_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_8A87B4D6FB7FDD03(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_8A87B4D6FB7FDD03_OFFSET))(this, a1, a2);
	}

	::System::Exception* Method_1_39FFE99F2DCEB398()
	{
		return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_39FFE99F2DCEB398_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_A93B7CD3768E295E(::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A93B7CD3768E295E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_7F1B8738237E0A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_7F1B8738237E0A4B_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B283605EECB8DCF3(::System::Exception* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_B283605EECB8DCF3_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_1C4AB311C5F7F725(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_1C4AB311C5F7F725_OFFSET))(this, a1, a2);
	}

	::System::Int64 Method_1_601078E132B9F236(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_601078E132B9F236_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70BBBEA481107523(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_70BBBEA481107523_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_6B5EA38BAE5646C2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_6A521C35B3EF553F(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_6A521C35B3EF553F_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AC8F91835D61B3F(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_3AC8F91835D61B3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_21EAE8EE56AEE451(::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Class_1_C6455FAF85D1C79C*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_21EAE8EE56AEE451_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_D3B9FBAF07067BAD(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D3B9FBAF07067BAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Boolean Method_1_696E70B96088889D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_696E70B96088889D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF5EFA7071326019(::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 a1, ::System::Int32 a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_DF5EFA7071326019_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_26EDB267E37FAB3C(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_26EDB267E37FAB3C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_AD0F9D7AB7E793D8(::System::Exception* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_AD0F9D7AB7E793D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5B6063FFC26FC8F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_A5B6063FFC26FC8F_1_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_9B1573C48BB491FD_Enum_3_161872DC1725FD46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B1573C48BB491FD_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}
};
