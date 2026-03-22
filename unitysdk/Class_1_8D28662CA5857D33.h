#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8D28662CA5857D33_Struct_2_172B571CADCE37F1.h"
#include "unitysdk/Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1.h"
#include "unitysdk/Enum_3_3FDE76C86672FDDC.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_6;
class Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6;
class Class_3_025FF4981524A424_484;
class Class_3_32CD58E95ADFF8F5_48;
class Class_3_452E05BC28CF3B11;
class Class_3_4666E61F66433B1E_3;
class Class_3_6ECBCF3AD09049F3_1;
class Class_3_793BFD6B897F5A49_1;
class Class_3_7E21E2F8DEAA5F4C_3;
class Class_3_88ECEB7D5F9A93BA_1;
class Class_3_A9E2939AF1A43E78;
class Class_3_BE75AAF0F7C40C75;
class Class_3_DA02E6BABB5F027E;
class Class_3_F97B015544BE936B;
namespace MoleMole { class UILevelResultPageContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_B81AB3851AD916CA;

#define CLASS_1_8D28662CA5857D33_METHOD_1_08E79A9D68105382_OFFSET UNITYSDK_OFFSET(0x5E779B0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_154D7FF43FC37C5F_OFFSET UNITYSDK_OFFSET(0x5E74580)
#define CLASS_1_8D28662CA5857D33_METHOD_1_1B709936FC68B7D3_OFFSET UNITYSDK_OFFSET(0x5E77400)
#define CLASS_1_8D28662CA5857D33_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x5E7F1F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_2472676B9B8BAB30_OFFSET UNITYSDK_OFFSET(0x5E7F530)
#define CLASS_1_8D28662CA5857D33_METHOD_1_28F339A9E7B5239C_OFFSET UNITYSDK_OFFSET(0x5E73D20)
#define CLASS_1_8D28662CA5857D33_METHOD_1_2ECCEABB73C9E868_OFFSET UNITYSDK_OFFSET(0x5E7D340)
#define CLASS_1_8D28662CA5857D33_METHOD_1_3807F672415786EF_OFFSET UNITYSDK_OFFSET(0x5E7E1F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_3D0CDC0886C98CCB_OFFSET UNITYSDK_OFFSET(0x5E81EA0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_3D346792BEAEDC67_OFFSET UNITYSDK_OFFSET(0x5E7C100)
#define CLASS_1_8D28662CA5857D33_METHOD_1_413736754332B150_OFFSET UNITYSDK_OFFSET(0x5E74A20)
#define CLASS_1_8D28662CA5857D33_METHOD_1_4194D22D527AD187_OFFSET UNITYSDK_OFFSET(0x5E7FE40)
#define CLASS_1_8D28662CA5857D33_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x5E7DF20)
#define CLASS_1_8D28662CA5857D33_METHOD_1_426D0BD126739167_OFFSET UNITYSDK_OFFSET(0x5E800C0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_438E01EF955BECA3_OFFSET UNITYSDK_OFFSET(0x5E7EF80)
#define CLASS_1_8D28662CA5857D33_METHOD_1_45087265AE41FD70_OFFSET UNITYSDK_OFFSET(0x5E74B00)
#define CLASS_1_8D28662CA5857D33_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x5E76DE0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_64CC4154AB082BCA_OFFSET UNITYSDK_OFFSET(0x5E7CAD0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_69A1F1697FA2EEB9_OFFSET UNITYSDK_OFFSET(0x5E7E370)
#define CLASS_1_8D28662CA5857D33_METHOD_1_7066B751641160E1_OFFSET UNITYSDK_OFFSET(0x5E76020)
#define CLASS_1_8D28662CA5857D33_METHOD_1_7251E73A45DF0488_OFFSET UNITYSDK_OFFSET(0x5E7B840)
#define CLASS_1_8D28662CA5857D33_METHOD_1_81B1922812003A48_OFFSET UNITYSDK_OFFSET(0x5E7A000)
#define CLASS_1_8D28662CA5857D33_METHOD_1_8354033FAF0F8A5F_OFFSET UNITYSDK_OFFSET(0x5E75910)
#define CLASS_1_8D28662CA5857D33_METHOD_1_8D93A9CCC4C2FE2A_OFFSET UNITYSDK_OFFSET(0x5E771B0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_9F7B3DC5D9FAC13F_OFFSET UNITYSDK_OFFSET(0x5E7DE90)
#define CLASS_1_8D28662CA5857D33_METHOD_1_A3C5A5BD7B8A4089_OFFSET UNITYSDK_OFFSET(0x5E825D0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_A3F8D5D1A4B7A335_OFFSET UNITYSDK_OFFSET(0x5E77E70)
#define CLASS_1_8D28662CA5857D33_METHOD_1_ABCB6F3846BAC25A_OFFSET UNITYSDK_OFFSET(0x5E7A4F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_B5EEF30FC9B0B822_OFFSET UNITYSDK_OFFSET(0x5E7EA30)
#define CLASS_1_8D28662CA5857D33_METHOD_1_B823E9FAACA55ECC_OFFSET UNITYSDK_OFFSET(0x5E7A770)
#define CLASS_1_8D28662CA5857D33_METHOD_1_BB7FF026EFB0F601_OFFSET UNITYSDK_OFFSET(0x5E74940)
#define CLASS_1_8D28662CA5857D33_METHOD_1_C8065D4F59F4EF02_OFFSET UNITYSDK_OFFSET(0x5E73B60)
#define CLASS_1_8D28662CA5857D33_METHOD_1_C99C819DF15FDE31_OFFSET UNITYSDK_OFFSET(0x5E787F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x5E774A0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_D60819D1E6989DD1_OFFSET UNITYSDK_OFFSET(0x5E74EC0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_D9B66E4B85294A0A_OFFSET UNITYSDK_OFFSET(0x5E7A130)
#define CLASS_1_8D28662CA5857D33_METHOD_1_DA4379172C9CA18E_OFFSET UNITYSDK_OFFSET(0x5E7FFF0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_E131C1D98747B1D2_OFFSET UNITYSDK_OFFSET(0x5E78590)
#define CLASS_1_8D28662CA5857D33_METHOD_1_E95D9C3479DC33E8_OFFSET UNITYSDK_OFFSET(0x5E738E0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_EF3170F6B734AC3A_OFFSET UNITYSDK_OFFSET(0x5E79990)
#define CLASS_1_8D28662CA5857D33_METHOD_1_EF72578AAC0AC5BD_OFFSET UNITYSDK_OFFSET(0x5E79D70)
#define CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_1_OFFSET UNITYSDK_OFFSET(0x5E7DDC0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_OFFSET UNITYSDK_OFFSET(0x5E79CA0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_F8AC7EA04631DE34_OFFSET UNITYSDK_OFFSET(0x5E78CB0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_F9A0F95A5D1FE07E_OFFSET UNITYSDK_OFFSET(0x5E7B590)
#define CLASS_1_8D28662CA5857D33_METHOD_1_FA409387433AB835_OFFSET UNITYSDK_OFFSET(0x5E7EEE0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_FF49364EBB3934B0_OFFSET UNITYSDK_OFFSET(0x5E7D7F0)
#define CLASS_1_8D28662CA5857D33_METHOD_1_FFF5E0F1A0643677_OFFSET UNITYSDK_OFFSET(0x5E7E230)
#define CLASS_1_8D28662CA5857D33__CCTOR_OFFSET UNITYSDK_OFFSET(0x5E73820)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_TypeDefinitionIndex = 56801;

class Class_1_8D28662CA5857D33 : public ::System::Object
{
public:
	static ::Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6** StaticGet_Field_1_0()
	{
		return (::Class_1_8D28662CA5857D33_Class_1_7DDF32291D457FB6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D28662CA5857D33_TypeDefinitionIndex)->GetStaticField(0x33140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_E95D9C3479DC33E8(::Class_3_32CD58E95ADFF8F5_48* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>* a2)
	{
		return ((::System::Void(*)(::Class_3_32CD58E95ADFF8F5_48*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_E95D9C3479DC33E8_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_C8065D4F59F4EF02()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_C8065D4F59F4EF02_OFFSET))();
	}

	static ::System::Void Method_1_28F339A9E7B5239C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_28F339A9E7B5239C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_154D7FF43FC37C5F(::Class_3_32CD58E95ADFF8F5_48* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Single> a7, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a8)
	{
		return ((::System::Void(*)(::Class_3_32CD58E95ADFF8F5_48*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Single>, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_154D7FF43FC37C5F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_BB7FF026EFB0F601(::Class_3_BE75AAF0F7C40C75* a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_BE75AAF0F7C40C75*, ::System::Int32, ::System::Byte, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_BB7FF026EFB0F601_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_45087265AE41FD70(::System::Boolean& a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_45087265AE41FD70_OFFSET))(a1, a2);
	}

	static ::Class_3_88ECEB7D5F9A93BA_1* Method_1_D60819D1E6989DD1(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_484*>* a5)
	{
		return ((::Class_3_88ECEB7D5F9A93BA_1*(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_484*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_D60819D1E6989DD1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_3_88ECEB7D5F9A93BA_1* Method_1_8354033FAF0F8A5F(::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_484*>* a1)
	{
		return ((::Class_3_88ECEB7D5F9A93BA_1*(*)(::System::Action_3<::System::Boolean, ::System::Boolean, ::Class_3_025FF4981524A424_484*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_8354033FAF0F8A5F_OFFSET))(a1);
	}

	static ::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_508D4DD02D3DB74E_OFFSET))();
	}

	static ::System::Void Method_1_8D93A9CCC4C2FE2A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_8D93A9CCC4C2FE2A_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B709936FC68B7D3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_1B709936FC68B7D3_OFFSET))();
	}

	static ::System::Void Method_1_08E79A9D68105382(::System::Boolean a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_08E79A9D68105382_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A3F8D5D1A4B7A335(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_A3F8D5D1A4B7A335_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F8AC7EA04631DE34(::System::Boolean a1, ::System::Boolean a2, ::Enum_3_96F6662CA3713095 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Enum_3_96F6662CA3713095))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_F8AC7EA04631DE34_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F4C7CC5B66AD80B7(::Class_3_F97B015544BE936B* a1, ::Class_3_7E21E2F8DEAA5F4C_3* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_7E21E2F8DEAA5F4C_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_EF72578AAC0AC5BD(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::Class_3_4666E61F66433B1E_3* a5, ::Class_3_32CD58E95ADFF8F5_48* a6)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Single, ::System::Int32, ::Class_3_4666E61F66433B1E_3*, ::Class_3_32CD58E95ADFF8F5_48*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_EF72578AAC0AC5BD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_81B1922812003A48(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1& a1)
	{
		return ((::System::Void(*)(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_81B1922812003A48_OFFSET))(a1);
	}

	static ::System::Void Method_1_C99C819DF15FDE31(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_C99C819DF15FDE31_OFFSET))(a1);
	}

	static ::System::Void Method_1_ABCB6F3846BAC25A(::Class_1_B81AB3851AD916CA<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::Class_1_B81AB3851AD916CA<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_ABCB6F3846BAC25A_OFFSET))(a1);
	}

	static ::System::Void Method_1_B823E9FAACA55ECC(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_B823E9FAACA55ECC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_7066B751641160E1(::System::Int32 a1, ::Enum_3_96F6662CA3713095 a2, ::Class_3_793BFD6B897F5A49_1* a3, ::Class_3_A9E2939AF1A43E78* a4, ::Class_3_BE75AAF0F7C40C75* a5)
	{
		return ((::System::Void(*)(::System::Int32, ::Enum_3_96F6662CA3713095, ::Class_3_793BFD6B897F5A49_1*, ::Class_3_A9E2939AF1A43E78*, ::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_7066B751641160E1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F4C7CC5B66AD80B7_1(::Class_3_F97B015544BE936B* a1, ::Class_3_7E21E2F8DEAA5F4C_3* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_7E21E2F8DEAA5F4C_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_F4C7CC5B66AD80B7_1_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_3FDE76C86672FDDC Method_1_9F7B3DC5D9FAC13F(::Class_3_DA02E6BABB5F027E* a1, ::System::Boolean a2)
	{
		return ((::Enum_3_3FDE76C86672FDDC(*)(::Class_3_DA02E6BABB5F027E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_9F7B3DC5D9FAC13F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_64CC4154AB082BCA(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a1, ::System::Int32& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_64CC4154AB082BCA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_413736754332B150(::Class_3_BE75AAF0F7C40C75* a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_BE75AAF0F7C40C75*, ::System::Int32, ::System::Byte, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_413736754332B150_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_41A074549EF25F63_OFFSET))();
	}

	static ::System::Void Method_1_F9A0F95A5D1FE07E(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_F9A0F95A5D1FE07E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFF5E0F1A0643677(::Class_3_F97B015544BE936B* a1, ::Class_3_7E21E2F8DEAA5F4C_3* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_7E21E2F8DEAA5F4C_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_FFF5E0F1A0643677_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_69A1F1697FA2EEB9(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_69A1F1697FA2EEB9_OFFSET))(a1);
	}

	static ::System::Void Method_1_2ECCEABB73C9E868(::Class_1_516A565475879095<::System::UInt32, ::Class_3_6ECBCF3AD09049F3_1*>* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::Class_1_516A565475879095<::System::UInt32, ::Class_3_6ECBCF3AD09049F3_1*>*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_2ECCEABB73C9E868_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B5EEF30FC9B0B822(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1& a1)
	{
		return ((::System::Void(*)(::Class_1_8D28662CA5857D33_Struct_2_96F9CA9EC0FA4F95_1&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_B5EEF30FC9B0B822_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_CEA32FF190776922_OFFSET))();
	}

	static ::System::Void Method_1_FA409387433AB835(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_FA409387433AB835_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_7251E73A45DF0488(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_7251E73A45DF0488_OFFSET))(a1);
	}

	static ::System::Void Method_1_438E01EF955BECA3(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_438E01EF955BECA3_OFFSET))(a1);
	}

	static ::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_2045BA2947DBDBCE_OFFSET))();
	}

	static ::System::Void Method_1_2472676B9B8BAB30(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_2472676B9B8BAB30_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_EF3170F6B734AC3A(::System::Boolean a1, ::System::Boolean a2, ::Enum_3_96F6662CA3713095 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::Enum_3_96F6662CA3713095))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_EF3170F6B734AC3A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E131C1D98747B1D2(::Enum_3_96F6662CA3713095 a1)
	{
		return ((::System::Void(*)(::Enum_3_96F6662CA3713095))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_E131C1D98747B1D2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_3_7E21E2F8DEAA5F4C_3*>* Method_1_3D346792BEAEDC67(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_7E21E2F8DEAA5F4C_3*>*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_3D346792BEAEDC67_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D9B66E4B85294A0A(::Class_1_8D28662CA5857D33_Struct_2_172B571CADCE37F1 a1)
	{
		return ((::System::Void(*)(::Class_1_8D28662CA5857D33_Struct_2_172B571CADCE37F1))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_D9B66E4B85294A0A_OFFSET))(a1);
	}

	static ::System::Void Method_1_4194D22D527AD187(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_4194D22D527AD187_OFFSET))(a1);
	}

	static ::System::Void Method_1_DA4379172C9CA18E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_DA4379172C9CA18E_OFFSET))();
	}

	static ::System::Void Method_1_426D0BD126739167(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_426D0BD126739167_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3D0CDC0886C98CCB(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::Class_3_452E05BC28CF3B11*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_3D0CDC0886C98CCB_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_FF49364EBB3934B0()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_FF49364EBB3934B0_OFFSET))();
	}

	static ::System::Void Method_1_A3C5A5BD7B8A4089(::MoleMole::UILevelResultPageContext* a1, ::Class_3_4666E61F66433B1E_3* a2)
	{
		return ((::System::Void(*)(::MoleMole::UILevelResultPageContext*, ::Class_3_4666E61F66433B1E_3*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_A3C5A5BD7B8A4089_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_1_3807F672415786EF()
	{
		return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_METHOD_1_3807F672415786EF_OFFSET))();
	}
};
