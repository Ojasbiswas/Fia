#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t3C0A3BB26852CB03BC589D70F0A5739F3DFEA477;
struct Dictionary_2_t2E0C1DE8621BABFCE54C5DB344AE2817D0DDFC59;
struct Func_2_t6C048AC8AC165F9F468242A84849AEA203074D8E;
struct Func_3_t9A1976C35A819E95D0DAFEA6642E9008C9248EA5;
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tC5FD11CABB1FBA107BFDE6E9CFCBD05CD709C882;
struct List_1_tC496CD8C8DD8F4B853212A6C1735053EF2BD2F1C;
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
struct Stack_1_t29FAC47909927E02C1C81C39BA6B4AF8C28BF548;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct OsubU5BU5D_t1F629E52011B7FE26680BDE23A0875A44256A6FA;
struct OtriU5BU5D_t8FDE0D90349351AAF17CD940B8704115FE598F30;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct VertexU5BU5D_t6A00F93D74F542576C0CF0280803109B93180150;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Behavior_tEFA12563DB879458DABB8386013B43577C16B59B;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EmbeddedAttribute_t2AC99C12C3BF49097550B7099D362BD7D96B8A0F;
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct IsReadOnlyAttribute_t435422697952662C2E225D77336F1F3BCD0AC61D;
struct Log_t3D23F4AAEDB9A98FF585A4207CE2CF56337B89E2;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct Mesh_t0162D502957612732BB2D09BD65238B81BC7D639;
struct NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E;
struct NullableAttribute_t211F98407ED9F34894F583333AD961E9B7858AE7;
struct NullableContextAttribute_t9FF9D3FF4472BFC7F51C22D26EFF5C274DFC827B;
struct Point_tB0B12235C8D705C589B1A884BB309B16816B36CC;
struct QualityMesher_t3728D1411DA1079A9CF73ECBD3594DCA9FB080F7;
struct Rectangle_tBB3A91328B344DC674331365F9A4CC8843DDDFEE;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct SubSegment_t5537F1885B46BF1CD89E5E7E4AB53B0A451D343A;
struct TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F;
struct Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6;
struct TriangleLocator_t26D2A76DE418DC93F19C87F903589CEC8FBA6183;
struct TrianglePool_t6B2343C9A2140065D2DC45AE7C4C8E2EE9913DCA;
struct TriangleSampler_t3ABE2381F0AB556BF935D14405066E7072B2E2FA;
struct Vertex_tD204F3CCC6BC453F12430867B099686E501C0172;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Behavior_tEFA12563DB879458DABB8386013B43577C16B59B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tag_tE6B732EC135066147A9E462FBDA40D4A6E13990F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t2455B91D5D27573F653EFD54EAA9E81E94DC3CCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2D823404FC29890B7BB65198FDE44EAD569D10BF____E7C7DA0A5AFFEB4D0790F0A8B6EBE543328F03E246A99D2B463901433C0FA543_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD425A54C2793065A57B0063ADAEF920645A7CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5EA7100E9B138CC818318DB1BE0603CC265559;
IL2CPP_EXTERN_C String_t* _stringLiteral14830EFBAE563E9FC190A5981D9091803D383C83;
IL2CPP_EXTERN_C String_t* _stringLiteral16449F5B8A42A9CB9416374C3D55C4FBC34349ED;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4C9E18872CD8E3F91122F3439C5120F731A191;
IL2CPP_EXTERN_C String_t* _stringLiteral3262D05B5F4A52792BB908BD05A6268B291CD5FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5D99DC8BCCF613EFB6349459C68885545108CC15;
IL2CPP_EXTERN_C String_t* _stringLiteral63D06581E237597DE12005CE8061054AE8A5D516;
IL2CPP_EXTERN_C String_t* _stringLiteral6971FA2F664F643324D049D163440CE51BBA1BE7;
IL2CPP_EXTERN_C String_t* _stringLiteral7385EA0F4D9990D581F45075937FDC39333B511A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B02FCF7196FF1776A6D7B89560E7D3792BC70EA;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB7064F462E26DE8F9523C8ADCF80C3609D8B2D;
IL2CPP_EXTERN_C String_t* _stringLiteral80300486C658920CD81DB755B0F344CB6F4FCB34;
IL2CPP_EXTERN_C String_t* _stringLiteral97504357947BF92C288538C94B1F07F00F347050;
IL2CPP_EXTERN_C String_t* _stringLiteral98F609F8B35F452D274A30AA8AE72689850F2A40;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA048C183099EE6A030F350A1D5607E3B369D1EF3;
IL2CPP_EXTERN_C String_t* _stringLiteralB6158443A176AFA61DCE11126211D852607995B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59;
IL2CPP_EXTERN_C String_t* _stringLiteralCA05CE05197117299EFC9BB8FEECC9626F3BD79B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D78A074E584B85268FB6459FDCBE3C78AF8156;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FC55F2512237364CB30251D749381917C1ACE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD576DF9A67129D86549FC3D249809F513CA54B78;
IL2CPP_EXTERN_C String_t* _stringLiteralD67F08367238119C1E2A799BCC8EB1EEB4F30F0B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1D2907DA347B4675CEF244763F05CC5FC989A1C;
IL2CPP_EXTERN_C String_t* _stringLiteralF64478715743E8EAF21C1461DDEFC2FC6FB32D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFCDD4C28CCF7F5F87668E1DCE659B26036DB9A44;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEED5CE678C8F37B51545AD9CD3DB038F01349C;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t0524CC31234A4E95EC6F6CD367D898B9E8FFEB5B 
{
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Behavior_tEFA12563DB879458DABB8386013B43577C16B59B  : public RuntimeObject
{
	bool ___quality;
	int32_t ___noBisect;
	double ___minAngle;
	double ___maxAngle;
	double ___maxArea;
	bool ___fixedArea;
	bool ___useSegments;
	bool ___useRegions;
	double ___goodAngle;
	double ___maxGoodAngle;
	double ___offconstant;
	bool ___U3CVarAreaU3Ek__BackingField;
	bool ___U3CPolyU3Ek__BackingField;
	Func_3_t9A1976C35A819E95D0DAFEA6642E9008C9248EA5* ___U3CUserTestU3Ek__BackingField;
	Func_2_t6C048AC8AC165F9F468242A84849AEA203074D8E* ___U3CExcludeU3Ek__BackingField;
	bool ___U3CConvexU3Ek__BackingField;
	bool ___U3CConformingDelaunayU3Ek__BackingField;
	bool ___U3CUseBoundaryMarkersU3Ek__BackingField;
	bool ___U3CNoHolesU3Ek__BackingField;
	bool ___U3CJettisonU3Ek__BackingField;
};
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer;
	int32_t ___m_maxCharsSize;
	bool ___m_2BytesPerChar;
	bool ___m_isMemoryStream;
	bool ___m_leaveOpen;
};
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding;
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder;
	bool ____leaveOpen;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer;
	int32_t ____maxChars;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E  : public RuntimeObject
{
	RuntimeObject* ___predicates;
	Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* ___mesh;
	Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* ___behavior;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___petalx;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___petaly;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___petalr;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___wedges;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___initialConvexPoly;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___points_p;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___points_q;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___points_r;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___poly1;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___poly2;
	DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* ___polys;
};
struct Point_tB0B12235C8D705C589B1A884BB309B16816B36CC  : public RuntimeObject
{
	int32_t ___id;
	int32_t ___label;
	double ___x;
	double ___y;
};
struct Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21  : public RuntimeObject
{
	double ___minEdge;
	double ___maxEdge;
	double ___minAspect;
	double ___maxAspect;
	double ___minArea;
	double ___maxArea;
	double ___minAngle;
	double ___maxAngle;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___angleTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minAngles;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___maxAngles;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F  : public RuntimeObject
{
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___ImageSourceData;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___ImageData;
	int32_t ___LayerCount;
	int32_t ___Width;
	int32_t ___Height;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___Bitmap;
};
struct Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6  : public RuntimeObject
{
	int32_t ___hash;
	int32_t ___id;
	OtriU5BU5D_t8FDE0D90349351AAF17CD940B8704115FE598F30* ___neighbors;
	VertexU5BU5D_t6A00F93D74F542576C0CF0280803109B93180150* ___vertices;
	OsubU5BU5D_t1F629E52011B7FE26680BDE23A0875A44256A6FA* ___subsegs;
	int32_t ___label;
	double ___area;
	bool ___infected;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EmbeddedAttribute_t2AC99C12C3BF49097550B7099D362BD7D96B8A0F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IsReadOnlyAttribute_t435422697952662C2E225D77336F1F3BCD0AC61D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NullableAttribute_t211F98407ED9F34894F583333AD961E9B7858AE7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags;
};
struct NullableContextAttribute_t9FF9D3FF4472BFC7F51C22D26EFF5C274DFC827B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	uint8_t ___Flag;
};
struct Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 
{
	Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6* ___tri;
	int32_t ___orient;
};
struct Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_marshaled_pinvoke
{
	Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6* ___tri;
	int32_t ___orient;
};
struct Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_marshaled_com
{
	Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6* ___tri;
	int32_t ___orient;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	int32_t ___value__;
};
struct FileMode_t111B48D5347628AEFCBF9A0EC2833827A302ECBA 
{
	int32_t ___value__;
};
struct LocateResult_t9D4A65D37B7439F38C4E631CD80D9ACD2DC4195F 
{
	int32_t ___value__;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct NodeNumbering_tC0B487EF656657AB259DB8D719EB815984899FE0 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	int32_t ___value__;
};
struct TriangleLocator_t26D2A76DE418DC93F19C87F903589CEC8FBA6183  : public RuntimeObject
{
	TriangleSampler_t3ABE2381F0AB556BF935D14405066E7072B2E2FA* ___sampler;
	Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* ___mesh;
	RuntimeObject* ___predicates;
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___recenttri;
};
struct VertexType_t7796AC5961EEB21A450D4B72E2081DFA7812AB49 
{
	int32_t ___value__;
};
struct Tag_tE6B732EC135066147A9E462FBDA40D4A6E13990F 
{
	int32_t ___value__;
};
struct Type_t2455B91D5D27573F653EFD54EAA9E81E94DC3CCF 
{
	int32_t ___value__;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
};
struct Mesh_t0162D502957612732BB2D09BD65238B81BC7D639  : public RuntimeObject
{
	RuntimeObject* ___predicates;
	Log_t3D23F4AAEDB9A98FF585A4207CE2CF56337B89E2* ___logger;
	QualityMesher_t3728D1411DA1079A9CF73ECBD3594DCA9FB080F7* ___qualityMesher;
	Stack_1_t29FAC47909927E02C1C81C39BA6B4AF8C28BF548* ___flipstack;
	TrianglePool_t6B2343C9A2140065D2DC45AE7C4C8E2EE9913DCA* ___triangles;
	Dictionary_2_t3C0A3BB26852CB03BC589D70F0A5739F3DFEA477* ___subsegs;
	Dictionary_2_t2E0C1DE8621BABFCE54C5DB344AE2817D0DDFC59* ___vertices;
	int32_t ___hash_vtx;
	int32_t ___hash_seg;
	int32_t ___hash_tri;
	List_1_tC5FD11CABB1FBA107BFDE6E9CFCBD05CD709C882* ___holes;
	List_1_tC496CD8C8DD8F4B853212A6C1735053EF2BD2F1C* ___regions;
	Rectangle_tBB3A91328B344DC674331365F9A4CC8843DDDFEE* ___bounds;
	int32_t ___invertices;
	int32_t ___insegments;
	int32_t ___undeads;
	int32_t ___mesh_dim;
	int32_t ___nextras;
	int32_t ___hullsize;
	int32_t ___steinerleft;
	bool ___checksegments;
	bool ___checkquality;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___infvertex1;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___infvertex2;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___infvertex3;
	TriangleLocator_t26D2A76DE418DC93F19C87F903589CEC8FBA6183* ___locator;
	Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* ___behavior;
	int32_t ___numbering;
	Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6* ___dummytri;
	SubSegment_t5537F1885B46BF1CD89E5E7E4AB53B0A451D343A* ___dummysub;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Vertex_tD204F3CCC6BC453F12430867B099686E501C0172  : public Point_tB0B12235C8D705C589B1A884BB309B16816B36CC
{
	int32_t ___hash;
	int32_t ___type;
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___tri;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray;
};
struct Behavior_tEFA12563DB879458DABB8386013B43577C16B59B_StaticFields
{
	bool ___U3CNoExactU3Ek__BackingField;
};
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields
{
	int64_t ___InCircleCount;
	int64_t ___InCircleAdaptCount;
	int64_t ___CounterClockwiseCount;
	int64_t ___CounterClockwiseAdaptCount;
	int64_t ___Orient3dCount;
	int64_t ___HyperbolaCount;
	int64_t ___CircumcenterCount;
	int64_t ___CircleTopCount;
	int64_t ___RelocationCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___plus1Mod3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minus1Mod3;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___plus1Mod3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minus1Mod3;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076  : public RuntimeArray
{
	ALIGN_FIELD (8) DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* m_Items[1];

	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D_gshared (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_DrawImage_mCF984A9FE9691167223F5516D23520A6F6C23360 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, int32_t ___0_x, int32_t ___1_y, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___2_images, int32_t ___3_w, int32_t ___4_h, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteToImageSource_m9853533AA64921EC23E313FA90F832D35FA9A8A6 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, int32_t ___0_x, int32_t ___1_y, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___2_images, int32_t ___3_w, int32_t ___4_h, String_t* ___5_name, bool ___6_alphachannel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64 (String_t* ___0_path, int32_t ___1_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteToFile_m3CEE4EBFABD3FC6A447116B0090A68CD8A8C4108 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, bool ___1_alphaChannel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TiffWriter_EncodeRLE_m50EE4432896B24A5BD24675DC63CF4D8851EF6B2 (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_images, int32_t ___1_w, int32_t ___2_h, int32_t ___3_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TiffWriter_Encode_m970FAB72851B4645BA9529EDD1C3B4AD3E28DE88 (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_images, int32_t ___1_w, int32_t ___2_h, int32_t ___3_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975 (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteHeader_m54843B2C3CCD0470AE495D49AA7D30B200B6B0B3 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, int32_t ___2_type, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m61B5DA2AFDE71BC154C7E0298759972A0A422290 (uint32_t ___0_value, const RuntimeMethod* method) ;
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___0_collection, method);
}
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___0_item, method);
}
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_Write_mA40D89F946E8A30E267E67DC58F99BE53DAE65E2 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, uint16_t ___2_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteOffset_mDB4767B838A0862E91051D581FD068C552F46B1A (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, int32_t ___2_type, int32_t ___3_count, uint32_t ___4_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_AddIntegerArray_m4BFA3DC13788189959510725E24024CDC8805368 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___0_buff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_value, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TiffWriter_SwapEndian_m7397F77A5176ED84221AD080B2AD949E708683CD (uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TiffWriter_SwapEndian_m23C35336984FA3532E5974B6752812712F21A7EA (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TiffWriter_GetTypeSize_m8A5644BD007A3455C05BCFF0F6A9C39F2B945807 (uint16_t ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TiffWriter_GetValue_m4EAB50BB4AD83A4A629A4F85556C4A2816FFE7C0 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_br, uint16_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_br, int32_t ___1_len, bool ___2_reverse, int32_t ___3_paddbytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_PrintAdobeImageSourceData_m531591CAE805B57E547C4CC0F283EF6F4257D1DD (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_br, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___1_fs, uint32_t ___2_endofposition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline void List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_gshared)(__this, method);
}
inline void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, uint32_t, const RuntimeMethod*))List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline uint32_t List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, int32_t, const RuntimeMethod*))List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TiffWriter_packbits_decode_m61B4E75C11892AA13D00D4D660082E2A21077FDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, uint32_t ___1_w, uint32_t ___2_h, const RuntimeMethod* method) ;
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline (Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* NewLocation_FindNewLocationWithoutMaxAngle_m898A6D1CDA276894CA56B8F1511B3B4D422D1F46 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___0_torg, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_tdest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_tapex, double* ___3_xi, double* ___4_eta, bool ___5_offcenter, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___6_badotri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* NewLocation_FindNewLocation_mC02C161365C92FF946074C637AB6A4BAF772238A (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___0_torg, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_tdest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_tapex, double* ___3_xi, double* ___4_eta, bool ___5_offcenter, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___6_badotri, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mEBA7DA45F2E0FF4F0BA794D328C9C0E69A0DA119_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7B46E4C4BC125EA0D962A70708090A2AB1599A6B (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* __this, double ___0_x, double ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_LongestShortestEdge_mBE0DD54D7A05480723423515CDB36A130F6C7133 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_aodist, double ___1_dadist, double ___2_dodist, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_DoSmoothing_mFCA29C04EA0714EA6D28A0342C5FC9D53F4207A8 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___0_badotri, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_torg, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_tdest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___3_tapex, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___4_newloc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6 (Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___0_deltri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m194C8E337B2A1EF0934AE43B13874B372A7A6F26 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_mD865D91B4578F5CCF7469B2151CCEEF88803EFF0 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline (Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___0_badotri, double ___1_first_x, double ___2_first_y, double ___3_second_x, double ___4_second_y, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___5_thirdpoint, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___6_neighotri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_CircleLineIntersection_mEF2D3A76F8FCC1B615DE86D0A679882E41ECB688 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, double ___6_r, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___7_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, bool ___6_isObtuse, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x, double ___5_y, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___6_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m2891563D3FADB4CC62ADD7C6E28B20F69E7F9656 (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, double ___6_x4, double ___7_y4, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___8_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_newlocX, double ___1_newlocY, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___2_searchtri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_GetStarPoints_m575329253235F49C97EED2CAC76A380CF693D133 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___0_badotri, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_p, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_q, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___3_r, int32_t ___4_whichPoint, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___5_points, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_ValidPolygonAngles_m001F2307C35F4ACFF7A766F0BB90663B42E77FD2 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_GetWedgeIntersectionWithoutMaxAngle_m4EBBAE7BE77755BD7944D142F4B5F028C245E895 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___2_newloc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_GetWedgeIntersection_mE67A377BDAF04E111C87D07B3979DCC1EDBAC9EE (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___2_newloc, const RuntimeMethod* method) ;
inline void Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**, int32_t, const RuntimeMethod*))Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_m29BF5459EAEEAB7E9A6F28EE74758E19A574D852 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_HalfPlaneIntersection_mC5C920335C264B62EFBEE14AE6C01B8F74E71F47 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numvertices, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___1_convexPoly, double ___2_x1, double ___3_y1, double ___4_x2, double ___5_y2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_FindPolyCentroid_mE6ED906E03E7E5373A822D1C5857457948E99AC7 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___2_centroid, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_IsBadPolygonAngle_m8E37BD0666830988E71232ADD88FD1A46A43950C (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_SplitConvexPolygon_m6268748F4AE88AEF7C6E0A3A93726DB3D352DC79 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numvertices, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_convexPoly, double ___2_x1, double ___3_y1, double ___4_x2, double ___5_y2, DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* ___6_polys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_LineLineSegmentIntersection_mD2C5A92AD7EE19831CD48900992A91B7CB894A80 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, double ___6_x4, double ___7_y4, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___8_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_LinePointLocation_m0EE5E6C78896E1E384A7B910FA36EF427D1F1639 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x, double ___5_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m3C2E3199FDBBC9B5DCB5D7D6309AF4F95601A374 (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mD222BADDC9D86EF8C3DF0AF231B019562B258BAF (Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_PreciseLocate_mCF55ECC44090933C20826D390E73D2D5B071A433 (TriangleLocator_t26D2A76DE418DC93F19C87F903589CEC8FBA6183* __this, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* ___0_searchpoint, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___1_searchtri, bool ___2_stopatsubsegment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, uint32_t, const RuntimeMethod*))List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mEAA24349F1DFB575373BFEDCDD53DEA4F51731B2 (EmbeddedAttribute_t2AC99C12C3BF49097550B7099D362BD7D96B8A0F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mE94159F2776058A565C0DC6CD51281391F59CB26 (IsReadOnlyAttribute_t435422697952662C2E225D77336F1F3BCD0AC61D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m1EAFBDD2AA21E5C2ECDA7CB5F91EED72CEC130DF (NullableAttribute_t211F98407ED9F34894F583333AD961E9B7858AE7* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m557BD1260683E88D67658943B39EA8138003927C (NullableAttribute_t211F98407ED9F34894F583333AD961E9B7858AE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mD98E0BE4A231AE70F91A06B2B519B45C83264DA2 (NullableContextAttribute_t9FF9D3FF4472BFC7F51C22D26EFF5C274DFC827B* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_Open_m74FFF097B37D7608B229FD63D6A8A1771EA57F0C (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, int32_t ___0_w, int32_t ___1_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___LayerCount = 0;
		int32_t L_0 = ___0_w;
		__this->___Width = L_0;
		int32_t L_1 = ___1_h;
		__this->___Height = L_1;
		int32_t L_2 = __this->___Width;
		int32_t L_3 = __this->___Height;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3)));
		__this->___Bitmap = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Bitmap), (void*)L_4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_5, NULL);
		__this->___ImageSourceData = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ImageSourceData), (void*)L_5);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_6, NULL);
		__this->___ImageData = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ImageData), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_AddImage_mF2F6F5899CD2E95BCD2FEE3FF7B9BB8F780E1481 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, int32_t ___0_x, int32_t ___1_y, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___2_images, int32_t ___3_w, int32_t ___4_h, String_t* ___5_name, bool ___6_alphachannel, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___LayerCount;
		__this->___LayerCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___1_y;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = ___2_images;
		int32_t L_4 = ___3_w;
		int32_t L_5 = ___4_h;
		TiffWriter_DrawImage_mCF984A9FE9691167223F5516D23520A6F6C23360(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		int32_t L_6 = ___0_x;
		int32_t L_7 = ___1_y;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_8 = ___2_images;
		int32_t L_9 = ___3_w;
		int32_t L_10 = ___4_h;
		String_t* L_11 = ___5_name;
		bool L_12 = ___6_alphachannel;
		TiffWriter_WriteToImageSource_m9853533AA64921EC23E313FA90F832D35FA9A8A6(__this, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TiffWriter_Close_m49F75F2B0E654FCCF37E8CF29E90131B333D894B (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, String_t* ___0_fname, bool ___1_alphaChannel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			String_t* L_0 = ___0_fname;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
			L_1 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_0, 2, NULL);
			BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
			BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
			V_0 = L_2;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0019_1:
				{
					{
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = V_0;
						if (!L_3)
						{
							goto IL_0022_1;
						}
					}
					{
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = V_0;
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
					}

IL_0022_1:
					{
						return;
					}
				}
			});
			try
			{
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = V_0;
				bool L_6 = ___1_alphaChannel;
				TiffWriter_WriteToFile_m3CEE4EBFABD3FC6A447116B0090A68CD8A8C4108(__this, L_5, L_6, NULL);
				V_1 = (bool)1;
				goto IL_0028;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		RuntimeObject* L_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteToImageSource_m9853533AA64921EC23E313FA90F832D35FA9A8A6 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, int32_t ___0_x, int32_t ___1_y, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___2_images, int32_t ___3_w, int32_t ___4_h, String_t* ___5_name, bool ___6_alphachannel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2D823404FC29890B7BB65198FDE44EAD569D10BF____E7C7DA0A5AFFEB4D0790F0A8B6EBE543328F03E246A99D2B463901433C0FA543_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD425A54C2793065A57B0063ADAEF920645A7CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5EA7100E9B138CC818318DB1BE0603CC265559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16449F5B8A42A9CB9416374C3D55C4FBC34349ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D99DC8BCCF613EFB6349459C68885545108CC15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB7064F462E26DE8F9523C8ADCF80C3609D8B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA048C183099EE6A030F350A1D5607E3B369D1EF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6158443A176AFA61DCE11126211D852607995B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FC55F2512237364CB30251D749381917C1ACE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD67F08367238119C1E2A799BCC8EB1EEB4F30F0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1D2907DA347B4675CEF244763F05CC5FC989A1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEED5CE678C8F37B51545AD9CD3DB038F01349C);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_5 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_6 = NULL;
	uint32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	uint32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t G_B3_0 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B6_0 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B7_1 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___ImageSourceData;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_1, L_0, NULL);
		V_0 = L_1;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = V_0;
		int32_t L_3 = ___1_y;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_2, L_3);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = V_0;
		int32_t L_5 = ___0_x;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_4, L_5);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = V_0;
		int32_t L_7 = ___1_y;
		int32_t L_8 = ___4_h;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8)));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_9 = V_0;
		int32_t L_10 = ___0_x;
		int32_t L_11 = ___3_w;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)));
		bool L_12 = ___6_alphachannel;
		if (L_12)
		{
			goto IL_0035;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 4;
	}

IL_0036:
	{
		V_1 = G_B3_0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = V_0;
		int32_t L_14 = V_1;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_13, (uint16_t)((int32_t)(uint16_t)L_14));
		V_2 = 0;
		goto IL_00d0;
	}

IL_0046:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_15 = V_0;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)3)))
		{
			G_B6_0 = L_15;
			goto IL_004e;
		}
		G_B5_0 = L_15;
	}
	{
		int32_t L_17 = V_2;
		G_B7_0 = L_17;
		G_B7_1 = G_B5_0;
		goto IL_0053;
	}

IL_004e:
	{
		G_B7_0 = ((int32_t)65535);
		G_B7_1 = G_B6_0;
	}

IL_0053:
	{
		VirtualActionInvoker1< uint16_t >::Invoke(15, G_B7_1, (uint16_t)((int32_t)(uint16_t)G_B7_0));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = ___2_images;
		int32_t L_19 = ___3_w;
		int32_t L_20 = ___4_h;
		int32_t L_21 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = TiffWriter_EncodeRLE_m50EE4432896B24A5BD24675DC63CF4D8851EF6B2(L_18, L_19, L_20, L_21, NULL);
		V_3 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		int32_t L_24 = ___3_w;
		int32_t L_25 = ___4_h;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))) >= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_24, L_25)), ((int32_t)80)))/((int32_t)100))))))
		{
			goto IL_009a;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_26, ((int32_t)il2cpp_codegen_add(2, ((int32_t)(((RuntimeArray*)L_27)->max_length)))));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = __this->___ImageData;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_29 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_29, L_28, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = L_29;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_30, (uint16_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_30, L_31);
		goto IL_00cc;
	}

IL_009a:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_32 = ___2_images;
		int32_t L_33 = ___3_w;
		int32_t L_34 = ___4_h;
		int32_t L_35 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = TiffWriter_Encode_m970FAB72851B4645BA9529EDD1C3B4AD3E28DE88(L_32, L_33, L_34, L_35, NULL);
		V_4 = L_36;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_4;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_37, ((int32_t)il2cpp_codegen_add(2, ((int32_t)(((RuntimeArray*)L_38)->max_length)))));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_39 = __this->___ImageData;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_40 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_40, L_39, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_41 = L_40;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_41, (uint16_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_41, L_42);
	}

IL_00cc:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d0:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0046;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_46 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47;
		L_47 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_46, L_47);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_48 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49;
		L_49 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralA048C183099EE6A030F350A1D5607E3B369D1EF3, NULL);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_48, L_49);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_50 = V_0;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_50, (uint8_t)((int32_t)255));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = V_0;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_51, (uint8_t)0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_52 = V_0;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_52, (uint8_t)8);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = V_0;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_53, (uint8_t)0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_54 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_54, NULL);
		V_5 = L_54;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0447:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_55 = V_5;
					if (!L_55)
					{
						goto IL_0452;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_56 = V_5;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_56);
				}

IL_0452:
				{
					return;
				}
			}
		});
		try
		{
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_57 = V_5;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_58 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_58, L_57, NULL);
				V_6 = L_58;
				V_7 = 0;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = V_6;
				uint32_t L_60 = V_7;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_59, L_60);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_61 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_61, ((int32_t)40));
				V_12 = 0;
				goto IL_0153_1;
			}

IL_0141_1:
			{
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_62 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_62, ((int32_t)-65536));
				int32_t L_63 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_63, 4));
			}

IL_0153_1:
			{
				int32_t L_64 = V_12;
				if ((((int32_t)L_64) < ((int32_t)((int32_t)40))))
				{
					goto IL_0141_1;
				}
			}
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_65;
				L_65 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				String_t* L_66 = ___5_name;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67;
				L_67 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_65, L_66);
				V_8 = L_67;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_68 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_8;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_68, (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_69)->max_length))));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_70 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_8;
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_70, L_71);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_8;
				V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_72)->max_length)), 1));
				goto IL_0194_1;
			}

IL_0186_1:
			{
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_73 = V_6;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_73, (uint8_t)0);
				int32_t L_74 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_74, 1));
			}

IL_0194_1:
			{
				int32_t L_75 = V_13;
				if (((int32_t)(L_75&3)))
				{
					goto IL_0186_1;
				}
			}
			{
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_76 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77;
				L_77 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_76, L_77);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_78 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_79;
				L_79 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteral0E5EA7100E9B138CC818318DB1BE0603CC265559, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_78, L_79);
				String_t* L_80 = ___5_name;
				int32_t L_81;
				L_81 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_80, NULL);
				V_9 = L_81;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_82;
				L_82 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
				String_t* L_83 = ___5_name;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84;
				L_84 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16, L_82, L_83);
				V_10 = L_84;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_85 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_10;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_85, ((int32_t)il2cpp_codegen_add(4, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_86)->max_length)), 3))&((int32_t)-4))))));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_87 = V_6;
				uint32_t L_88 = V_9;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_87, L_88);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_89 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_10;
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_89, L_90);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_10;
				V_14 = ((int32_t)(((RuntimeArray*)L_91)->max_length));
				goto IL_020d_1;
			}

IL_01ff_1:
			{
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_92 = V_6;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_92, (uint8_t)0);
				int32_t L_93 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_93, 1));
			}

IL_020d_1:
			{
				int32_t L_94 = V_14;
				if (((int32_t)(L_94&3)))
				{
					goto IL_01ff_1;
				}
			}
			{
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_95 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_96;
				L_96 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_95, L_96);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_97 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_98;
				L_98 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralD4FC55F2512237364CB30251D749381917C1ACE9, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_97, L_98);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_99 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_99, 4);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_100 = V_6;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_100, (uint8_t)((int32_t)114));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_101 = V_6;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_101, (uint8_t)((int32_t)121));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_102 = V_6;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_102, (uint8_t)((int32_t)97));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_103 = V_6;
				VirtualActionInvoker1< uint8_t >::Invoke(8, L_103, (uint8_t)((int32_t)108));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_104 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_105;
				L_105 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_104, L_105);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_106 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_107;
				L_107 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteral5D99DC8BCCF613EFB6349459C68885545108CC15, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_106, L_107);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_108 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_108, 4);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_109 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_109, 2);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_110 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_111;
				L_111 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_110, L_111);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_112 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_113;
				L_113 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralE1D2907DA347B4675CEF244763F05CC5FC989A1C, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_112, L_113);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_114 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_114, 4);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_115 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_115, 1);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_116 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_117;
				L_117 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_116, L_117);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_118 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_119;
				L_119 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralB6158443A176AFA61DCE11126211D852607995B8, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_118, L_119);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_120 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_120, 4);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_121 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_121, 0);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_122 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_123;
				L_123 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_122, L_123);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_124 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125;
				L_125 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralD67F08367238119C1E2A799BCC8EB1EEB4F30F0B, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_124, L_125);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_126 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_126, 4);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_127 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_127, 0);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_128 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_129;
				L_129 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_128, L_129);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_130 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_131;
				L_131 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteral16449F5B8A42A9CB9416374C3D55C4FBC34349ED, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_130, L_131);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_132 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_132, 4);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_133 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_133, 0);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_134 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_135;
				L_135 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_134, L_135);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_136 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_137;
				L_137 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralFFEED5CE678C8F37B51545AD9CD3DB038F01349C, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_136, L_137);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_138 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_138, 8);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_139 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_139, 0);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_140 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_140, 0);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_141 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_142;
				L_142 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_141, L_142);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_143 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_144;
				L_144 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteral0BD425A54C2793065A57B0063ADAEF920645A7CC, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_143, L_144);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_145 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_146 = L_145;
				RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_147 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2D823404FC29890B7BB65198FDE44EAD569D10BF____E7C7DA0A5AFFEB4D0790F0A8B6EBE543328F03E246A99D2B463901433C0FA543_FieldInfo_var) };
				RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_146, L_147, NULL);
				V_11 = L_146;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_148 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = V_11;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_148, ((int32_t)(((RuntimeArray*)L_149)->max_length)));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_150 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_151 = V_11;
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_150, L_151);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_152 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_153;
				L_153 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_152, L_153);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_154 = V_6;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_155;
				L_155 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteral7CB7064F462E26DE8F9523C8ADCF80C3609D8B2D, NULL);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_154, L_155);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_156 = V_6;
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_156, ((int32_t)16));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_157 = V_6;
				VirtualActionInvoker1< double >::Invoke(13, L_157, (0.0));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_158 = V_6;
				VirtualActionInvoker1< double >::Invoke(13, L_158, (0.0));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_159 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_160 = V_5;
				int64_t L_161;
				L_161 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_160);
				VirtualActionInvoker1< uint32_t >::Invoke(17, L_159, ((int32_t)(uint32_t)L_161));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_162 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_163 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164;
				L_164 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35, L_163);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_162, L_164);
				goto IL_0453;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0453:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_DrawImage_mCF984A9FE9691167223F5516D23520A6F6C23360 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, int32_t ___0_x, int32_t ___1_y, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___2_images, int32_t ___3_w, int32_t ___4_h, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		V_0 = 0;
		goto IL_0147;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_013b;
	}

IL_000e:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___2_images;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___4_h;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, L_3))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_5, NULL);
		V_2 = L_6;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = __this->___Bitmap;
		int32_t L_8 = ___0_x;
		int32_t L_9 = V_1;
		int32_t L_10 = ___1_y;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___Width;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_10, L_11)), L_12))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_2;
		float L_16 = L_15.___a;
		if ((((float)L_16) == ((float)(255.0f))))
		{
			goto IL_0054;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_3;
		float L_18 = L_17.___a;
		if ((!(((float)L_18) == ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}

IL_0054:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_19 = __this->___Bitmap;
		int32_t L_20 = ___0_x;
		int32_t L_21 = V_1;
		int32_t L_22 = ___1_y;
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___Width;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = V_2;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_20, L_21)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_22, L_23)), L_24))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_25);
		goto IL_0137;
	}

IL_0073:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_3;
		float L_27 = L_26.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_2;
		float L_29 = L_28.___a;
		V_4 = ((float)il2cpp_codegen_multiply(L_27, ((float)il2cpp_codegen_subtract((1.0f), L_29))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_2;
		float L_31 = L_30.___a;
		V_5 = L_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = V_3;
		float L_33 = L_32.___r;
		float L_34 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_2;
		float L_36 = L_35.___r;
		float L_37 = V_5;
		float L_38 = V_4;
		float L_39 = V_5;
		float L_40;
		L_40 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_34)), ((float)il2cpp_codegen_multiply(L_36, L_37))))/((float)il2cpp_codegen_add(L_38, L_39)))), (0.0f), (1.0f), NULL);
		V_6 = L_40;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_3;
		float L_42 = L_41.___g;
		float L_43 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = V_2;
		float L_45 = L_44.___g;
		float L_46 = V_5;
		float L_47 = V_4;
		float L_48 = V_5;
		float L_49;
		L_49 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_42, L_43)), ((float)il2cpp_codegen_multiply(L_45, L_46))))/((float)il2cpp_codegen_add(L_47, L_48)))), (0.0f), (1.0f), NULL);
		V_7 = L_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = V_3;
		float L_51 = L_50.___b;
		float L_52 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = V_2;
		float L_54 = L_53.___b;
		float L_55 = V_5;
		float L_56 = V_4;
		float L_57 = V_5;
		float L_58;
		L_58 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_51, L_52)), ((float)il2cpp_codegen_multiply(L_54, L_55))))/((float)il2cpp_codegen_add(L_56, L_57)))), (0.0f), (1.0f), NULL);
		V_8 = L_58;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_59 = __this->___Bitmap;
		int32_t L_60 = ___0_x;
		int32_t L_61 = V_1;
		int32_t L_62 = ___1_y;
		int32_t L_63 = V_0;
		int32_t L_64 = __this->___Width;
		float L_65 = V_6;
		float L_66 = V_7;
		float L_67 = V_8;
		float L_68 = V_4;
		float L_69 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70;
		memset((&L_70), 0, sizeof(L_70));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_70), L_65, L_66, L_67, ((float)il2cpp_codegen_add(L_68, L_69)), NULL);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_60, L_61)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_62, L_63)), L_64))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_70);
	}

IL_0137:
	{
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_013b:
	{
		int32_t L_72 = V_1;
		int32_t L_73 = ___3_w;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_74 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0147:
	{
		int32_t L_75 = V_0;
		int32_t L_76 = ___4_h;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		String_t* L_2 = ___0_key;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, 3, NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_1;
		String_t* L_5 = ___0_key;
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 2, NULL);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)L_6);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_4;
		String_t* L_8 = ___0_key;
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, 1, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_7;
		String_t* L_11 = ___0_key;
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 0, NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)L_12);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteHeader_m54843B2C3CCD0470AE495D49AA7D30B200B6B0B3 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, int32_t ___2_type, int32_t ___3_count, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_outputstream;
		int32_t L_1 = ___1_tag;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_0, (uint16_t)((int32_t)(uint16_t)L_1));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___0_outputstream;
		int32_t L_3 = ___2_type;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_2, (uint16_t)((int32_t)(uint16_t)L_3));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___0_outputstream;
		int32_t L_5 = ___3_count;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_outputstream;
		int32_t L_1 = ___1_tag;
		TiffWriter_WriteHeader_m54843B2C3CCD0470AE495D49AA7D30B200B6B0B3(L_0, L_1, 3, 1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___0_outputstream;
		uint16_t L_3 = ___2_value;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_2, L_3);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___0_outputstream;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_4, (uint16_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_Write_mA40D89F946E8A30E267E67DC58F99BE53DAE65E2 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_outputstream;
		int32_t L_1 = ___1_tag;
		TiffWriter_WriteHeader_m54843B2C3CCD0470AE495D49AA7D30B200B6B0B3(L_0, L_1, 4, 1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___0_outputstream;
		uint32_t L_3 = ___2_value;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteOffset_mDB4767B838A0862E91051D581FD068C552F46B1A (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, int32_t ___1_tag, int32_t ___2_type, int32_t ___3_count, uint32_t ___4_offset, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_outputstream;
		int32_t L_1 = ___1_tag;
		int32_t L_2 = ___2_type;
		int32_t L_3 = ___3_count;
		TiffWriter_WriteHeader_m54843B2C3CCD0470AE495D49AA7D30B200B6B0B3(L_0, L_1, L_2, L_3, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = ___0_outputstream;
		uint32_t L_5 = ___4_offset;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_AddIntegerArray_m4BFA3DC13788189959510725E24024CDC8805368 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___0_buff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___0_buff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_value;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BitConverter_GetBytes_m61B5DA2AFDE71BC154C7E0298759972A0A422290(L_4, NULL);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_0, (RuntimeObject*)L_5, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		int32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_value;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_AddAscii_mA4F299BB74854FBF36904013E65408903649D959 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___0_buff, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___0_buff;
		String_t* L_1 = ___1_text;
		int32_t L_2 = V_0;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_0, (uint8_t)((int32_t)(uint8_t)L_3), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		String_t* L_6 = ___1_text;
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		String_t* L_8 = ___1_text;
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_1 = L_9;
		goto IL_0033;
	}

IL_0028:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = ___0_buff;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_10, (uint8_t)0, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		if (((int32_t)(L_12&2)))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_WriteToFile_m3CEE4EBFABD3FC6A447116B0090A68CD8A8C4108 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_outputstream, bool ___1_alphaChannel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B02FCF7196FF1776A6D7B89560E7D3792BC70EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80300486C658920CD81DB755B0F344CB6F4FCB34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	uint16_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B9_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B10_2 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* G_B12_3 = NULL;
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_outputstream;
		VirtualActionInvoker1< Il2CppChar >::Invoke(11, L_0, ((int32_t)73));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_outputstream;
		VirtualActionInvoker1< Il2CppChar >::Invoke(11, L_1, ((int32_t)73));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = ___0_outputstream;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_2, (uint16_t)((int32_t)42));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = ___0_outputstream;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_3, 8);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_4, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = ___1_alphaChannel;
		if (L_5)
		{
			G_B2_0 = ((int32_t)17);
			goto IL_002d;
		}
		G_B1_0 = ((int32_t)17);
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0)));
		uint16_t L_6 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)10), ((int32_t)il2cpp_codegen_multiply(((int32_t)12), (int32_t)L_6)))), 4)), 2));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_7 = ___0_outputstream;
		uint16_t L_8 = V_1;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_7, L_8);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->___ImageSourceData;
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_9);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->___ImageData;
		int64_t L_12;
		L_12 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_11);
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)2), L_10)), L_12)));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = __this->___Bitmap;
		bool L_14 = ___1_alphaChannel;
		if (L_14)
		{
			G_B5_0 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
			goto IL_006e;
		}
		G_B4_0 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
	}
	{
		G_B6_0 = 3;
		G_B6_1 = G_B4_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B6_0 = 4;
		G_B6_1 = G_B5_0;
	}

IL_006f:
	{
		V_4 = ((int32_t)il2cpp_codegen_multiply(G_B6_1, G_B6_0));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_15 = ___0_outputstream;
		TiffWriter_Write_mA40D89F946E8A30E267E67DC58F99BE53DAE65E2(L_15, ((int32_t)254), 0, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___0_outputstream;
		int32_t L_17 = __this->___Width;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_16, ((int32_t)256), (uint16_t)((int32_t)(uint16_t)L_17), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_18 = ___0_outputstream;
		int32_t L_19 = __this->___Height;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_18, ((int32_t)257), (uint16_t)((int32_t)(uint16_t)L_19), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_20 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_20, ((int32_t)258), (uint16_t)8, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_21 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_21, ((int32_t)259), (uint16_t)1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_22, ((int32_t)262), (uint16_t)2, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_23 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_23, ((int32_t)274), (uint16_t)1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = ___0_outputstream;
		bool L_25 = ___1_alphaChannel;
		if (L_25)
		{
			G_B8_0 = ((int32_t)277);
			G_B8_1 = L_24;
			goto IL_00de;
		}
		G_B7_0 = ((int32_t)277);
		G_B7_1 = L_24;
	}
	{
		G_B9_0 = 3;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00df;
	}

IL_00de:
	{
		G_B9_0 = 4;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00df:
	{
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(G_B9_2, G_B9_1, (uint16_t)((int32_t)(uint16_t)G_B9_0), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_26 = ___0_outputstream;
		int32_t L_27 = __this->___Height;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_26, ((int32_t)278), (uint16_t)((int32_t)(uint16_t)L_27), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = ___0_outputstream;
		int32_t L_29 = __this->___Width;
		int32_t L_30 = __this->___Height;
		bool L_31 = ___1_alphaChannel;
		if (L_31)
		{
			G_B11_0 = ((int32_t)il2cpp_codegen_multiply(L_29, L_30));
			G_B11_1 = ((int32_t)279);
			G_B11_2 = L_28;
			goto IL_0110;
		}
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply(L_29, L_30));
		G_B10_1 = ((int32_t)279);
		G_B10_2 = L_28;
	}
	{
		G_B12_0 = 3;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0111;
	}

IL_0110:
	{
		G_B12_0 = 4;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0111:
	{
		TiffWriter_Write_mA40D89F946E8A30E267E67DC58F99BE53DAE65E2(G_B12_3, G_B12_2, ((int32_t)il2cpp_codegen_multiply(G_B12_1, G_B12_0)), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_32 = ___0_outputstream;
		uint32_t L_33 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_34 = V_0;
		int32_t L_35;
		L_35 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_34, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		TiffWriter_WriteOffset_mDB4767B838A0862E91051D581FD068C552F46B1A(L_32, ((int32_t)282), 5, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_33, L_35)), NULL);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37;
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38;
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)1);
		TiffWriter_AddIntegerArray_m4BFA3DC13788189959510725E24024CDC8805368(L_36, L_39, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_40 = ___0_outputstream;
		uint32_t L_41 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_42 = V_0;
		int32_t L_43;
		L_43 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_42, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		TiffWriter_WriteOffset_mDB4767B838A0862E91051D581FD068C552F46B1A(L_40, ((int32_t)283), 5, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_41, L_43)), NULL);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_44 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45;
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)1);
		TiffWriter_AddIntegerArray_m4BFA3DC13788189959510725E24024CDC8805368(L_44, L_47, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_48 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_48, ((int32_t)284), (uint16_t)1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_49 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_49, ((int32_t)296), (uint16_t)1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_50 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_50, ((int32_t)339), (uint16_t)1, NULL);
		bool L_51 = ___1_alphaChannel;
		if (!L_51)
		{
			goto IL_019c;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_52 = ___0_outputstream;
		TiffWriter_Write_mFA609482F6B8E69526DC10513CEB49C9B5F968A7(L_52, ((int32_t)338), (uint16_t)1, NULL);
	}

IL_019c:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = ___0_outputstream;
		uint32_t L_54 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_55 = V_0;
		int32_t L_56;
		L_56 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_55, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		TiffWriter_Write_mA40D89F946E8A30E267E67DC58F99BE53DAE65E2(L_53, ((int32_t)273), ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_54)), ((int64_t)L_56)))), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_57 = ___0_outputstream;
		int32_t L_58 = V_3;
		uint32_t L_59 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_60 = V_0;
		int32_t L_61;
		L_61 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_60, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		int32_t L_62 = V_4;
		TiffWriter_WriteOffset_mDB4767B838A0862E91051D581FD068C552F46B1A(L_57, ((int32_t)37724), 7, ((int32_t)il2cpp_codegen_add(((int32_t)48), ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 3))&((int32_t)-4))))), ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_59)), ((int64_t)L_61))), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_62, 3))&((int32_t)-4))))))), NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_63 = ___0_outputstream;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_63, 0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_64 = ___0_outputstream;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_64, (uint16_t)0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_65 = ___0_outputstream;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_66 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67;
		L_67 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_66, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_65, L_67);
		V_5 = 0;
		goto IL_0282;
	}

IL_01fd:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_68 = ___0_outputstream;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_69 = __this->___Bitmap;
		int32_t L_70 = V_5;
		float L_71 = ((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___r;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_68, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_71, (255.0f)))));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_72 = ___0_outputstream;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_73 = __this->___Bitmap;
		int32_t L_74 = V_5;
		float L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->___g;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_72, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_75, (255.0f)))));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_76 = ___0_outputstream;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_77 = __this->___Bitmap;
		int32_t L_78 = V_5;
		float L_79 = ((L_77)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_78)))->___b;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_76, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_79, (255.0f)))));
		bool L_80 = ___1_alphaChannel;
		if (!L_80)
		{
			goto IL_027c;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_81 = ___0_outputstream;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_82 = __this->___Bitmap;
		int32_t L_83 = V_5;
		float L_84 = ((L_82)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_83)))->___a;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_81, (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_84, (255.0f)))));
	}

IL_027c:
	{
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0282:
	{
		int32_t L_86 = V_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_87 = __this->___Bitmap;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
		{
			goto IL_01fd;
		}
	}
	{
		goto IL_02a0;
	}

IL_0293:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_88 = ___0_outputstream;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_88, (uint8_t)0);
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_02a0:
	{
		int32_t L_90 = V_4;
		if (((int32_t)(L_90&3)))
		{
			goto IL_0293;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_91 = ___0_outputstream;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_92;
		L_92 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral7B02FCF7196FF1776A6D7B89560E7D3792BC70EA, NULL);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_91, L_92);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_93 = ___0_outputstream;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_93, (uint8_t)0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_94 = ___0_outputstream;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_95;
		L_95 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_94, L_95);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_96 = ___0_outputstream;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_97;
		L_97 = TiffWriter_MakeKey_mE5B51772D484A8894E5D831FB5D68D958D908975(_stringLiteral80300486C658920CD81DB755B0F344CB6F4FCB34, NULL);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(12, L_96, L_97);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_98 = ___0_outputstream;
		int32_t L_99 = V_3;
		VirtualActionInvoker1< uint32_t >::Invoke(17, L_98, L_99);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_100 = ___0_outputstream;
		int32_t L_101 = __this->___LayerCount;
		VirtualActionInvoker1< int16_t >::Invoke(14, L_100, ((int16_t)L_101));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_102 = ___0_outputstream;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_103 = __this->___ImageSourceData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104;
		L_104 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35, L_103);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_102, L_104);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_105 = ___0_outputstream;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_106 = __this->___ImageData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107;
		L_107 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35, L_106);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_105, L_107);
		goto IL_0320;
	}

IL_0315:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_108 = ___0_outputstream;
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_108, (uint8_t)0);
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_0320:
	{
		int32_t L_110 = V_3;
		if (((int32_t)(L_110&3)))
		{
			goto IL_0315;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TiffWriter_Encode_m970FAB72851B4645BA9529EDD1C3B4AD3E28DE88 (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_images, int32_t ___1_w, int32_t ___2_h, int32_t ___3_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___1_w;
		int32_t L_1 = ___2_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		goto IL_0040;
	}

IL_0011:
	{
		V_4 = 0;
		goto IL_0033;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_images;
		int32_t L_7 = V_4;
		int32_t L_8 = V_3;
		int32_t L_9 = ___3_channel;
		uint8_t L_10;
		L_10 = Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline(((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8))))), L_9, NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_10);
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		int32_t L_12 = V_4;
		int32_t L_13 = ___1_w;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		int32_t L_16 = ___1_w;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
	}

IL_0040:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = ___2_h;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TiffWriter_EncodeRLE_m50EE4432896B24A5BD24675DC63CF4D8851EF6B2 (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_images, int32_t ___1_w, int32_t ___2_h, int32_t ___3_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_1 = NULL;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
		V_1 = L_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_3, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_2 = L_3;
		V_3 = 0;
		V_4 = 0;
		goto IL_019c;
	}

IL_001d:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = V_2;
		int32_t L_5;
		L_5 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_4, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		V_5 = L_5;
		V_6 = 0;
		V_7 = 0;
		goto IL_012a;
	}

IL_0030:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_images;
		int32_t L_7 = V_7;
		int32_t L_8 = V_4;
		int32_t L_9 = ___3_channel;
		uint8_t L_10;
		L_10 = Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline(((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8))))), L_9, NULL);
		V_8 = L_10;
		V_9 = 1;
		goto IL_0066;
	}

IL_0048:
	{
		uint8_t L_11 = V_8;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12 = ___0_images;
		int32_t L_13 = V_7;
		int32_t L_14 = V_4;
		int32_t L_15 = V_9;
		int32_t L_16 = ___3_channel;
		uint8_t L_17;
		L_17 = Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline(((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_13, L_14)), L_15))))), L_16, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_17))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_18 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0066:
	{
		int32_t L_19 = V_7;
		int32_t L_20 = V_9;
		int32_t L_21 = ___1_w;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_19, L_20))) < ((int32_t)L_21)))
		{
			goto IL_0048;
		}
	}

IL_006e:
	{
		int32_t L_22 = V_9;
		if ((((int32_t)L_22) <= ((int32_t)2)))
		{
			goto IL_0124;
		}
	}
	{
		goto IL_00c2;
	}

IL_0078:
	{
		int32_t L_23 = V_7;
		int32_t L_24 = V_6;
		int32_t L_25;
		L_25 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_subtract(L_23, L_24)), ((int32_t)128), NULL);
		V_10 = L_25;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_26 = V_2;
		int32_t L_27 = V_10;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_26, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_27, 1))), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		V_11 = 0;
		goto IL_00bc;
	}

IL_0099:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_28 = V_2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_29 = ___0_images;
		int32_t L_30 = V_6;
		int32_t L_31 = V_4;
		int32_t L_32 = ___3_channel;
		uint8_t L_33;
		L_33 = Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline(((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, L_31))))), L_32, NULL);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_28, L_33, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_34 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00bc:
	{
		int32_t L_36 = V_11;
		int32_t L_37 = V_10;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0099;
		}
	}

IL_00c2:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_7;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_010a;
	}

IL_00ca:
	{
		int32_t L_40 = V_7;
		int32_t L_41 = V_9;
		int32_t L_42 = V_6;
		int32_t L_43;
		L_43 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), L_42)), ((int32_t)127), NULL);
		V_12 = L_43;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_44 = V_2;
		int32_t L_45 = V_12;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_44, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)256), ((int32_t)il2cpp_codegen_subtract(L_45, 1))))), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_46 = V_2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_47 = ___0_images;
		int32_t L_48 = V_6;
		int32_t L_49 = V_4;
		int32_t L_50 = ___3_channel;
		uint8_t L_51;
		L_51 = Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline(((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, L_49))))), L_50, NULL);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_46, L_51, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_52 = V_6;
		int32_t L_53 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
	}

IL_010a:
	{
		int32_t L_54 = V_6;
		int32_t L_55 = V_7;
		int32_t L_56 = V_9;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_55, L_56)))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_57 = V_7;
		int32_t L_58 = V_9;
		int32_t L_59 = V_6;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_57, L_58)), L_59))) > ((int32_t)2)))
		{
			goto IL_00ca;
		}
	}

IL_011e:
	{
		int32_t L_60 = V_6;
		V_7 = L_60;
		goto IL_012a;
	}

IL_0124:
	{
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_012a:
	{
		int32_t L_62 = V_7;
		int32_t L_63 = ___1_w;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_017d;
	}

IL_0134:
	{
		int32_t L_64 = ___1_w;
		int32_t L_65 = V_6;
		int32_t L_66;
		L_66 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_subtract(L_64, L_65)), ((int32_t)128), NULL);
		V_13 = L_66;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_67 = V_2;
		int32_t L_68 = V_13;
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_67, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_68, 1))), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		V_14 = 0;
		goto IL_0177;
	}

IL_0154:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_69 = V_2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_70 = ___0_images;
		int32_t L_71 = V_6;
		int32_t L_72 = V_4;
		int32_t L_73 = ___3_channel;
		uint8_t L_74;
		L_74 = Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline(((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, L_72))))), L_73, NULL);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_69, L_74, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_75 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0177:
	{
		int32_t L_77 = V_14;
		int32_t L_78 = V_13;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0154;
		}
	}

IL_017d:
	{
		int32_t L_79 = V_6;
		int32_t L_80 = ___1_w;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_0134;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_81 = V_1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_82 = V_2;
		int32_t L_83;
		L_83 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_82, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		int32_t L_84 = V_5;
		VirtualActionInvoker1< uint16_t >::Invoke(15, L_81, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract(L_83, L_84))));
		int32_t L_85 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		int32_t L_86 = V_4;
		int32_t L_87 = ___1_w;
		V_4 = ((int32_t)il2cpp_codegen_add(L_86, L_87));
	}

IL_019c:
	{
		int32_t L_88 = V_3;
		int32_t L_89 = ___2_h;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_001d;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_90 = V_1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_91 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92;
		L_92 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_91, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_90, L_92);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_93 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94;
		L_94 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35, L_93);
		return L_94;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_Print_m77415B9574E0E57B4EE74B4C61A0BD9DACB89101 (String_t* ___0_filePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tag_tE6B732EC135066147A9E462FBDA40D4A6E13990F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t2455B91D5D27573F653EFD54EAA9E81E94DC3CCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	bool V_2 = false;
	uint16_t V_3 = 0;
	uint32_t V_4 = 0;
	uint16_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	uint32_t V_13 = 0;
	int64_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	String_t* G_B27_0 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B28_0 = NULL;
	String_t* G_B29_0 = NULL;
	String_t* G_B29_1 = NULL;
	RuntimeObject* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	RuntimeObject* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		String_t* L_0 = ___0_filePath;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_1, L_0, 3, 1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_025e:
			{
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0267;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0267:
				{
					return;
				}
			}
		});
		try
		{
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_5, L_4, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0254_1:
					{
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = V_1;
							if (!L_6)
							{
								goto IL_025d_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = V_1;
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_025d_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = V_1;
						uint16_t L_9;
						L_9 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_8);
						V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)((int32_t)18761)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = V_1;
						uint16_t L_11;
						L_11 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_10);
						V_3 = L_11;
						bool L_12 = V_2;
						if (!L_12)
						{
							goto IL_0032_2;
						}
					}
					{
						uint16_t L_13 = V_3;
						uint16_t L_14;
						L_14 = TiffWriter_SwapEndian_m7397F77A5176ED84221AD080B2AD949E708683CD(L_13, NULL);
						V_3 = L_14;
					}

IL_0032_2:
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = V_1;
						uint32_t L_16;
						L_16 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_15);
						V_4 = L_16;
						bool L_17 = V_2;
						if (!L_17)
						{
							goto IL_024b_2;
						}
					}
					{
						uint32_t L_18 = V_4;
						uint32_t L_19;
						L_19 = TiffWriter_SwapEndian_m23C35336984FA3532E5974B6752812712F21A7EA(L_18, NULL);
						V_4 = L_19;
						goto IL_024b_2;
					}

IL_004e_2:
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_20 = V_0;
						uint32_t L_21 = V_4;
						int64_t L_22;
						L_22 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25, L_20, ((int64_t)(uint64_t)((uint32_t)L_21)), 0);
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = V_1;
						uint16_t L_24;
						L_24 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_23);
						V_5 = L_24;
						bool L_25 = V_2;
						if (!L_25)
						{
							goto IL_006d_2;
						}
					}
					{
						uint16_t L_26 = V_5;
						uint16_t L_27;
						L_27 = TiffWriter_SwapEndian_m7397F77A5176ED84221AD080B2AD949E708683CD(L_26, NULL);
						V_5 = L_27;
					}

IL_006d_2:
					{
						V_7 = 0;
						goto IL_022a_2;
					}

IL_0075_2:
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = V_1;
						uint16_t L_29;
						L_29 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_28);
						V_8 = L_29;
						bool L_30 = V_2;
						if (!L_30)
						{
							goto IL_0089_2;
						}
					}
					{
						uint16_t L_31 = V_8;
						uint16_t L_32;
						L_32 = TiffWriter_SwapEndian_m7397F77A5176ED84221AD080B2AD949E708683CD(L_31, NULL);
						V_8 = L_32;
					}

IL_0089_2:
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_33 = V_1;
						uint16_t L_34;
						L_34 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_33);
						V_9 = L_34;
						bool L_35 = V_2;
						if (!L_35)
						{
							goto IL_009d_2;
						}
					}
					{
						uint16_t L_36 = V_9;
						uint16_t L_37;
						L_37 = TiffWriter_SwapEndian_m7397F77A5176ED84221AD080B2AD949E708683CD(L_36, NULL);
						V_9 = L_37;
					}

IL_009d_2:
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = V_1;
						uint32_t L_39;
						L_39 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_38);
						V_10 = L_39;
						bool L_40 = V_2;
						if (!L_40)
						{
							goto IL_00b1_2;
						}
					}
					{
						uint32_t L_41 = V_10;
						uint32_t L_42;
						L_42 = TiffWriter_SwapEndian_m23C35336984FA3532E5974B6752812712F21A7EA(L_41, NULL);
						V_10 = L_42;
					}

IL_00b1_2:
					{
						V_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
						uint32_t L_43 = V_10;
						uint16_t L_44 = V_9;
						int32_t L_45;
						L_45 = TiffWriter_GetTypeSize_m8A5644BD007A3455C05BCFF0F6A9C39F2B945807(L_44, NULL);
						if ((((int64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_43)), ((int64_t)L_45)))) > ((int64_t)((int64_t)4))))
						{
							goto IL_0112_2;
						}
					}
					{
						V_12 = 0;
						goto IL_00ee_2;
					}

IL_00cd_2:
					{
						String_t* L_46 = V_11;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_47 = V_1;
						uint16_t L_48 = V_9;
						RuntimeObject* L_49;
						L_49 = TiffWriter_GetValue_m4EAB50BB4AD83A4A629A4F85556C4A2816FFE7C0(L_47, L_48, NULL);
						String_t* L_50;
						L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_49);
						String_t* L_51;
						L_51 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_46, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_50, NULL);
						V_11 = L_51;
						int32_t L_52 = V_12;
						V_12 = ((int32_t)il2cpp_codegen_add(L_52, 1));
					}

IL_00ee_2:
					{
						int32_t L_53 = V_12;
						uint32_t L_54 = V_10;
						if ((((int64_t)((int64_t)L_53)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_54)))))
						{
							goto IL_00cd_2;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_55 = V_0;
						uint32_t L_56 = V_10;
						uint16_t L_57 = V_9;
						int32_t L_58;
						L_58 = TiffWriter_GetTypeSize_m8A5644BD007A3455C05BCFF0F6A9C39F2B945807(L_57, NULL);
						int64_t L_59;
						L_59 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25, L_55, ((int64_t)il2cpp_codegen_subtract(((int64_t)4), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_56)), ((int64_t)L_58))))), 1);
						goto IL_01cd_2;
					}

IL_0112_2:
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_60 = V_1;
						uint32_t L_61;
						L_61 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_60);
						V_13 = L_61;
						bool L_62 = V_2;
						if (!L_62)
						{
							goto IL_0126_2;
						}
					}
					{
						uint32_t L_63 = V_13;
						uint32_t L_64;
						L_64 = TiffWriter_SwapEndian_m23C35336984FA3532E5974B6752812712F21A7EA(L_63, NULL);
						V_13 = L_64;
					}

IL_0126_2:
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_65 = V_0;
						int64_t L_66;
						L_66 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_65);
						V_14 = L_66;
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_67 = V_0;
						uint32_t L_68 = V_13;
						int64_t L_69;
						L_69 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25, L_67, ((int64_t)(uint64_t)((uint32_t)L_68)), 0);
						uint16_t L_70 = V_8;
						if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)37724)))))
						{
							goto IL_015b_2;
						}
					}
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_71 = V_1;
						String_t* L_72;
						L_72 = TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420(L_71, ((int32_t)36), (bool)0, 1, NULL);
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_73 = V_1;
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_74 = V_0;
						uint32_t L_75 = V_13;
						uint32_t L_76 = V_10;
						TiffWriter_PrintAdobeImageSourceData_m531591CAE805B57E547C4CC0F283EF6F4257D1DD(L_73, L_74, ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)L_76)), NULL);
						goto IL_01c3_2;
					}

IL_015b_2:
					{
						V_15 = 0;
						goto IL_01bb_2;
					}

IL_0160_2:
					{
						String_t* L_77 = V_11;
						uint16_t L_78 = V_9;
						if ((!(((uint32_t)L_78) == ((uint32_t)2))))
						{
							G_B27_0 = L_77;
							goto IL_016c_2;
						}
						G_B26_0 = L_77;
					}
					{
						int32_t L_79 = V_15;
						if ((((int32_t)L_79) > ((int32_t)0)))
						{
							G_B28_0 = G_B26_0;
							goto IL_0173_2;
						}
						G_B27_0 = G_B26_0;
					}

IL_016c_2:
					{
						G_B29_0 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
						G_B29_1 = G_B27_0;
						goto IL_0178_2;
					}

IL_0173_2:
					{
						G_B29_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
						G_B29_1 = G_B28_0;
					}

IL_0178_2:
					{
						String_t* L_80;
						L_80 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B29_1, G_B29_0, NULL);
						V_11 = L_80;
						int32_t L_81 = V_15;
						if ((((int32_t)L_81) <= ((int32_t)((int32_t)2048))))
						{
							goto IL_0198_2;
						}
					}
					{
						String_t* L_82 = V_11;
						String_t* L_83;
						L_83 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_82, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
						V_11 = L_83;
						goto IL_01c3_2;
					}

IL_0198_2:
					{
						String_t* L_84 = V_11;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_85 = V_1;
						uint16_t L_86 = V_9;
						RuntimeObject* L_87;
						L_87 = TiffWriter_GetValue_m4EAB50BB4AD83A4A629A4F85556C4A2816FFE7C0(L_85, L_86, NULL);
						RuntimeObject* L_88 = L_87;
						if (L_88)
						{
							G_B33_0 = L_88;
							G_B33_1 = L_84;
							goto IL_01a9_2;
						}
						G_B32_0 = L_88;
						G_B32_1 = L_84;
					}
					{
						G_B34_0 = ((String_t*)(NULL));
						G_B34_1 = G_B32_1;
						goto IL_01ae_2;
					}

IL_01a9_2:
					{
						String_t* L_89;
						L_89 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B33_0);
						G_B34_0 = L_89;
						G_B34_1 = G_B33_1;
					}

IL_01ae_2:
					{
						String_t* L_90;
						L_90 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B34_1, G_B34_0, NULL);
						V_11 = L_90;
						int32_t L_91 = V_15;
						V_15 = ((int32_t)il2cpp_codegen_add(L_91, 1));
					}

IL_01bb_2:
					{
						int32_t L_92 = V_15;
						uint32_t L_93 = V_10;
						if ((((int64_t)((int64_t)L_92)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_93)))))
						{
							goto IL_0160_2;
						}
					}

IL_01c3_2:
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_94 = V_0;
						int64_t L_95 = V_14;
						int64_t L_96;
						L_96 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25, L_94, L_95, 0);
					}

IL_01cd_2:
					{
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = L_97;
						uint16_t L_99 = V_8;
						V_16 = L_99;
						Il2CppFakeBox<int32_t> L_100(Tag_tE6B732EC135066147A9E462FBDA40D4A6E13990F_il2cpp_TypeInfo_var, (&V_16));
						String_t* L_101;
						L_101 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_100), NULL);
						(L_98)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_101);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_102 = L_98;
						(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = L_102;
						uint16_t L_104 = V_9;
						V_17 = L_104;
						Il2CppFakeBox<int32_t> L_105(Type_t2455B91D5D27573F653EFD54EAA9E81E94DC3CCF_il2cpp_TypeInfo_var, (&V_17));
						String_t* L_106;
						L_106 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_105), NULL);
						(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_106);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_103;
						(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = L_107;
						String_t* L_109;
						L_109 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_10), NULL);
						(L_108)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_109);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = L_108;
						String_t* L_111 = V_11;
						(L_110)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_111);
						String_t* L_112;
						L_112 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_110, NULL);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_112, NULL);
						int32_t L_113 = V_7;
						V_7 = ((int32_t)il2cpp_codegen_add(L_113, 1));
					}

IL_022a_2:
					{
						int32_t L_114 = V_7;
						uint16_t L_115 = V_5;
						if ((((int32_t)L_114) < ((int32_t)L_115)))
						{
							goto IL_0075_2;
						}
					}
					{
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_116 = V_1;
						uint32_t L_117;
						L_117 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_116);
						V_6 = L_117;
						bool L_118 = V_2;
						if (!L_118)
						{
							goto IL_0247_2;
						}
					}
					{
						uint32_t L_119 = V_6;
						uint32_t L_120;
						L_120 = TiffWriter_SwapEndian_m23C35336984FA3532E5974B6752812712F21A7EA(L_119, NULL);
						V_6 = L_120;
					}

IL_0247_2:
					{
						uint32_t L_121 = V_6;
						V_4 = L_121;
					}

IL_024b_2:
					{
						uint32_t L_122 = V_4;
						if (L_122)
						{
							goto IL_004e_2;
						}
					}
					{
						goto IL_0268;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0268:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_br, int32_t ___1_len, bool ___2_reverse, int32_t ___3_paddbytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* G_B7_0 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_0045;
	}

IL_000a:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_br;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8, L_0);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_br;
		Il2CppChar L_3;
		L_3 = VirtualFuncInvoker0< Il2CppChar >::Invoke(13, L_2);
		V_2 = L_3;
		int32_t L_4 = ___1_len;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if (!L_5)
		{
			goto IL_004d;
		}
	}

IL_0021:
	{
		bool L_6 = ___2_reverse;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		String_t* L_7;
		L_7 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_8, NULL);
		G_B7_0 = L_9;
		goto IL_0040;
	}

IL_0033:
	{
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		String_t* L_11;
		L_11 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_11, NULL);
		G_B7_0 = L_12;
	}

IL_0040:
	{
		V_0 = G_B7_0;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		int32_t L_14 = ___1_len;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_15 = V_1;
		int32_t L_16 = ___1_len;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000a;
		}
	}

IL_004d:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = ___3_paddbytes;
		if ((((int32_t)((int32_t)(L_17%L_18))) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_br;
		int32_t L_20 = ___3_paddbytes;
		int32_t L_21 = V_1;
		int32_t L_22 = ___3_paddbytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)(L_21%L_22)))));
	}

IL_005f:
	{
		String_t* L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter_PrintAdobeImageSourceData_m531591CAE805B57E547C4CC0F283EF6F4257D1DD (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_br, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___1_fs, uint32_t ___2_endofposition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD425A54C2793065A57B0063ADAEF920645A7CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5EA7100E9B138CC818318DB1BE0603CC265559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14830EFBAE563E9FC190A5981D9091803D383C83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16449F5B8A42A9CB9416374C3D55C4FBC34349ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4C9E18872CD8E3F91122F3439C5120F731A191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3262D05B5F4A52792BB908BD05A6268B291CD5FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D99DC8BCCF613EFB6349459C68885545108CC15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D06581E237597DE12005CE8061054AE8A5D516);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6971FA2F664F643324D049D163440CE51BBA1BE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7385EA0F4D9990D581F45075937FDC39333B511A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB7064F462E26DE8F9523C8ADCF80C3609D8B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80300486C658920CD81DB755B0F344CB6F4FCB34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97504357947BF92C288538C94B1F07F00F347050);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F609F8B35F452D274A30AA8AE72689850F2A40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6158443A176AFA61DCE11126211D852607995B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA05CE05197117299EFC9BB8FEECC9626F3BD79B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D78A074E584B85268FB6459FDCBE3C78AF8156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FC55F2512237364CB30251D749381917C1ACE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD576DF9A67129D86549FC3D249809F513CA54B78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD67F08367238119C1E2A799BCC8EB1EEB4F30F0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1D2907DA347B4675CEF244763F05CC5FC989A1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCDD4C28CCF7F5F87668E1DCE659B26036DB9A44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEED5CE678C8F37B51545AD9CD3DB038F01349C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	String_t* V_2 = NULL;
	uint16_t V_3 = 0;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* V_4 = NULL;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* V_5 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_6 = NULL;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint16_t V_13 = 0;
	String_t* V_14 = NULL;
	String_t* V_15 = NULL;
	uint8_t V_16 = 0x0;
	uint8_t V_17 = 0x0;
	uint8_t V_18 = 0x0;
	uint8_t V_19 = 0x0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint8_t V_24 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_25 = NULL;
	int32_t V_26 = 0;
	uint32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	uint32_t V_32 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_33 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_34 = NULL;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	uint32_t V_37 = 0;
	String_t* G_B29_0 = NULL;
	String_t* G_B28_0 = NULL;
	String_t* G_B36_0 = NULL;
	String_t* G_B35_0 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	String_t* G_B47_0 = NULL;
	String_t* G_B46_0 = NULL;
	{
		goto IL_0497;
	}

IL_0005:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_br;
		String_t* L_1;
		L_1 = TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420(L_0, 4, (bool)1, 1, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, _stringLiteralC2C20ED183418E55D5FF88242C7BB516F53B6B59, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___0_br;
		String_t* L_4;
		L_4 = TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420(L_3, 4, (bool)1, 1, NULL);
		V_0 = L_4;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_br;
		uint32_t L_6;
		L_6 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_5);
		V_1 = L_6;
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral80300486C658920CD81DB755B0F344CB6F4FCB34, NULL);
		if (!L_8)
		{
			goto IL_02f2;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___0_br;
		uint16_t L_10;
		L_10 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_9);
		V_3 = L_10;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_11 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)il2cpp_codegen_object_new(List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_il2cpp_TypeInfo_var);
		List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31(L_11, List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_RuntimeMethod_var);
		V_4 = L_11;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_12 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)il2cpp_codegen_object_new(List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_il2cpp_TypeInfo_var);
		List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31(L_12, List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_RuntimeMethod_var);
		V_5 = L_12;
		V_8 = 0;
		goto IL_0247;
	}

IL_005f:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_br;
		uint32_t L_14;
		L_14 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_13);
		V_9 = L_14;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = ___0_br;
		uint32_t L_16;
		L_16 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_15);
		V_10 = L_16;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_br;
		uint32_t L_18;
		L_18 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_17);
		V_11 = L_18;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_br;
		uint32_t L_20;
		L_20 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_19);
		V_12 = L_20;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_21 = ___0_br;
		uint16_t L_22;
		L_22 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_21);
		V_13 = L_22;
		V_26 = 0;
		goto IL_00c2;
	}

IL_008c:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = ___0_br;
		uint16_t L_24;
		L_24 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_23);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_br;
		uint32_t L_26;
		L_26 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_25);
		V_27 = L_26;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_27 = V_5;
		uint32_t L_28 = V_11;
		uint32_t L_29 = V_9;
		List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline(L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_RuntimeMethod_var);
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_30 = V_5;
		uint32_t L_31 = V_12;
		uint32_t L_32 = V_10;
		List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline(L_30, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32)), List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_RuntimeMethod_var);
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_33 = V_4;
		uint32_t L_34 = V_27;
		List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline(L_33, L_34, List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_RuntimeMethod_var);
		int32_t L_35 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c2:
	{
		int32_t L_36 = V_26;
		uint16_t L_37 = V_13;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_008c;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = ___0_br;
		String_t* L_39;
		L_39 = TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420(L_38, 4, (bool)1, 1, NULL);
		V_14 = L_39;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___0_br;
		String_t* L_41;
		L_41 = TiffWriter_ReadString_m586B7D171E0FB00386CC3C1C07B8DE0E72D97420(L_40, 4, (bool)1, 1, NULL);
		V_15 = L_41;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_42 = ___0_br;
		uint8_t L_43;
		L_43 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_42);
		V_16 = L_43;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_44 = ___0_br;
		uint8_t L_45;
		L_45 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_44);
		V_17 = L_45;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_46 = ___0_br;
		uint8_t L_47;
		L_47 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_46);
		V_18 = L_47;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = ___0_br;
		uint8_t L_49;
		L_49 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_48);
		V_19 = L_49;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_50 = ___0_br;
		uint32_t L_51;
		L_51 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_50);
		V_20 = L_51;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_52 = ___1_fs;
		int64_t L_53;
		L_53 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_52);
		uint32_t L_54 = V_20;
		V_21 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(L_53, ((int64_t)(uint64_t)((uint32_t)L_54)))));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_55 = ___0_br;
		uint32_t L_56;
		L_56 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_55);
		V_22 = L_56;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_57 = ___0_br;
		uint32_t L_58;
		L_58 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_57);
		V_23 = L_58;
		V_28 = 0;
		goto IL_013c;
	}

IL_0128:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_59 = ___0_br;
		uint32_t L_60;
		L_60 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_59);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_61 = ___0_br;
		uint32_t L_62;
		L_62 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_61);
		int32_t L_63 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_63, 8));
	}

IL_013c:
	{
		int32_t L_64 = V_28;
		uint32_t L_65 = V_23;
		if ((((int64_t)((int64_t)L_64)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_65)))))
		{
			goto IL_0128;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_66 = ___0_br;
		uint8_t L_67;
		L_67 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_66);
		V_24 = L_67;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_68 = ___0_br;
		uint8_t L_69 = V_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70;
		L_70 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_68, L_69);
		V_25 = L_70;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_71;
		L_71 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_25;
		String_t* L_73;
		L_73 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33, L_71, L_72);
		uint8_t L_74 = V_24;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_74))%2))) <= ((int32_t)0)))
		{
			goto IL_017b;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_75 = ___0_br;
		uint8_t L_76 = V_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77;
		L_77 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_75, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_76))%2)))));
	}

IL_017b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D4C9E18872CD8E3F91122F3439C5120F731A191);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
		String_t* L_81 = V_14;
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_81);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_80;
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral97504357947BF92C288538C94B1F07F00F347050);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
		String_t* L_84 = V_15;
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_84);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = L_83;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCA05CE05197117299EFC9BB8FEECC9626F3BD79B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_85;
		String_t* L_87;
		L_87 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_16), NULL);
		(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_87);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_86;
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD3D78A074E584B85268FB6459FDCBE3C78AF8156);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = L_88;
		String_t* L_90;
		L_90 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_17), NULL);
		(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_90);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = L_89;
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6971FA2F664F643324D049D163440CE51BBA1BE7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = L_91;
		String_t* L_93;
		L_93 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_18), NULL);
		(L_92)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_93);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_92;
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralD576DF9A67129D86549FC3D249809F513CA54B78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = L_94;
		String_t* L_96;
		L_96 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_19), NULL);
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_96);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = L_95;
		(L_97)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral63D06581E237597DE12005CE8061054AE8A5D516);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = L_97;
		String_t* L_99;
		L_99 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_20), NULL);
		(L_98)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100 = L_98;
		(L_100)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral14830EFBAE563E9FC190A5981D9091803D383C83);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = L_100;
		String_t* L_102;
		L_102 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_22), NULL);
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_102);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = L_101;
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralFCDD4C28CCF7F5F87668E1DCE659B26036DB9A44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = L_103;
		String_t* L_105;
		L_105 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_23), NULL);
		(L_104)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_105);
		String_t* L_106;
		L_106 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_104, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_106, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_107 = ___0_br;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_108 = ___1_fs;
		uint32_t L_109 = V_21;
		TiffWriter_PrintAdobeImageSourceData_m531591CAE805B57E547C4CC0F283EF6F4257D1DD(L_107, L_108, L_109, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_110 = ___1_fs;
		uint32_t L_111 = V_21;
		int64_t L_112;
		L_112 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25, L_110, ((int64_t)(uint64_t)((uint32_t)L_111)), 0);
		int32_t L_113 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0247:
	{
		int32_t L_114 = V_8;
		uint16_t L_115 = V_3;
		if ((((int32_t)L_114) < ((int32_t)L_115)))
		{
			goto IL_005f;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_116 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_116, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_6 = L_116;
		V_7 = 0;
		V_29 = 0;
		goto IL_02ca;
	}

IL_025e:
	{
		uint32_t L_117 = V_7;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_118 = V_4;
		int32_t L_119 = V_29;
		uint32_t L_120;
		L_120 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_118, L_119, List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_120));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_121 = ___0_br;
		uint16_t L_122;
		L_122 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_121);
		if ((!(((uint32_t)L_122) == ((uint32_t)1))))
		{
			goto IL_02ac;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_123 = V_6;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_124 = ___0_br;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_125 = V_4;
		int32_t L_126 = V_29;
		uint32_t L_127;
		L_127 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_125, L_126, List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128;
		L_128 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_124, ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, 2)));
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_129 = V_5;
		int32_t L_130 = V_29;
		uint32_t L_131;
		L_131 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_129, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_130, 2)), 1)), List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_132 = V_5;
		int32_t L_133 = V_29;
		uint32_t L_134;
		L_134 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_132, ((int32_t)il2cpp_codegen_multiply(L_133, 2)), List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135;
		L_135 = TiffWriter_packbits_decode_m61B4E75C11892AA13D00D4D660082E2A21077FDA(L_128, L_131, L_134, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_123, L_135, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		goto IL_02c4;
	}

IL_02ac:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_136 = V_6;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_137 = ___0_br;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_138 = V_4;
		int32_t L_139 = V_29;
		uint32_t L_140;
		L_140 = List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324(L_138, L_139, List_1_get_Item_m934DB856B4560B22F57FDEEF351E373E5F1B6324_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141;
		L_141 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_137, ((int32_t)il2cpp_codegen_subtract((int32_t)L_140, 2)));
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_136, L_141, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
	}

IL_02c4:
	{
		int32_t L_142 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_02ca:
	{
		int32_t L_143 = V_29;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_144 = V_4;
		int32_t L_145;
		L_145 = List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_inline(L_144, List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_RuntimeMethod_var);
		if ((((int32_t)L_143) < ((int32_t)L_145)))
		{
			goto IL_025e;
		}
	}
	{
		uint32_t L_146 = V_7;
		if ((!(((uint32_t)((int32_t)((int32_t)L_146&3))) > ((uint32_t)0))))
		{
			goto IL_02e9;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_147 = ___0_br;
		uint32_t L_148 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149;
		L_149 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_147, ((int32_t)il2cpp_codegen_subtract(4, ((int32_t)((int32_t)L_148&3)))));
	}

IL_02e9:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_150 = ___0_br;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_151 = ___1_fs;
		uint32_t L_152 = ___2_endofposition;
		TiffWriter_PrintAdobeImageSourceData_m531591CAE805B57E547C4CC0F283EF6F4257D1DD(L_150, L_151, L_152, NULL);
		return;
	}

IL_02f2:
	{
		String_t* L_153 = V_0;
		bool L_154;
		L_154 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_153, _stringLiteral7CB7064F462E26DE8F9523C8ADCF80C3609D8B2D, NULL);
		if (!L_154)
		{
			goto IL_0332;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_155 = ___0_br;
		double L_156;
		L_156 = VirtualFuncInvoker0< double >::Invoke(21, L_155);
		V_30 = L_156;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_157 = ___0_br;
		double L_158;
		L_158 = VirtualFuncInvoker0< double >::Invoke(21, L_157);
		V_31 = L_158;
		String_t* L_159;
		L_159 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_30), NULL);
		String_t* L_160;
		L_160 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_31), NULL);
		String_t* L_161;
		L_161 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3262D05B5F4A52792BB908BD05A6268B291CD5FF, L_159, _stringLiteral7385EA0F4D9990D581F45075937FDC39333B511A, L_160, NULL);
		V_2 = L_161;
		goto IL_044b;
	}

IL_0332:
	{
		String_t* L_162 = V_0;
		bool L_163;
		L_163 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_162, _stringLiteral0E5EA7100E9B138CC818318DB1BE0603CC265559, NULL);
		if (!L_163)
		{
			goto IL_037d;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_164 = ___0_br;
		uint32_t L_165;
		L_165 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_164);
		V_32 = L_165;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_166 = ___0_br;
		uint32_t L_167 = V_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168;
		L_168 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_166, ((int32_t)il2cpp_codegen_multiply((int32_t)L_167, 2)));
		V_33 = L_168;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_169;
		L_169 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_170 = V_33;
		String_t* L_171;
		L_171 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33, L_169, L_170);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = V_33;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_172)->max_length))&3))) <= ((int32_t)0)))
		{
			G_B29_0 = L_171;
			goto IL_0377;
		}
		G_B28_0 = L_171;
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_173 = ___0_br;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_174 = V_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_175;
		L_175 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_173, ((int32_t)il2cpp_codegen_subtract(4, ((int32_t)(((int32_t)(((RuntimeArray*)L_174)->max_length))&3)))));
		G_B29_0 = G_B28_0;
	}

IL_0377:
	{
		V_2 = G_B29_0;
		goto IL_044b;
	}

IL_037d:
	{
		String_t* L_176 = V_0;
		bool L_177;
		L_177 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_176, _stringLiteralD4FC55F2512237364CB30251D749381917C1ACE9, NULL);
		if (L_177)
		{
			goto IL_03a4;
		}
	}
	{
		String_t* L_178 = V_0;
		bool L_179;
		L_179 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_178, _stringLiteralFFEED5CE678C8F37B51545AD9CD3DB038F01349C, NULL);
		if (L_179)
		{
			goto IL_03a4;
		}
	}
	{
		String_t* L_180 = V_0;
		bool L_181;
		L_181 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_180, _stringLiteral0BD425A54C2793065A57B0063ADAEF920645A7CC, NULL);
		if (!L_181)
		{
			goto IL_03e7;
		}
	}

IL_03a4:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_182 = ___0_br;
		uint32_t L_183 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_184;
		L_184 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_182, L_183);
		V_34 = L_184;
		V_35 = 0;
		goto IL_03dd;
	}

IL_03b2:
	{
		String_t* L_185 = V_2;
		int32_t L_186 = V_35;
		if (L_186)
		{
			G_B36_0 = L_185;
			goto IL_03be;
		}
		G_B35_0 = L_185;
	}
	{
		G_B37_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B37_1 = G_B35_0;
		goto IL_03c3;
	}

IL_03be:
	{
		G_B37_0 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B37_1 = G_B36_0;
	}

IL_03c3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_187 = V_34;
		int32_t L_188 = V_35;
		int32_t L_189 = L_188;
		uint8_t L_190 = (L_187)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_189));
		V_36 = L_190;
		String_t* L_191;
		L_191 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_36), NULL);
		String_t* L_192;
		L_192 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B37_1, G_B37_0, L_191, NULL);
		V_2 = L_192;
		int32_t L_193 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_193, 1));
	}

IL_03dd:
	{
		int32_t L_194 = V_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_195 = V_34;
		if ((((int32_t)L_194) < ((int32_t)((int32_t)(((RuntimeArray*)L_195)->max_length)))))
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_044b;
	}

IL_03e7:
	{
		String_t* L_196 = V_0;
		bool L_197;
		L_197 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_196, _stringLiteral5D99DC8BCCF613EFB6349459C68885545108CC15, NULL);
		if (L_197)
		{
			goto IL_0428;
		}
	}
	{
		String_t* L_198 = V_0;
		bool L_199;
		L_199 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_198, _stringLiteralE1D2907DA347B4675CEF244763F05CC5FC989A1C, NULL);
		if (L_199)
		{
			goto IL_0428;
		}
	}
	{
		String_t* L_200 = V_0;
		bool L_201;
		L_201 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_200, _stringLiteralB6158443A176AFA61DCE11126211D852607995B8, NULL);
		if (L_201)
		{
			goto IL_0428;
		}
	}
	{
		String_t* L_202 = V_0;
		bool L_203;
		L_203 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_202, _stringLiteralD67F08367238119C1E2A799BCC8EB1EEB4F30F0B, NULL);
		if (L_203)
		{
			goto IL_0428;
		}
	}
	{
		String_t* L_204 = V_0;
		bool L_205;
		L_205 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_204, _stringLiteral16449F5B8A42A9CB9416374C3D55C4FBC34349ED, NULL);
		if (!L_205)
		{
			goto IL_0443;
		}
	}

IL_0428:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_206 = ___0_br;
		uint32_t L_207;
		L_207 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_206);
		V_37 = L_207;
		String_t* L_208;
		L_208 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_37), NULL);
		String_t* L_209 = L_208;
		if (L_209)
		{
			G_B47_0 = L_209;
			goto IL_0440;
		}
		G_B46_0 = L_209;
	}
	{
		G_B47_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0440:
	{
		V_2 = G_B47_0;
		goto IL_044b;
	}

IL_0443:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_210 = ___0_br;
		uint32_t L_211 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_212;
		L_212 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_210, L_211);
	}

IL_044b:
	{
		uint32_t L_213 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_213&3))) > ((uint32_t)0))))
		{
			goto IL_045d;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_214 = ___0_br;
		uint32_t L_215 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216;
		L_216 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_214, ((int32_t)il2cpp_codegen_subtract(4, ((int32_t)((int32_t)L_215&3)))));
	}

IL_045d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_217 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_218 = L_217;
		(L_218)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral98F609F8B35F452D274A30AA8AE72689850F2A40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_219 = L_218;
		String_t* L_220 = V_0;
		(L_219)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_220);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_221 = L_219;
		(L_221)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_222 = L_221;
		String_t* L_223;
		L_223 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_1), NULL);
		(L_222)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_223);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_224 = L_222;
		(L_224)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_225 = L_224;
		String_t* L_226 = V_2;
		(L_225)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_226);
		String_t* L_227;
		L_227 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_225, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_227, NULL);
	}

IL_0497:
	{
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_228 = ___1_fs;
		int64_t L_229;
		L_229 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_228);
		uint32_t L_230 = ___2_endofposition;
		if ((((int64_t)L_229) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_230)))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TiffWriter_packbits_decode_m61B4E75C11892AA13D00D4D660082E2A21077FDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, uint32_t ___1_w, uint32_t ___2_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 2;
		uint32_t L_1 = ___2_h;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2));
		goto IL_006e;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_data;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		uint8_t L_7 = V_3;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		uint8_t L_8 = V_3;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)127))))
		{
			goto IL_0043;
		}
	}
	{
		V_4 = 0;
		goto IL_0034;
	}

IL_0020:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_data;
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_11, 1)), L_12));
		uint8_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_9, L_14, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0034:
	{
		int32_t L_16 = V_4;
		uint8_t L_17 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_18 = V_2;
		uint8_t L_19 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, (int32_t)L_19)), 1))));
		goto IL_006e;
	}

IL_0043:
	{
		uint8_t L_20 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)256), (int32_t)L_20)), 1));
		V_6 = 0;
		goto IL_0064;
	}

IL_0053:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_data;
		int32_t L_23 = V_2;
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint8_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_21, L_25, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0064:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 2));
	}

IL_006e:
	{
		int32_t L_30 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_data;
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_32 = V_0;
		int32_t L_33;
		L_33 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_32, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		uint32_t L_34 = ___1_w;
		uint32_t L_35 = ___2_h;
		if ((((int64_t)((int64_t)L_33)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)L_35)))))))
		{
			goto IL_000e;
		}
	}

IL_0081:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_36, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TiffWriter_SwapEndian_m7397F77A5176ED84221AD080B2AD949E708683CD (uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		uint16_t L_1 = ___0_value;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_0>>8))|((int32_t)((int32_t)L_1<<8)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TiffWriter_SwapEndian_m23C35336984FA3532E5974B6752812712F21A7EA (uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		uint32_t L_1 = ___0_value;
		uint32_t L_2 = ___0_value;
		uint32_t L_3 = ___0_value;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)))|((int32_t)(((int32_t)((uint32_t)L_1>>8))&((int32_t)65280)))))|((int32_t)(((int32_t)((int32_t)L_2<<8))&((int32_t)16711680)))))|((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))&((int32_t)-16777216)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TiffWriter_GetTypeSize_m8A5644BD007A3455C05BCFF0F6A9C39F2B945807 (uint16_t ___0_type, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_type;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_003e;
			}
			case 4:
			{
				goto IL_0040;
			}
			case 5:
			{
				goto IL_003a;
			}
			case 6:
			{
				goto IL_003a;
			}
			case 7:
			{
				goto IL_003c;
			}
			case 8:
			{
				goto IL_003e;
			}
			case 9:
			{
				goto IL_0040;
			}
			case 10:
			{
				goto IL_003e;
			}
			case 11:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_003a:
	{
		return 1;
	}

IL_003c:
	{
		return 2;
	}

IL_003e:
	{
		return 4;
	}

IL_0040:
	{
		return 8;
	}

IL_0042:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TiffWriter_GetValue_m4EAB50BB4AD83A4A629A4F85556C4A2816FFE7C0 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_br, uint16_t ___1_type, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t L_0 = ___1_type;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_006d;
			}
			case 5:
			{
				goto IL_0086;
			}
			case 6:
			{
				goto IL_0092;
			}
			case 7:
			{
				goto IL_009e;
			}
			case 8:
			{
				goto IL_00aa;
			}
			case 9:
			{
				goto IL_00b6;
			}
			case 10:
			{
				goto IL_00cd;
			}
			case 11:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_00e5;
	}

IL_003d:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_br;
		uint8_t L_2;
		L_2 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_1);
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.byte_class, &L_3);
		return L_4;
	}

IL_0049:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_br;
		uint8_t L_6;
		L_6 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_5);
		Il2CppChar L_7 = ((Il2CppChar)L_6);
		RuntimeObject* L_8 = Box(il2cpp_defaults.char_class, &L_7);
		return L_8;
	}

IL_0055:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___0_br;
		uint16_t L_10;
		L_10 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_9);
		uint16_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.uint16_class, &L_11);
		return L_12;
	}

IL_0061:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_br;
		uint32_t L_14;
		L_14 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_13);
		uint32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.uint32_class, &L_15);
		return L_16;
	}

IL_006d:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_br;
		uint32_t L_18;
		L_18 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_17);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_br;
		uint32_t L_20;
		L_20 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_19);
		V_0 = L_20;
		uint32_t L_21 = V_0;
		double L_22 = ((double)(((double)((double)(uint32_t)L_18))/((double)((double)(uint32_t)L_21))));
		RuntimeObject* L_23 = Box(il2cpp_defaults.double_class, &L_22);
		return L_23;
	}

IL_0086:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___0_br;
		int8_t L_25;
		L_25 = VirtualFuncInvoker0< int8_t >::Invoke(12, L_24);
		int8_t L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_defaults.sbyte_class, &L_26);
		return L_27;
	}

IL_0092:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___0_br;
		uint8_t L_29;
		L_29 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_28);
		uint8_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_defaults.byte_class, &L_30);
		return L_31;
	}

IL_009e:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_32 = ___0_br;
		int16_t L_33;
		L_33 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_32);
		int16_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int16_class, &L_34);
		return L_35;
	}

IL_00aa:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = ___0_br;
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(il2cpp_defaults.int32_class, &L_38);
		return L_39;
	}

IL_00b6:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___0_br;
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_40);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_42 = ___0_br;
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_42);
		V_1 = L_43;
		int32_t L_44 = V_1;
		double L_45 = ((double)(((double)L_41)/((double)L_44)));
		RuntimeObject* L_46 = Box(il2cpp_defaults.double_class, &L_45);
		return L_46;
	}

IL_00cd:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_47 = ___0_br;
		float L_48;
		L_48 = VirtualFuncInvoker0< float >::Invoke(20, L_47);
		float L_49 = L_48;
		RuntimeObject* L_50 = Box(il2cpp_defaults.single_class, &L_49);
		return L_50;
	}

IL_00d9:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_51 = ___0_br;
		double L_52;
		L_52 = VirtualFuncInvoker0< double >::Invoke(21, L_51);
		double L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_defaults.double_class, &L_53);
		return L_54;
	}

IL_00e5:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiffWriter__ctor_mBE0FBE9967ABB0EC3AE604C18BE5BEE99F22F0B6 (TiffWriter_tAA92AAFC4466E05897F4AB46377B170002885A6F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation__ctor_m58701255AA83003A72453A587C04DC1A3F2DAAFA (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* ___0_mesh, RuntimeObject* ___1_predicates, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___petalx = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petalx), (void*)L_0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___petaly = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petaly), (void*)L_1);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___petalr = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petalr), (void*)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)500));
		__this->___wedges = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wedges), (void*)L_3);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)500));
		__this->___initialConvexPoly = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialConvexPoly), (void*)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)500));
		__this->___points_p = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_p), (void*)L_5);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)500));
		__this->___points_q = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_q), (void*)L_6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)500));
		__this->___points_r = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_r), (void*)L_7);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->___poly1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poly1), (void*)L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->___poly2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poly2), (void*)L_9);
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_10 = (DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076*)(DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076*)SZArrayNew(DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___polys = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___polys), (void*)L_10);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_11 = ___0_mesh;
		__this->___mesh = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh), (void*)L_11);
		RuntimeObject* L_12 = ___1_predicates;
		__this->___predicates = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicates), (void*)L_12);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_13 = ___0_mesh;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_14 = L_13->___behavior;
		__this->___behavior = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___behavior), (void*)L_14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* NewLocation_FindLocation_mF7EFBF8CA3FC744F8EAC136C26EDD79C45CFC9AC (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___0_org, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_dest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_apex, double* ___3_xi, double* ___4_eta, bool ___5_offcenter, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___6_badotri, const RuntimeMethod* method) 
{
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_0 = __this->___behavior;
		double L_1;
		L_1 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_0, NULL);
		if ((!(((double)L_1) == ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_2 = ___0_org;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_3 = ___1_dest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_4 = ___2_apex;
		double* L_5 = ___3_xi;
		double* L_6 = ___4_eta;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_7 = ___6_badotri;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_8;
		L_8 = NewLocation_FindNewLocationWithoutMaxAngle_m898A6D1CDA276894CA56B8F1511B3B4D422D1F46(__this, L_2, L_3, L_4, L_5, L_6, (bool)1, L_7, NULL);
		return L_8;
	}

IL_0027:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_9 = ___0_org;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_10 = ___1_dest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_11 = ___2_apex;
		double* L_12 = ___3_xi;
		double* L_13 = ___4_eta;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_14 = ___6_badotri;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_15;
		L_15 = NewLocation_FindNewLocation_mC02C161365C92FF946074C637AB6A4BAF772238A(__this, L_9, L_10, L_11, L_12, L_13, (bool)1, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* NewLocation_FindNewLocationWithoutMaxAngle_m898A6D1CDA276894CA56B8F1511B3B4D422D1F46 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___0_torg, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_tdest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_tapex, double* ___3_xi, double* ___4_eta, bool ___5_offcenter, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___6_badotri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_20 = NULL;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_21 = NULL;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_22 = NULL;
	int32_t V_23 = 0;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_24 = NULL;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_25 = NULL;
	int32_t V_26 = 0;
	double V_27 = 0.0;
	bool V_28 = false;
	double V_29 = 0.0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	double V_34 = 0.0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	double V_37 = 0.0;
	double V_38 = 0.0;
	double V_39 = 0.0;
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_40;
	memset((&V_40), 0, sizeof(V_40));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_41 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_42 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_43 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_44 = NULL;
	double V_45 = 0.0;
	double V_46 = 0.0;
	double V_47 = 0.0;
	double V_48 = 0.0;
	double V_49 = 0.0;
	double V_50 = 0.0;
	double V_51 = 0.0;
	double V_52 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_53 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_54 = NULL;
	double V_55 = 0.0;
	double V_56 = 0.0;
	double V_57 = 0.0;
	double V_58 = 0.0;
	double V_59 = 0.0;
	double V_60 = 0.0;
	int32_t V_61 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_62 = NULL;
	double V_63 = 0.0;
	double V_64 = 0.0;
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_65;
	memset((&V_65), 0, sizeof(V_65));
	double V_66 = 0.0;
	double V_67 = 0.0;
	double V_68 = 0.0;
	double V_69 = 0.0;
	double V_70 = 0.0;
	double V_71 = 0.0;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_72 = NULL;
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_0 = __this->___behavior;
		double L_1 = L_0->___offconstant;
		V_0 = L_1;
		V_15 = (0.0);
		V_16 = (0.0);
		V_17 = (0.0);
		V_18 = (0.0);
		V_19 = (0.0);
		V_23 = 0;
		V_26 = 0;
		il2cpp_codegen_initobj((&V_40), sizeof(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		V_41 = L_2;
		V_45 = (0.0);
		V_46 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_53 = L_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_54 = L_4;
		V_58 = (0.059999999999999998);
		V_59 = (1.0);
		V_60 = (1.0);
		V_61 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		V_62 = L_5;
		V_63 = (0.0);
		V_64 = (0.0);
		il2cpp_codegen_runtime_class_init_inline(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		int64_t L_6 = ((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CircumcenterCount;
		((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CircumcenterCount = ((int64_t)il2cpp_codegen_add(L_6, ((int64_t)1)));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_7 = ___1_tdest;
		double L_8 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_7)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_9 = ___0_torg;
		double L_10 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_9)->___x;
		V_1 = ((double)il2cpp_codegen_subtract(L_8, L_10));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_11 = ___1_tdest;
		double L_12 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_11)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_13 = ___0_torg;
		double L_14 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_13)->___y;
		V_2 = ((double)il2cpp_codegen_subtract(L_12, L_14));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_15 = ___2_tapex;
		double L_16 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_15)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_17 = ___0_torg;
		double L_18 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_17)->___x;
		V_3 = ((double)il2cpp_codegen_subtract(L_16, L_18));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_19 = ___2_tapex;
		double L_20 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_19)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_21 = ___0_torg;
		double L_22 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_21)->___y;
		V_4 = ((double)il2cpp_codegen_subtract(L_20, L_22));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_23 = ___2_tapex;
		double L_24 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_23)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_25 = ___1_tdest;
		double L_26 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_25)->___x;
		V_5 = ((double)il2cpp_codegen_subtract(L_24, L_26));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_27 = ___2_tapex;
		double L_28 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_27)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_29 = ___1_tdest;
		double L_30 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_29)->___y;
		V_6 = ((double)il2cpp_codegen_subtract(L_28, L_30));
		double L_31 = V_1;
		double L_32 = V_1;
		double L_33 = V_2;
		double L_34 = V_2;
		V_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_31, L_32)), ((double)il2cpp_codegen_multiply(L_33, L_34))));
		double L_35 = V_3;
		double L_36 = V_3;
		double L_37 = V_4;
		double L_38 = V_4;
		V_8 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_35, L_36)), ((double)il2cpp_codegen_multiply(L_37, L_38))));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_39 = ___1_tdest;
		double L_40 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_39)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_41 = ___2_tapex;
		double L_42 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_41)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_43 = ___1_tdest;
		double L_44 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_43)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_45 = ___2_tapex;
		double L_46 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_45)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_47 = ___1_tdest;
		double L_48 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_47)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_49 = ___2_tapex;
		double L_50 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_49)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_51 = ___1_tdest;
		double L_52 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_51)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_53 = ___2_tapex;
		double L_54 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_53)->___y;
		V_9 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_40, L_42)), ((double)il2cpp_codegen_subtract(L_44, L_46)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_48, L_50)), ((double)il2cpp_codegen_subtract(L_52, L_54))))));
		bool L_55;
		L_55 = Behavior_get_NoExact_mEBA7DA45F2E0FF4F0BA794D328C9C0E69A0DA119_inline(NULL);
		if (!L_55)
		{
			goto IL_018f;
		}
	}
	{
		double L_56 = V_1;
		double L_57 = V_4;
		double L_58 = V_3;
		double L_59 = V_2;
		V_10 = ((double)((0.5)/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_56, L_57)), ((double)il2cpp_codegen_multiply(L_58, L_59))))));
		goto IL_01b6;
	}

IL_018f:
	{
		RuntimeObject* L_60 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_61 = ___1_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_62 = ___2_tapex;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_63 = ___0_torg;
		double L_64;
		L_64 = InterfaceFuncInvoker3< double, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* >::Invoke(0, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_60, L_61, L_62, L_63);
		V_10 = ((double)((0.5)/L_64));
		il2cpp_codegen_runtime_class_init_inline(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		int64_t L_65 = ((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CounterClockwiseCount;
		((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CounterClockwiseCount = ((int64_t)il2cpp_codegen_subtract(L_65, ((int64_t)1)));
	}

IL_01b6:
	{
		double L_66 = V_4;
		double L_67 = V_7;
		double L_68 = V_2;
		double L_69 = V_8;
		double L_70 = V_10;
		V_11 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_66, L_67)), ((double)il2cpp_codegen_multiply(L_68, L_69)))), L_70));
		double L_71 = V_1;
		double L_72 = V_8;
		double L_73 = V_3;
		double L_74 = V_7;
		double L_75 = V_10;
		V_12 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_71, L_72)), ((double)il2cpp_codegen_multiply(L_73, L_74)))), L_75));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_76 = ___0_torg;
		double L_77 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_76)->___x;
		double L_78 = V_11;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_79 = ___0_torg;
		double L_80 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_79)->___y;
		double L_81 = V_12;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_82 = (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)il2cpp_codegen_object_new(Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		Point__ctor_m7B46E4C4BC125EA0D962A70708090A2AB1599A6B(L_82, ((double)il2cpp_codegen_add(L_77, L_78)), ((double)il2cpp_codegen_add(L_80, L_81)), NULL);
		V_24 = L_82;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_83 = ___6_badotri;
		V_65 = L_83;
		double L_84 = V_8;
		double L_85 = V_9;
		double L_86 = V_7;
		int32_t L_87;
		L_87 = NewLocation_LongestShortestEdge_mBE0DD54D7A05480723423515CDB36A130F6C7133(__this, L_84, L_85, L_86, NULL);
		V_23 = L_87;
		int32_t L_88 = V_23;
		if ((((int32_t)L_88) > ((int32_t)((int32_t)213))))
		{
			goto IL_0224;
		}
	}
	{
		int32_t L_89 = V_23;
		if ((((int32_t)L_89) == ((int32_t)((int32_t)123))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t L_90 = V_23;
		if ((((int32_t)L_90) == ((int32_t)((int32_t)132))))
		{
			goto IL_026b;
		}
	}
	{
		int32_t L_91 = V_23;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)213))))
		{
			goto IL_0289;
		}
	}
	{
		goto IL_02e4;
	}

IL_0224:
	{
		int32_t L_92 = V_23;
		if ((((int32_t)L_92) == ((int32_t)((int32_t)231))))
		{
			goto IL_02a8;
		}
	}
	{
		int32_t L_93 = V_23;
		if ((((int32_t)L_93) == ((int32_t)((int32_t)312))))
		{
			goto IL_02c7;
		}
	}
	{
		int32_t L_94 = V_23;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)321))))
		{
			goto IL_02e4;
		}
	}
	{
		goto IL_02e4;
	}

IL_024a:
	{
		double L_95 = V_3;
		V_15 = L_95;
		double L_96 = V_4;
		V_16 = L_96;
		double L_97 = V_8;
		V_17 = L_97;
		double L_98 = V_9;
		V_18 = L_98;
		double L_99 = V_7;
		V_19 = L_99;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_100 = ___1_tdest;
		V_20 = L_100;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_101 = ___0_torg;
		V_21 = L_101;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_102 = ___2_tapex;
		V_22 = L_102;
		goto IL_02ff;
	}

IL_026b:
	{
		double L_103 = V_3;
		V_15 = L_103;
		double L_104 = V_4;
		V_16 = L_104;
		double L_105 = V_8;
		V_17 = L_105;
		double L_106 = V_7;
		V_18 = L_106;
		double L_107 = V_9;
		V_19 = L_107;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_108 = ___1_tdest;
		V_20 = L_108;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_109 = ___2_tapex;
		V_21 = L_109;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_110 = ___0_torg;
		V_22 = L_110;
		goto IL_02ff;
	}

IL_0289:
	{
		double L_111 = V_5;
		V_15 = L_111;
		double L_112 = V_6;
		V_16 = L_112;
		double L_113 = V_9;
		V_17 = L_113;
		double L_114 = V_8;
		V_18 = L_114;
		double L_115 = V_7;
		V_19 = L_115;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_116 = ___0_torg;
		V_20 = L_116;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_117 = ___1_tdest;
		V_21 = L_117;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_118 = ___2_tapex;
		V_22 = L_118;
		goto IL_02ff;
	}

IL_02a8:
	{
		double L_119 = V_5;
		V_15 = L_119;
		double L_120 = V_6;
		V_16 = L_120;
		double L_121 = V_9;
		V_17 = L_121;
		double L_122 = V_7;
		V_18 = L_122;
		double L_123 = V_8;
		V_19 = L_123;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_124 = ___0_torg;
		V_20 = L_124;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_125 = ___2_tapex;
		V_21 = L_125;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_126 = ___1_tdest;
		V_22 = L_126;
		goto IL_02ff;
	}

IL_02c7:
	{
		double L_127 = V_1;
		V_15 = L_127;
		double L_128 = V_2;
		V_16 = L_128;
		double L_129 = V_7;
		V_17 = L_129;
		double L_130 = V_8;
		V_18 = L_130;
		double L_131 = V_9;
		V_19 = L_131;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_132 = ___2_tapex;
		V_20 = L_132;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_133 = ___1_tdest;
		V_21 = L_133;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_134 = ___0_torg;
		V_22 = L_134;
		goto IL_02ff;
	}

IL_02e4:
	{
		double L_135 = V_1;
		V_15 = L_135;
		double L_136 = V_2;
		V_16 = L_136;
		double L_137 = V_7;
		V_17 = L_137;
		double L_138 = V_9;
		V_18 = L_138;
		double L_139 = V_8;
		V_19 = L_139;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_140 = ___2_tapex;
		V_20 = L_140;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_141 = ___0_torg;
		V_21 = L_141;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_142 = ___1_tdest;
		V_22 = L_142;
	}

IL_02ff:
	{
		bool L_143 = ___5_offcenter;
		if (!L_143)
		{
			goto IL_042d;
		}
	}
	{
		double L_144 = V_0;
		if ((!(((double)L_144) > ((double)(0.0)))))
		{
			goto IL_042d;
		}
	}
	{
		int32_t L_145 = V_23;
		if ((((int32_t)L_145) == ((int32_t)((int32_t)213))))
		{
			goto IL_0327;
		}
	}
	{
		int32_t L_146 = V_23;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)231)))))
		{
			goto IL_0386;
		}
	}

IL_0327:
	{
		double L_147 = V_15;
		double L_148 = V_0;
		double L_149 = V_16;
		V_13 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.5), L_147)), ((double)il2cpp_codegen_multiply(L_148, L_149))));
		double L_150 = V_16;
		double L_151 = V_0;
		double L_152 = V_15;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_150)), ((double)il2cpp_codegen_multiply(L_151, L_152))));
		double L_153 = V_13;
		double L_154 = V_13;
		double L_155 = V_14;
		double L_156 = V_14;
		double L_157 = V_11;
		double L_158 = V_1;
		double L_159 = V_11;
		double L_160 = V_1;
		double L_161 = V_12;
		double L_162 = V_2;
		double L_163 = V_12;
		double L_164 = V_2;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_153, L_154)), ((double)il2cpp_codegen_multiply(L_155, L_156))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_157, L_158)), ((double)il2cpp_codegen_subtract(L_159, L_160)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_161, L_162)), ((double)il2cpp_codegen_subtract(L_163, L_164))))))))))
		{
			goto IL_037e;
		}
	}
	{
		double L_165 = V_1;
		double L_166 = V_13;
		V_11 = ((double)il2cpp_codegen_add(L_165, L_166));
		double L_167 = V_2;
		double L_168 = V_14;
		V_12 = ((double)il2cpp_codegen_add(L_167, L_168));
		goto IL_042d;
	}

IL_037e:
	{
		V_26 = 1;
		goto IL_042d;
	}

IL_0386:
	{
		int32_t L_169 = V_23;
		if ((((int32_t)L_169) == ((int32_t)((int32_t)123))))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_170 = V_23;
		if ((!(((uint32_t)L_170) == ((uint32_t)((int32_t)132)))))
		{
			goto IL_03e2;
		}
	}

IL_0395:
	{
		double L_171 = V_15;
		double L_172 = V_0;
		double L_173 = V_16;
		V_13 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_171)), ((double)il2cpp_codegen_multiply(L_172, L_173))));
		double L_174 = V_16;
		double L_175 = V_0;
		double L_176 = V_15;
		V_14 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.5), L_174)), ((double)il2cpp_codegen_multiply(L_175, L_176))));
		double L_177 = V_13;
		double L_178 = V_13;
		double L_179 = V_14;
		double L_180 = V_14;
		double L_181 = V_11;
		double L_182 = V_11;
		double L_183 = V_12;
		double L_184 = V_12;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_177, L_178)), ((double)il2cpp_codegen_multiply(L_179, L_180))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_181, L_182)), ((double)il2cpp_codegen_multiply(L_183, L_184))))))))
		{
			goto IL_03dd;
		}
	}
	{
		double L_185 = V_13;
		V_11 = L_185;
		double L_186 = V_14;
		V_12 = L_186;
		goto IL_042d;
	}

IL_03dd:
	{
		V_26 = 1;
		goto IL_042d;
	}

IL_03e2:
	{
		double L_187 = V_15;
		double L_188 = V_0;
		double L_189 = V_16;
		V_13 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.5), L_187)), ((double)il2cpp_codegen_multiply(L_188, L_189))));
		double L_190 = V_16;
		double L_191 = V_0;
		double L_192 = V_15;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_190)), ((double)il2cpp_codegen_multiply(L_191, L_192))));
		double L_193 = V_13;
		double L_194 = V_13;
		double L_195 = V_14;
		double L_196 = V_14;
		double L_197 = V_11;
		double L_198 = V_11;
		double L_199 = V_12;
		double L_200 = V_12;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_193, L_194)), ((double)il2cpp_codegen_multiply(L_195, L_196))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_197, L_198)), ((double)il2cpp_codegen_multiply(L_199, L_200))))))))
		{
			goto IL_042a;
		}
	}
	{
		double L_201 = V_13;
		V_11 = L_201;
		double L_202 = V_14;
		V_12 = L_202;
		goto IL_042d;
	}

IL_042a:
	{
		V_26 = 1;
	}

IL_042d:
	{
		int32_t L_203 = V_26;
		if ((!(((uint32_t)L_203) == ((uint32_t)1))))
		{
			goto IL_0ea9;
		}
	}
	{
		double L_204 = V_18;
		double L_205 = V_17;
		double L_206 = V_19;
		double L_207 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_208;
		L_208 = sqrt(L_207);
		double L_209 = V_17;
		double L_210;
		L_210 = sqrt(L_209);
		V_27 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_204, L_205)), L_206))/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_208)), L_210))));
		double L_211 = V_27;
		if ((!(((double)L_211) < ((double)(0.0)))))
		{
			goto IL_046b;
		}
	}
	{
		V_28 = (bool)1;
		goto IL_048f;
	}

IL_046b:
	{
		double L_212 = V_27;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_213;
		L_213 = fabs(((double)il2cpp_codegen_subtract(L_212, (0.0))));
		if ((!(((double)L_213) <= ((double)(1.0E-50)))))
		{
			goto IL_048c;
		}
	}
	{
		V_28 = (bool)1;
		goto IL_048f;
	}

IL_048c:
	{
		V_28 = (bool)0;
	}

IL_048f:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_214 = V_65;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_215 = ___0_torg;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_216 = ___1_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_217 = ___2_tapex;
		int32_t L_218;
		L_218 = NewLocation_DoSmoothing_mFCA29C04EA0714EA6D28A0342C5FC9D53F4207A8(__this, L_214, L_215, L_216, L_217, (&V_62), NULL);
		V_61 = L_218;
		int32_t L_219 = V_61;
		if ((((int32_t)L_219) <= ((int32_t)0)))
		{
			goto IL_053b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		int64_t L_220 = ((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___RelocationCount;
		((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___RelocationCount = ((int64_t)il2cpp_codegen_add(L_220, ((int64_t)1)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_221 = V_62;
		int32_t L_222 = 0;
		double L_223 = (L_221)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_222));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_224 = ___0_torg;
		double L_225 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_224)->___x;
		V_11 = ((double)il2cpp_codegen_subtract(L_223, L_225));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_226 = V_62;
		int32_t L_227 = 1;
		double L_228 = (L_226)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_227));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_229 = ___0_torg;
		double L_230 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_229)->___y;
		V_12 = ((double)il2cpp_codegen_subtract(L_228, L_230));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_231 = ___0_torg;
		double L_232 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_231)->___x;
		V_63 = L_232;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_233 = ___0_torg;
		double L_234 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_233)->___y;
		V_64 = L_234;
		int32_t L_235 = V_61;
		switch (((int32_t)il2cpp_codegen_subtract(L_235, 1)))
		{
			case 0:
			{
				goto IL_04f7;
			}
			case 1:
			{
				goto IL_0509;
			}
			case 2:
			{
				goto IL_0522;
			}
		}
	}
	{
		goto IL_0ea9;
	}

IL_04f7:
	{
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_236 = __this->___mesh;
		Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6(L_236, (&V_65), NULL);
		goto IL_0ea9;
	}

IL_0509:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Lnext_m194C8E337B2A1EF0934AE43B13874B372A7A6F26((&V_65), NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_237 = __this->___mesh;
		Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6(L_237, (&V_65), NULL);
		goto IL_0ea9;
	}

IL_0522:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Lprev_mD865D91B4578F5CCF7469B2151CCEEF88803EFF0((&V_65), NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_238 = __this->___mesh;
		Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6(L_238, (&V_65), NULL);
		goto IL_0ea9;
	}

IL_053b:
	{
		double L_239 = V_17;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_240;
		L_240 = sqrt(L_239);
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_241 = __this->___behavior;
		double L_242;
		L_242 = Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline(L_241, NULL);
		double L_243;
		L_243 = sin(((double)(((double)il2cpp_codegen_multiply(L_242, (3.1415926535897931)))/(180.0))));
		V_29 = ((double)(L_240/((double)il2cpp_codegen_multiply((2.0), L_243))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_244 = V_21;
		double L_245 = L_244->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_246 = V_22;
		double L_247 = L_246->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_248 = V_21;
		double L_249 = L_248->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_250 = V_22;
		double L_251 = L_250->___y;
		V_36 = ((double)(((double)il2cpp_codegen_add(L_249, L_251))/(2.0)));
		double L_252 = ((double)(((double)il2cpp_codegen_add(L_245, L_247))/(2.0)));
		double L_253 = V_29;
		double L_254 = V_29;
		double L_255 = V_17;
		double L_256;
		L_256 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_253, L_254)), ((double)(L_255/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_257 = V_21;
		double L_258 = L_257->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_259 = V_22;
		double L_260 = L_259->___y;
		double L_261 = V_17;
		double L_262;
		L_262 = sqrt(L_261);
		V_30 = ((double)il2cpp_codegen_add(L_252, ((double)(((double)il2cpp_codegen_multiply(L_256, ((double)il2cpp_codegen_subtract(L_258, L_260))))/L_262))));
		double L_263 = V_36;
		double L_264 = V_29;
		double L_265 = V_29;
		double L_266 = V_17;
		double L_267;
		L_267 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_264, L_265)), ((double)(L_266/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_268 = V_22;
		double L_269 = L_268->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_270 = V_21;
		double L_271 = L_270->___x;
		double L_272 = V_17;
		double L_273;
		L_273 = sqrt(L_272);
		V_31 = ((double)il2cpp_codegen_add(L_263, ((double)(((double)il2cpp_codegen_multiply(L_267, ((double)il2cpp_codegen_subtract(L_269, L_271))))/L_273))));
		double L_274 = V_29;
		double L_275 = V_29;
		double L_276 = V_17;
		double L_277;
		L_277 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_274, L_275)), ((double)(L_276/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_278 = V_21;
		double L_279 = L_278->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_280 = V_22;
		double L_281 = L_280->___y;
		double L_282 = V_17;
		double L_283;
		L_283 = sqrt(L_282);
		V_32 = ((double)il2cpp_codegen_subtract(L_252, ((double)(((double)il2cpp_codegen_multiply(L_277, ((double)il2cpp_codegen_subtract(L_279, L_281))))/L_283))));
		double L_284 = V_36;
		double L_285 = V_29;
		double L_286 = V_29;
		double L_287 = V_17;
		double L_288;
		L_288 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_285, L_286)), ((double)(L_287/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_289 = V_22;
		double L_290 = L_289->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_291 = V_21;
		double L_292 = L_291->___x;
		double L_293 = V_17;
		double L_294;
		L_294 = sqrt(L_293);
		V_33 = ((double)il2cpp_codegen_subtract(L_284, ((double)(((double)il2cpp_codegen_multiply(L_288, ((double)il2cpp_codegen_subtract(L_290, L_292))))/L_294))));
		double L_295 = V_30;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_296 = V_20;
		double L_297 = L_296->___x;
		double L_298 = V_30;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_299 = V_20;
		double L_300 = L_299->___x;
		double L_301 = V_31;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_302 = V_20;
		double L_303 = L_302->___y;
		double L_304 = V_31;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_305 = V_20;
		double L_306 = L_305->___y;
		V_37 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_301, L_303)), ((double)il2cpp_codegen_subtract(L_304, L_306))));
		double L_307 = V_32;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_308 = V_20;
		double L_309 = L_308->___x;
		double L_310 = V_32;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_311 = V_20;
		double L_312 = L_311->___x;
		V_38 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_307, L_309)), ((double)il2cpp_codegen_subtract(L_310, L_312))));
		double L_313 = V_33;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_314 = V_20;
		double L_315 = L_314->___y;
		double L_316 = V_33;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_317 = V_20;
		double L_318 = L_317->___y;
		V_39 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_313, L_315)), ((double)il2cpp_codegen_subtract(L_316, L_318))));
		double L_319 = V_37;
		double L_320 = V_38;
		double L_321 = V_39;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_295, L_297)), ((double)il2cpp_codegen_subtract(L_298, L_300)))), L_319))) <= ((double)((double)il2cpp_codegen_add(L_320, L_321))))))
		{
			goto IL_06e2;
		}
	}
	{
		double L_322 = V_30;
		V_34 = L_322;
		double L_323 = V_31;
		V_35 = L_323;
		goto IL_06ea;
	}

IL_06e2:
	{
		double L_324 = V_32;
		V_34 = L_324;
		double L_325 = V_33;
		V_35 = L_325;
	}

IL_06ea:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_326 = ___6_badotri;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_327 = V_21;
		double L_328 = L_327->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_329 = V_21;
		double L_330 = L_329->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_331 = V_20;
		double L_332 = L_331->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_333 = V_20;
		double L_334 = L_333->___y;
		bool L_335;
		L_335 = NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7(__this, L_326, L_328, L_330, L_332, L_334, (&V_41), (&V_40), NULL);
		double L_336 = V_11;
		V_66 = L_336;
		double L_337 = V_12;
		V_67 = L_337;
		if (L_335)
		{
			goto IL_0a6f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_338;
		L_338 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5((&V_40), NULL);
		V_42 = L_338;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_339;
		L_339 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12((&V_40), NULL);
		V_43 = L_339;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_340;
		L_340 = Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9((&V_40), NULL);
		V_44 = L_340;
		RuntimeObject* L_341 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_342 = V_42;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_343 = V_43;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_344 = V_44;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_345;
		L_345 = InterfaceFuncInvoker5< Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, double*, double* >::Invoke(2, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_341, L_342, L_343, L_344, (&V_45), (&V_46));
		V_25 = L_345;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_346 = V_21;
		double L_347 = L_346->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_348 = V_20;
		double L_349 = L_348->___y;
		V_47 = ((double)il2cpp_codegen_subtract(L_347, L_349));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_350 = V_20;
		double L_351 = L_350->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_352 = V_21;
		double L_353 = L_352->___x;
		V_48 = ((double)il2cpp_codegen_subtract(L_351, L_353));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_354 = V_24;
		double L_355 = L_354->___x;
		double L_356 = V_47;
		V_47 = ((double)il2cpp_codegen_add(L_355, L_356));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_357 = V_24;
		double L_358 = L_357->___y;
		double L_359 = V_48;
		V_48 = ((double)il2cpp_codegen_add(L_358, L_359));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_360 = V_24;
		double L_361 = L_360->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_362 = V_24;
		double L_363 = L_362->___y;
		double L_364 = V_47;
		double L_365 = V_48;
		double L_366 = V_34;
		double L_367 = V_35;
		double L_368 = V_29;
		NewLocation_CircleLineIntersection_mEF2D3A76F8FCC1B615DE86D0A679882E41ECB688(__this, L_361, L_363, L_364, L_365, L_366, L_367, L_368, (&V_53), NULL);
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_369 = V_21;
		double L_370 = L_369->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_371 = V_20;
		double L_372 = L_371->___x;
		V_49 = ((double)(((double)il2cpp_codegen_add(L_370, L_372))/(2.0)));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_373 = V_21;
		double L_374 = L_373->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_375 = V_20;
		double L_376 = L_375->___y;
		V_50 = ((double)(((double)il2cpp_codegen_add(L_374, L_376))/(2.0)));
		double L_377 = V_49;
		double L_378 = V_50;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_379 = V_53;
		int32_t L_380 = 3;
		double L_381 = (L_379)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_380));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_382 = V_53;
		int32_t L_383 = 4;
		double L_384 = (L_382)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_383));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_385 = V_24;
		double L_386 = L_385->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_387 = V_24;
		double L_388 = L_387->___y;
		bool L_389 = V_28;
		bool L_390;
		L_390 = NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627(__this, L_377, L_378, L_381, L_384, L_386, L_388, L_389, NULL);
		if (!L_390)
		{
			goto IL_0813;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_391 = V_53;
		int32_t L_392 = 3;
		double L_393 = (L_391)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_392));
		V_51 = L_393;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_394 = V_53;
		int32_t L_395 = 4;
		double L_396 = (L_394)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_395));
		V_52 = L_396;
		goto IL_081f;
	}

IL_0813:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_397 = V_53;
		int32_t L_398 = 1;
		double L_399 = (L_397)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_398));
		V_51 = L_399;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_400 = V_53;
		int32_t L_401 = 2;
		double L_402 = (L_400)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_401));
		V_52 = L_402;
	}

IL_081f:
	{
		double L_403 = V_51;
		double L_404 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_405 = V_24;
		double L_406 = L_405->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_407 = V_24;
		double L_408 = L_407->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_409 = V_25;
		double L_410 = L_409->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_411 = V_25;
		double L_412 = L_411->___y;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_403, L_404, L_406, L_408, L_410, L_412, (&V_54), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_413 = V_53;
		int32_t L_414 = 0;
		double L_415 = (L_413)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_414));
		if ((!(((double)L_415) > ((double)(0.0)))))
		{
			goto IL_0a6f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_416 = V_54;
		int32_t L_417 = 0;
		double L_418 = (L_416)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_417));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_419;
		L_419 = fabs(((double)il2cpp_codegen_subtract(L_418, (1.0))));
		if ((!(((double)L_419) <= ((double)(1.0E-50)))))
		{
			goto IL_08d5;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_420 = V_21;
		double L_421 = L_420->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_422 = V_21;
		double L_423 = L_422->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_424 = V_22;
		double L_425 = L_424->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_426 = V_22;
		double L_427 = L_426->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_428 = V_25;
		double L_429 = L_428->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_430 = V_25;
		double L_431 = L_430->___y;
		bool L_432;
		L_432 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_421, L_423, L_425, L_427, L_429, L_431, NULL);
		if (!L_432)
		{
			goto IL_08b6;
		}
	}
	{
		double L_433 = V_11;
		V_66 = L_433;
		double L_434 = V_12;
		V_67 = L_434;
		goto IL_09dc;
	}

IL_08b6:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_435 = V_54;
		int32_t L_436 = 2;
		double L_437 = (L_435)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_436));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_438 = ___0_torg;
		double L_439 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_438)->___x;
		V_66 = ((double)il2cpp_codegen_subtract(L_437, L_439));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_440 = V_54;
		int32_t L_441 = 3;
		double L_442 = (L_440)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_441));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_443 = ___0_torg;
		double L_444 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_443)->___y;
		V_67 = ((double)il2cpp_codegen_subtract(L_442, L_444));
		goto IL_09dc;
	}

IL_08d5:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_445 = V_22;
		double L_446 = L_445->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_447 = V_22;
		double L_448 = L_447->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_449 = V_21;
		double L_450 = L_449->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_451 = V_21;
		double L_452 = L_451->___y;
		double L_453 = V_51;
		double L_454 = V_52;
		bool L_455;
		L_455 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_446, L_448, L_450, L_452, L_453, L_454, NULL);
		if (!L_455)
		{
			goto IL_09c6;
		}
	}
	{
		double L_456 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_457 = V_24;
		double L_458 = L_457->___x;
		double L_459 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_460 = V_24;
		double L_461 = L_460->___x;
		double L_462 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_463 = V_24;
		double L_464 = L_463->___y;
		double L_465 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_466 = V_24;
		double L_467 = L_466->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_468;
		L_468 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_456, L_458)), ((double)il2cpp_codegen_subtract(L_459, L_461)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_462, L_464)), ((double)il2cpp_codegen_subtract(L_465, L_467)))))));
		V_57 = L_468;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_469 = V_24;
		double L_470 = L_469->___x;
		double L_471 = V_51;
		V_55 = ((double)il2cpp_codegen_subtract(L_470, L_471));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_472 = V_24;
		double L_473 = L_472->___y;
		double L_474 = V_52;
		V_56 = ((double)il2cpp_codegen_subtract(L_473, L_474));
		double L_475 = V_55;
		double L_476 = V_57;
		V_55 = ((double)(L_475/L_476));
		double L_477 = V_56;
		double L_478 = V_57;
		V_56 = ((double)(L_477/L_478));
		double L_479 = V_51;
		double L_480 = V_55;
		double L_481 = V_58;
		double L_482 = V_17;
		double L_483;
		L_483 = sqrt(L_482);
		V_51 = ((double)il2cpp_codegen_add(L_479, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_480, L_481)), L_483))));
		double L_484 = V_52;
		double L_485 = V_56;
		double L_486 = V_58;
		double L_487 = V_17;
		double L_488;
		L_488 = sqrt(L_487);
		V_52 = ((double)il2cpp_codegen_add(L_484, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_485, L_486)), L_488))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_489 = V_21;
		double L_490 = L_489->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_491 = V_21;
		double L_492 = L_491->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_493 = V_22;
		double L_494 = L_493->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_495 = V_22;
		double L_496 = L_495->___y;
		double L_497 = V_51;
		double L_498 = V_52;
		bool L_499;
		L_499 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_490, L_492, L_494, L_496, L_497, L_498, NULL);
		if (!L_499)
		{
			goto IL_09ae;
		}
	}
	{
		double L_500 = V_11;
		V_66 = L_500;
		double L_501 = V_12;
		V_67 = L_501;
		goto IL_09dc;
	}

IL_09ae:
	{
		double L_502 = V_51;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_503 = ___0_torg;
		double L_504 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_503)->___x;
		V_66 = ((double)il2cpp_codegen_subtract(L_502, L_504));
		double L_505 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_506 = ___0_torg;
		double L_507 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_506)->___y;
		V_67 = ((double)il2cpp_codegen_subtract(L_505, L_507));
		goto IL_09dc;
	}

IL_09c6:
	{
		double L_508 = V_51;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_509 = ___0_torg;
		double L_510 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_509)->___x;
		V_66 = ((double)il2cpp_codegen_subtract(L_508, L_510));
		double L_511 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_512 = ___0_torg;
		double L_513 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_512)->___y;
		V_67 = ((double)il2cpp_codegen_subtract(L_511, L_513));
	}

IL_09dc:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_514 = V_20;
		double L_515 = L_514->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_516 = V_24;
		double L_517 = L_516->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_518 = V_20;
		double L_519 = L_518->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_520 = V_24;
		double L_521 = L_520->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_522 = V_20;
		double L_523 = L_522->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_524 = V_24;
		double L_525 = L_524->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_526 = V_20;
		double L_527 = L_526->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_528 = V_24;
		double L_529 = L_528->___y;
		double L_530 = V_59;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_531 = V_20;
		double L_532 = L_531->___x;
		double L_533 = V_66;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_534 = ___0_torg;
		double L_535 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_534)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_536 = V_20;
		double L_537 = L_536->___x;
		double L_538 = V_66;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_539 = ___0_torg;
		double L_540 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_539)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_541 = V_20;
		double L_542 = L_541->___y;
		double L_543 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_544 = ___0_torg;
		double L_545 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_544)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_546 = V_20;
		double L_547 = L_546->___y;
		double L_548 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_549 = ___0_torg;
		double L_550 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_549)->___y;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_515, L_517)), ((double)il2cpp_codegen_subtract(L_519, L_521)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_523, L_525)), ((double)il2cpp_codegen_subtract(L_527, L_529))))))) > ((double)((double)il2cpp_codegen_multiply(L_530, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_532, ((double)il2cpp_codegen_add(L_533, L_535)))), ((double)il2cpp_codegen_subtract(L_537, ((double)il2cpp_codegen_add(L_538, L_540)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_542, ((double)il2cpp_codegen_add(L_543, L_545)))), ((double)il2cpp_codegen_subtract(L_547, ((double)il2cpp_codegen_add(L_548, L_550))))))))))))))
		{
			goto IL_0a6f;
		}
	}
	{
		double L_551 = V_11;
		V_66 = L_551;
		double L_552 = V_12;
		V_67 = L_552;
	}

IL_0a6f:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_553 = ___6_badotri;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_554 = V_22;
		double L_555 = L_554->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_556 = V_22;
		double L_557 = L_556->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_558 = V_20;
		double L_559 = L_558->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_560 = V_20;
		double L_561 = L_560->___y;
		bool L_562;
		L_562 = NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7(__this, L_553, L_555, L_557, L_559, L_561, (&V_41), (&V_40), NULL);
		double L_563 = V_11;
		V_68 = L_563;
		double L_564 = V_12;
		V_69 = L_564;
		if (L_562)
		{
			goto IL_0df3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_565;
		L_565 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5((&V_40), NULL);
		V_42 = L_565;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_566;
		L_566 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12((&V_40), NULL);
		V_43 = L_566;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_567;
		L_567 = Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9((&V_40), NULL);
		V_44 = L_567;
		RuntimeObject* L_568 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_569 = V_42;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_570 = V_43;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_571 = V_44;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_572;
		L_572 = InterfaceFuncInvoker5< Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, double*, double* >::Invoke(2, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_568, L_569, L_570, L_571, (&V_45), (&V_46));
		V_25 = L_572;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_573 = V_22;
		double L_574 = L_573->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_575 = V_20;
		double L_576 = L_575->___y;
		V_47 = ((double)il2cpp_codegen_subtract(L_574, L_576));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_577 = V_20;
		double L_578 = L_577->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_579 = V_22;
		double L_580 = L_579->___x;
		V_48 = ((double)il2cpp_codegen_subtract(L_578, L_580));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_581 = V_24;
		double L_582 = L_581->___x;
		double L_583 = V_47;
		V_47 = ((double)il2cpp_codegen_add(L_582, L_583));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_584 = V_24;
		double L_585 = L_584->___y;
		double L_586 = V_48;
		V_48 = ((double)il2cpp_codegen_add(L_585, L_586));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_587 = V_24;
		double L_588 = L_587->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_589 = V_24;
		double L_590 = L_589->___y;
		double L_591 = V_47;
		double L_592 = V_48;
		double L_593 = V_34;
		double L_594 = V_35;
		double L_595 = V_29;
		NewLocation_CircleLineIntersection_mEF2D3A76F8FCC1B615DE86D0A679882E41ECB688(__this, L_588, L_590, L_591, L_592, L_593, L_594, L_595, (&V_53), NULL);
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_596 = V_22;
		double L_597 = L_596->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_598 = V_20;
		double L_599 = L_598->___x;
		V_70 = ((double)(((double)il2cpp_codegen_add(L_597, L_599))/(2.0)));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_600 = V_22;
		double L_601 = L_600->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_602 = V_20;
		double L_603 = L_602->___y;
		V_71 = ((double)(((double)il2cpp_codegen_add(L_601, L_603))/(2.0)));
		double L_604 = V_70;
		double L_605 = V_71;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_606 = V_53;
		int32_t L_607 = 3;
		double L_608 = (L_606)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_607));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_609 = V_53;
		int32_t L_610 = 4;
		double L_611 = (L_609)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_610));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_612 = V_24;
		double L_613 = L_612->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_614 = V_24;
		double L_615 = L_614->___y;
		bool L_616;
		L_616 = NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627(__this, L_604, L_605, L_608, L_611, L_613, L_615, (bool)0, NULL);
		if (!L_616)
		{
			goto IL_0b97;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_617 = V_53;
		int32_t L_618 = 3;
		double L_619 = (L_617)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_618));
		V_51 = L_619;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_620 = V_53;
		int32_t L_621 = 4;
		double L_622 = (L_620)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_621));
		V_52 = L_622;
		goto IL_0ba3;
	}

IL_0b97:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_623 = V_53;
		int32_t L_624 = 1;
		double L_625 = (L_623)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_624));
		V_51 = L_625;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_626 = V_53;
		int32_t L_627 = 2;
		double L_628 = (L_626)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_627));
		V_52 = L_628;
	}

IL_0ba3:
	{
		double L_629 = V_51;
		double L_630 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_631 = V_24;
		double L_632 = L_631->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_633 = V_24;
		double L_634 = L_633->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_635 = V_25;
		double L_636 = L_635->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_637 = V_25;
		double L_638 = L_637->___y;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_629, L_630, L_632, L_634, L_636, L_638, (&V_54), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_639 = V_53;
		int32_t L_640 = 0;
		double L_641 = (L_639)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_640));
		if ((!(((double)L_641) > ((double)(0.0)))))
		{
			goto IL_0df3;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_642 = V_54;
		int32_t L_643 = 0;
		double L_644 = (L_642)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_643));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_645;
		L_645 = fabs(((double)il2cpp_codegen_subtract(L_644, (1.0))));
		if ((!(((double)L_645) <= ((double)(1.0E-50)))))
		{
			goto IL_0c59;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_646 = V_21;
		double L_647 = L_646->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_648 = V_21;
		double L_649 = L_648->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_650 = V_22;
		double L_651 = L_650->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_652 = V_22;
		double L_653 = L_652->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_654 = V_25;
		double L_655 = L_654->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_656 = V_25;
		double L_657 = L_656->___y;
		bool L_658;
		L_658 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_647, L_649, L_651, L_653, L_655, L_657, NULL);
		if (!L_658)
		{
			goto IL_0c3a;
		}
	}
	{
		double L_659 = V_11;
		V_68 = L_659;
		double L_660 = V_12;
		V_69 = L_660;
		goto IL_0d60;
	}

IL_0c3a:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_661 = V_54;
		int32_t L_662 = 2;
		double L_663 = (L_661)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_662));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_664 = ___0_torg;
		double L_665 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_664)->___x;
		V_68 = ((double)il2cpp_codegen_subtract(L_663, L_665));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_666 = V_54;
		int32_t L_667 = 3;
		double L_668 = (L_666)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_667));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_669 = ___0_torg;
		double L_670 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_669)->___y;
		V_69 = ((double)il2cpp_codegen_subtract(L_668, L_670));
		goto IL_0d60;
	}

IL_0c59:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_671 = V_21;
		double L_672 = L_671->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_673 = V_21;
		double L_674 = L_673->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_675 = V_22;
		double L_676 = L_675->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_677 = V_22;
		double L_678 = L_677->___y;
		double L_679 = V_51;
		double L_680 = V_52;
		bool L_681;
		L_681 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_672, L_674, L_676, L_678, L_679, L_680, NULL);
		if (!L_681)
		{
			goto IL_0d4a;
		}
	}
	{
		double L_682 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_683 = V_24;
		double L_684 = L_683->___x;
		double L_685 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_686 = V_24;
		double L_687 = L_686->___x;
		double L_688 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_689 = V_24;
		double L_690 = L_689->___y;
		double L_691 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_692 = V_24;
		double L_693 = L_692->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_694;
		L_694 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_682, L_684)), ((double)il2cpp_codegen_subtract(L_685, L_687)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_688, L_690)), ((double)il2cpp_codegen_subtract(L_691, L_693)))))));
		V_57 = L_694;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_695 = V_24;
		double L_696 = L_695->___x;
		double L_697 = V_51;
		V_55 = ((double)il2cpp_codegen_subtract(L_696, L_697));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_698 = V_24;
		double L_699 = L_698->___y;
		double L_700 = V_52;
		V_56 = ((double)il2cpp_codegen_subtract(L_699, L_700));
		double L_701 = V_55;
		double L_702 = V_57;
		V_55 = ((double)(L_701/L_702));
		double L_703 = V_56;
		double L_704 = V_57;
		V_56 = ((double)(L_703/L_704));
		double L_705 = V_51;
		double L_706 = V_55;
		double L_707 = V_58;
		double L_708 = V_17;
		double L_709;
		L_709 = sqrt(L_708);
		V_51 = ((double)il2cpp_codegen_add(L_705, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_706, L_707)), L_709))));
		double L_710 = V_52;
		double L_711 = V_56;
		double L_712 = V_58;
		double L_713 = V_17;
		double L_714;
		L_714 = sqrt(L_713);
		V_52 = ((double)il2cpp_codegen_add(L_710, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_711, L_712)), L_714))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_715 = V_21;
		double L_716 = L_715->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_717 = V_21;
		double L_718 = L_717->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_719 = V_22;
		double L_720 = L_719->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_721 = V_22;
		double L_722 = L_721->___y;
		double L_723 = V_51;
		double L_724 = V_52;
		bool L_725;
		L_725 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_716, L_718, L_720, L_722, L_723, L_724, NULL);
		if (!L_725)
		{
			goto IL_0d32;
		}
	}
	{
		double L_726 = V_11;
		V_68 = L_726;
		double L_727 = V_12;
		V_69 = L_727;
		goto IL_0d60;
	}

IL_0d32:
	{
		double L_728 = V_51;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_729 = ___0_torg;
		double L_730 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_729)->___x;
		V_68 = ((double)il2cpp_codegen_subtract(L_728, L_730));
		double L_731 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_732 = ___0_torg;
		double L_733 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_732)->___y;
		V_69 = ((double)il2cpp_codegen_subtract(L_731, L_733));
		goto IL_0d60;
	}

IL_0d4a:
	{
		double L_734 = V_51;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_735 = ___0_torg;
		double L_736 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_735)->___x;
		V_68 = ((double)il2cpp_codegen_subtract(L_734, L_736));
		double L_737 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_738 = ___0_torg;
		double L_739 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_738)->___y;
		V_69 = ((double)il2cpp_codegen_subtract(L_737, L_739));
	}

IL_0d60:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_740 = V_20;
		double L_741 = L_740->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_742 = V_24;
		double L_743 = L_742->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_744 = V_20;
		double L_745 = L_744->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_746 = V_24;
		double L_747 = L_746->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_748 = V_20;
		double L_749 = L_748->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_750 = V_24;
		double L_751 = L_750->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_752 = V_20;
		double L_753 = L_752->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_754 = V_24;
		double L_755 = L_754->___y;
		double L_756 = V_59;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_757 = V_20;
		double L_758 = L_757->___x;
		double L_759 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_760 = ___0_torg;
		double L_761 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_760)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_762 = V_20;
		double L_763 = L_762->___x;
		double L_764 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_765 = ___0_torg;
		double L_766 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_765)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_767 = V_20;
		double L_768 = L_767->___y;
		double L_769 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_770 = ___0_torg;
		double L_771 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_770)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_772 = V_20;
		double L_773 = L_772->___y;
		double L_774 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_775 = ___0_torg;
		double L_776 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_775)->___y;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_741, L_743)), ((double)il2cpp_codegen_subtract(L_745, L_747)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_749, L_751)), ((double)il2cpp_codegen_subtract(L_753, L_755))))))) > ((double)((double)il2cpp_codegen_multiply(L_756, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_758, ((double)il2cpp_codegen_add(L_759, L_761)))), ((double)il2cpp_codegen_subtract(L_763, ((double)il2cpp_codegen_add(L_764, L_766)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_768, ((double)il2cpp_codegen_add(L_769, L_771)))), ((double)il2cpp_codegen_subtract(L_773, ((double)il2cpp_codegen_add(L_774, L_776))))))))))))))
		{
			goto IL_0df3;
		}
	}
	{
		double L_777 = V_11;
		V_68 = L_777;
		double L_778 = V_12;
		V_69 = L_778;
	}

IL_0df3:
	{
		bool L_779 = V_28;
		if (!L_779)
		{
			goto IL_0e04;
		}
	}
	{
		double L_780 = V_66;
		V_11 = L_780;
		double L_781 = V_67;
		V_12 = L_781;
		goto IL_0ea9;
	}

IL_0e04:
	{
		double L_782 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_783 = V_20;
		double L_784 = L_783->___x;
		double L_785 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_786 = ___0_torg;
		double L_787 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_786)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_788 = V_20;
		double L_789 = L_788->___x;
		double L_790 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_791 = ___0_torg;
		double L_792 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_791)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_793 = V_20;
		double L_794 = L_793->___y;
		double L_795 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_796 = ___0_torg;
		double L_797 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_796)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_798 = V_20;
		double L_799 = L_798->___y;
		double L_800 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_801 = ___0_torg;
		double L_802 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_801)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_803 = V_20;
		double L_804 = L_803->___x;
		double L_805 = V_66;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_806 = ___0_torg;
		double L_807 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_806)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_808 = V_20;
		double L_809 = L_808->___x;
		double L_810 = V_66;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_811 = ___0_torg;
		double L_812 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_811)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_813 = V_20;
		double L_814 = L_813->___y;
		double L_815 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_816 = ___0_torg;
		double L_817 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_816)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_818 = V_20;
		double L_819 = L_818->___y;
		double L_820 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_821 = ___0_torg;
		double L_822 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_821)->___y;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_782, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_784, ((double)il2cpp_codegen_add(L_785, L_787)))), ((double)il2cpp_codegen_subtract(L_789, ((double)il2cpp_codegen_add(L_790, L_792)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_794, ((double)il2cpp_codegen_add(L_795, L_797)))), ((double)il2cpp_codegen_subtract(L_799, ((double)il2cpp_codegen_add(L_800, L_802))))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_804, ((double)il2cpp_codegen_add(L_805, L_807)))), ((double)il2cpp_codegen_subtract(L_809, ((double)il2cpp_codegen_add(L_810, L_812)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_814, ((double)il2cpp_codegen_add(L_815, L_817)))), ((double)il2cpp_codegen_subtract(L_819, ((double)il2cpp_codegen_add(L_820, L_822))))))))))))
		{
			goto IL_0ea1;
		}
	}
	{
		double L_823 = V_68;
		V_11 = L_823;
		double L_824 = V_69;
		V_12 = L_824;
		goto IL_0ea9;
	}

IL_0ea1:
	{
		double L_825 = V_66;
		V_11 = L_825;
		double L_826 = V_67;
		V_12 = L_826;
	}

IL_0ea9:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_827 = (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)il2cpp_codegen_object_new(Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		Point__ctor_m2891563D3FADB4CC62ADD7C6E28B20F69E7F9656(L_827, NULL);
		V_72 = L_827;
		int32_t L_828 = V_61;
		if ((((int32_t)L_828) > ((int32_t)0)))
		{
			goto IL_0ed7;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_829 = V_72;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_830 = ___0_torg;
		double L_831 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_830)->___x;
		double L_832 = V_11;
		L_829->___x = ((double)il2cpp_codegen_add(L_831, L_832));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_833 = V_72;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_834 = ___0_torg;
		double L_835 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_834)->___y;
		double L_836 = V_12;
		L_833->___y = ((double)il2cpp_codegen_add(L_835, L_836));
		goto IL_0eef;
	}

IL_0ed7:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_837 = V_72;
		double L_838 = V_63;
		double L_839 = V_11;
		L_837->___x = ((double)il2cpp_codegen_add(L_838, L_839));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_840 = V_72;
		double L_841 = V_64;
		double L_842 = V_12;
		L_840->___y = ((double)il2cpp_codegen_add(L_841, L_842));
	}

IL_0eef:
	{
		double* L_843 = ___3_xi;
		double L_844 = V_4;
		double L_845 = V_11;
		double L_846 = V_3;
		double L_847 = V_12;
		double L_848 = V_10;
		*((double*)L_843) = (double)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_844, L_845)), ((double)il2cpp_codegen_multiply(L_846, L_847)))), ((double)il2cpp_codegen_multiply((2.0), L_848))));
		double* L_849 = ___4_eta;
		double L_850 = V_1;
		double L_851 = V_12;
		double L_852 = V_2;
		double L_853 = V_11;
		double L_854 = V_10;
		*((double*)L_849) = (double)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_850, L_851)), ((double)il2cpp_codegen_multiply(L_852, L_853)))), ((double)il2cpp_codegen_multiply((2.0), L_854))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_855 = V_72;
		return L_855;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* NewLocation_FindNewLocation_mC02C161365C92FF946074C637AB6A4BAF772238A (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___0_torg, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_tdest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_tapex, double* ___3_xi, double* ___4_eta, bool ___5_offcenter, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___6_badotri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_20 = NULL;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_21 = NULL;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_22 = NULL;
	int32_t V_23 = 0;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_24 = NULL;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_25 = NULL;
	int32_t V_26 = 0;
	double V_27 = 0.0;
	bool V_28 = false;
	double V_29 = 0.0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	double V_34 = 0.0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	double V_37 = 0.0;
	double V_38 = 0.0;
	double V_39 = 0.0;
	double V_40 = 0.0;
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_41;
	memset((&V_41), 0, sizeof(V_41));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_42 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_43 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_44 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_45 = NULL;
	double V_46 = 0.0;
	double V_47 = 0.0;
	double V_48 = 0.0;
	double V_49 = 0.0;
	double V_50 = 0.0;
	double V_51 = 0.0;
	double V_52 = 0.0;
	double V_53 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_54 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_55 = NULL;
	double V_56 = 0.0;
	double V_57 = 0.0;
	double V_58 = 0.0;
	double V_59 = 0.0;
	double V_60 = 0.0;
	double V_61 = 0.0;
	int32_t V_62 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_63 = NULL;
	double V_64 = 0.0;
	double V_65 = 0.0;
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_66;
	memset((&V_66), 0, sizeof(V_66));
	double V_67 = 0.0;
	double V_68 = 0.0;
	double V_69 = 0.0;
	double V_70 = 0.0;
	double V_71 = 0.0;
	double V_72 = 0.0;
	double V_73 = 0.0;
	double V_74 = 0.0;
	double V_75 = 0.0;
	double V_76 = 0.0;
	double V_77 = 0.0;
	double V_78 = 0.0;
	double V_79 = 0.0;
	double V_80 = 0.0;
	double V_81 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_82 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_83 = NULL;
	double V_84 = 0.0;
	double V_85 = 0.0;
	double V_86 = 0.0;
	double V_87 = 0.0;
	double V_88 = 0.0;
	double V_89 = 0.0;
	double V_90 = 0.0;
	double V_91 = 0.0;
	double V_92 = 0.0;
	double V_93 = 0.0;
	double V_94 = 0.0;
	bool V_95 = false;
	bool V_96 = false;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_97 = NULL;
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_0 = __this->___behavior;
		double L_1 = L_0->___offconstant;
		V_0 = L_1;
		V_15 = (0.0);
		V_16 = (0.0);
		V_17 = (0.0);
		V_18 = (0.0);
		V_19 = (0.0);
		V_23 = 0;
		V_26 = 0;
		il2cpp_codegen_initobj((&V_41), sizeof(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		V_42 = L_2;
		V_46 = (0.0);
		V_47 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_54 = L_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_55 = L_4;
		V_59 = (0.059999999999999998);
		V_60 = (1.0);
		V_61 = (1.0);
		V_62 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		V_63 = L_5;
		V_64 = (0.0);
		V_65 = (0.0);
		V_78 = (0.0);
		V_79 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_82 = L_6;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_83 = L_7;
		il2cpp_codegen_runtime_class_init_inline(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		int64_t L_8 = ((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CircumcenterCount;
		((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CircumcenterCount = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)1)));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_9 = ___1_tdest;
		double L_10 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_9)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_11 = ___0_torg;
		double L_12 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_11)->___x;
		V_1 = ((double)il2cpp_codegen_subtract(L_10, L_12));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_13 = ___1_tdest;
		double L_14 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_13)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_15 = ___0_torg;
		double L_16 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_15)->___y;
		V_2 = ((double)il2cpp_codegen_subtract(L_14, L_16));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_17 = ___2_tapex;
		double L_18 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_17)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_19 = ___0_torg;
		double L_20 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_19)->___x;
		V_3 = ((double)il2cpp_codegen_subtract(L_18, L_20));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_21 = ___2_tapex;
		double L_22 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_21)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_23 = ___0_torg;
		double L_24 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_23)->___y;
		V_4 = ((double)il2cpp_codegen_subtract(L_22, L_24));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_25 = ___2_tapex;
		double L_26 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_25)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_27 = ___1_tdest;
		double L_28 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_27)->___x;
		V_5 = ((double)il2cpp_codegen_subtract(L_26, L_28));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_29 = ___2_tapex;
		double L_30 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_29)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_31 = ___1_tdest;
		double L_32 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_31)->___y;
		V_6 = ((double)il2cpp_codegen_subtract(L_30, L_32));
		double L_33 = V_1;
		double L_34 = V_1;
		double L_35 = V_2;
		double L_36 = V_2;
		V_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_33, L_34)), ((double)il2cpp_codegen_multiply(L_35, L_36))));
		double L_37 = V_3;
		double L_38 = V_3;
		double L_39 = V_4;
		double L_40 = V_4;
		V_8 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_37, L_38)), ((double)il2cpp_codegen_multiply(L_39, L_40))));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_41 = ___1_tdest;
		double L_42 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_41)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_43 = ___2_tapex;
		double L_44 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_43)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_45 = ___1_tdest;
		double L_46 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_45)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_47 = ___2_tapex;
		double L_48 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_47)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_49 = ___1_tdest;
		double L_50 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_49)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_51 = ___2_tapex;
		double L_52 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_51)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_53 = ___1_tdest;
		double L_54 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_53)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_55 = ___2_tapex;
		double L_56 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_55)->___y;
		V_9 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_42, L_44)), ((double)il2cpp_codegen_subtract(L_46, L_48)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_50, L_52)), ((double)il2cpp_codegen_subtract(L_54, L_56))))));
		bool L_57;
		L_57 = Behavior_get_NoExact_mEBA7DA45F2E0FF4F0BA794D328C9C0E69A0DA119_inline(NULL);
		if (!L_57)
		{
			goto IL_01b5;
		}
	}
	{
		double L_58 = V_1;
		double L_59 = V_4;
		double L_60 = V_3;
		double L_61 = V_2;
		V_10 = ((double)((0.5)/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_58, L_59)), ((double)il2cpp_codegen_multiply(L_60, L_61))))));
		goto IL_01dc;
	}

IL_01b5:
	{
		RuntimeObject* L_62 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_63 = ___1_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_64 = ___2_tapex;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_65 = ___0_torg;
		double L_66;
		L_66 = InterfaceFuncInvoker3< double, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* >::Invoke(0, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_62, L_63, L_64, L_65);
		V_10 = ((double)((0.5)/L_66));
		il2cpp_codegen_runtime_class_init_inline(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		int64_t L_67 = ((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CounterClockwiseCount;
		((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___CounterClockwiseCount = ((int64_t)il2cpp_codegen_subtract(L_67, ((int64_t)1)));
	}

IL_01dc:
	{
		double L_68 = V_4;
		double L_69 = V_7;
		double L_70 = V_2;
		double L_71 = V_8;
		double L_72 = V_10;
		V_11 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_68, L_69)), ((double)il2cpp_codegen_multiply(L_70, L_71)))), L_72));
		double L_73 = V_1;
		double L_74 = V_8;
		double L_75 = V_3;
		double L_76 = V_7;
		double L_77 = V_10;
		V_12 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_73, L_74)), ((double)il2cpp_codegen_multiply(L_75, L_76)))), L_77));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_78 = ___0_torg;
		double L_79 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_78)->___x;
		double L_80 = V_11;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_81 = ___0_torg;
		double L_82 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_81)->___y;
		double L_83 = V_12;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_84 = (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)il2cpp_codegen_object_new(Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		Point__ctor_m7B46E4C4BC125EA0D962A70708090A2AB1599A6B(L_84, ((double)il2cpp_codegen_add(L_79, L_80)), ((double)il2cpp_codegen_add(L_82, L_83)), NULL);
		V_24 = L_84;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_85 = ___6_badotri;
		V_66 = L_85;
		double L_86 = V_8;
		double L_87 = V_9;
		double L_88 = V_7;
		int32_t L_89;
		L_89 = NewLocation_LongestShortestEdge_mBE0DD54D7A05480723423515CDB36A130F6C7133(__this, L_86, L_87, L_88, NULL);
		V_23 = L_89;
		int32_t L_90 = V_23;
		if ((((int32_t)L_90) > ((int32_t)((int32_t)213))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t L_91 = V_23;
		if ((((int32_t)L_91) == ((int32_t)((int32_t)123))))
		{
			goto IL_0270;
		}
	}
	{
		int32_t L_92 = V_23;
		if ((((int32_t)L_92) == ((int32_t)((int32_t)132))))
		{
			goto IL_0291;
		}
	}
	{
		int32_t L_93 = V_23;
		if ((((int32_t)L_93) == ((int32_t)((int32_t)213))))
		{
			goto IL_02af;
		}
	}
	{
		goto IL_030a;
	}

IL_024a:
	{
		int32_t L_94 = V_23;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)231))))
		{
			goto IL_02ce;
		}
	}
	{
		int32_t L_95 = V_23;
		if ((((int32_t)L_95) == ((int32_t)((int32_t)312))))
		{
			goto IL_02ed;
		}
	}
	{
		int32_t L_96 = V_23;
		if ((((int32_t)L_96) == ((int32_t)((int32_t)321))))
		{
			goto IL_030a;
		}
	}
	{
		goto IL_030a;
	}

IL_0270:
	{
		double L_97 = V_3;
		V_15 = L_97;
		double L_98 = V_4;
		V_16 = L_98;
		double L_99 = V_8;
		V_17 = L_99;
		double L_100 = V_9;
		V_18 = L_100;
		double L_101 = V_7;
		V_19 = L_101;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_102 = ___1_tdest;
		V_20 = L_102;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_103 = ___0_torg;
		V_21 = L_103;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_104 = ___2_tapex;
		V_22 = L_104;
		goto IL_0325;
	}

IL_0291:
	{
		double L_105 = V_3;
		V_15 = L_105;
		double L_106 = V_4;
		V_16 = L_106;
		double L_107 = V_8;
		V_17 = L_107;
		double L_108 = V_7;
		V_18 = L_108;
		double L_109 = V_9;
		V_19 = L_109;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_110 = ___1_tdest;
		V_20 = L_110;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_111 = ___2_tapex;
		V_21 = L_111;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_112 = ___0_torg;
		V_22 = L_112;
		goto IL_0325;
	}

IL_02af:
	{
		double L_113 = V_5;
		V_15 = L_113;
		double L_114 = V_6;
		V_16 = L_114;
		double L_115 = V_9;
		V_17 = L_115;
		double L_116 = V_8;
		V_18 = L_116;
		double L_117 = V_7;
		V_19 = L_117;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_118 = ___0_torg;
		V_20 = L_118;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_119 = ___1_tdest;
		V_21 = L_119;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_120 = ___2_tapex;
		V_22 = L_120;
		goto IL_0325;
	}

IL_02ce:
	{
		double L_121 = V_5;
		V_15 = L_121;
		double L_122 = V_6;
		V_16 = L_122;
		double L_123 = V_9;
		V_17 = L_123;
		double L_124 = V_7;
		V_18 = L_124;
		double L_125 = V_8;
		V_19 = L_125;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_126 = ___0_torg;
		V_20 = L_126;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_127 = ___2_tapex;
		V_21 = L_127;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_128 = ___1_tdest;
		V_22 = L_128;
		goto IL_0325;
	}

IL_02ed:
	{
		double L_129 = V_1;
		V_15 = L_129;
		double L_130 = V_2;
		V_16 = L_130;
		double L_131 = V_7;
		V_17 = L_131;
		double L_132 = V_8;
		V_18 = L_132;
		double L_133 = V_9;
		V_19 = L_133;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_134 = ___2_tapex;
		V_20 = L_134;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_135 = ___1_tdest;
		V_21 = L_135;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_136 = ___0_torg;
		V_22 = L_136;
		goto IL_0325;
	}

IL_030a:
	{
		double L_137 = V_1;
		V_15 = L_137;
		double L_138 = V_2;
		V_16 = L_138;
		double L_139 = V_7;
		V_17 = L_139;
		double L_140 = V_9;
		V_18 = L_140;
		double L_141 = V_8;
		V_19 = L_141;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_142 = ___2_tapex;
		V_20 = L_142;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_143 = ___0_torg;
		V_21 = L_143;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_144 = ___1_tdest;
		V_22 = L_144;
	}

IL_0325:
	{
		bool L_145 = ___5_offcenter;
		if (!L_145)
		{
			goto IL_0453;
		}
	}
	{
		double L_146 = V_0;
		if ((!(((double)L_146) > ((double)(0.0)))))
		{
			goto IL_0453;
		}
	}
	{
		int32_t L_147 = V_23;
		if ((((int32_t)L_147) == ((int32_t)((int32_t)213))))
		{
			goto IL_034d;
		}
	}
	{
		int32_t L_148 = V_23;
		if ((!(((uint32_t)L_148) == ((uint32_t)((int32_t)231)))))
		{
			goto IL_03ac;
		}
	}

IL_034d:
	{
		double L_149 = V_15;
		double L_150 = V_0;
		double L_151 = V_16;
		V_13 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.5), L_149)), ((double)il2cpp_codegen_multiply(L_150, L_151))));
		double L_152 = V_16;
		double L_153 = V_0;
		double L_154 = V_15;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_152)), ((double)il2cpp_codegen_multiply(L_153, L_154))));
		double L_155 = V_13;
		double L_156 = V_13;
		double L_157 = V_14;
		double L_158 = V_14;
		double L_159 = V_11;
		double L_160 = V_1;
		double L_161 = V_11;
		double L_162 = V_1;
		double L_163 = V_12;
		double L_164 = V_2;
		double L_165 = V_12;
		double L_166 = V_2;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_155, L_156)), ((double)il2cpp_codegen_multiply(L_157, L_158))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_159, L_160)), ((double)il2cpp_codegen_subtract(L_161, L_162)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_163, L_164)), ((double)il2cpp_codegen_subtract(L_165, L_166))))))))))
		{
			goto IL_03a4;
		}
	}
	{
		double L_167 = V_1;
		double L_168 = V_13;
		V_11 = ((double)il2cpp_codegen_add(L_167, L_168));
		double L_169 = V_2;
		double L_170 = V_14;
		V_12 = ((double)il2cpp_codegen_add(L_169, L_170));
		goto IL_0453;
	}

IL_03a4:
	{
		V_26 = 1;
		goto IL_0453;
	}

IL_03ac:
	{
		int32_t L_171 = V_23;
		if ((((int32_t)L_171) == ((int32_t)((int32_t)123))))
		{
			goto IL_03bb;
		}
	}
	{
		int32_t L_172 = V_23;
		if ((!(((uint32_t)L_172) == ((uint32_t)((int32_t)132)))))
		{
			goto IL_0408;
		}
	}

IL_03bb:
	{
		double L_173 = V_15;
		double L_174 = V_0;
		double L_175 = V_16;
		V_13 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_173)), ((double)il2cpp_codegen_multiply(L_174, L_175))));
		double L_176 = V_16;
		double L_177 = V_0;
		double L_178 = V_15;
		V_14 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.5), L_176)), ((double)il2cpp_codegen_multiply(L_177, L_178))));
		double L_179 = V_13;
		double L_180 = V_13;
		double L_181 = V_14;
		double L_182 = V_14;
		double L_183 = V_11;
		double L_184 = V_11;
		double L_185 = V_12;
		double L_186 = V_12;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_179, L_180)), ((double)il2cpp_codegen_multiply(L_181, L_182))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_183, L_184)), ((double)il2cpp_codegen_multiply(L_185, L_186))))))))
		{
			goto IL_0403;
		}
	}
	{
		double L_187 = V_13;
		V_11 = L_187;
		double L_188 = V_14;
		V_12 = L_188;
		goto IL_0453;
	}

IL_0403:
	{
		V_26 = 1;
		goto IL_0453;
	}

IL_0408:
	{
		double L_189 = V_15;
		double L_190 = V_0;
		double L_191 = V_16;
		V_13 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.5), L_189)), ((double)il2cpp_codegen_multiply(L_190, L_191))));
		double L_192 = V_16;
		double L_193 = V_0;
		double L_194 = V_15;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.5), L_192)), ((double)il2cpp_codegen_multiply(L_193, L_194))));
		double L_195 = V_13;
		double L_196 = V_13;
		double L_197 = V_14;
		double L_198 = V_14;
		double L_199 = V_11;
		double L_200 = V_11;
		double L_201 = V_12;
		double L_202 = V_12;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_195, L_196)), ((double)il2cpp_codegen_multiply(L_197, L_198))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_199, L_200)), ((double)il2cpp_codegen_multiply(L_201, L_202))))))))
		{
			goto IL_0450;
		}
	}
	{
		double L_203 = V_13;
		V_11 = L_203;
		double L_204 = V_14;
		V_12 = L_204;
		goto IL_0453;
	}

IL_0450:
	{
		V_26 = 1;
	}

IL_0453:
	{
		int32_t L_205 = V_26;
		if ((!(((uint32_t)L_205) == ((uint32_t)1))))
		{
			goto IL_1e2c;
		}
	}
	{
		double L_206 = V_18;
		double L_207 = V_17;
		double L_208 = V_19;
		double L_209 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_210;
		L_210 = sqrt(L_209);
		double L_211 = V_17;
		double L_212;
		L_212 = sqrt(L_211);
		V_27 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_206, L_207)), L_208))/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_210)), L_212))));
		double L_213 = V_27;
		if ((!(((double)L_213) < ((double)(0.0)))))
		{
			goto IL_0491;
		}
	}
	{
		V_28 = (bool)1;
		goto IL_04b5;
	}

IL_0491:
	{
		double L_214 = V_27;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_215;
		L_215 = fabs(((double)il2cpp_codegen_subtract(L_214, (0.0))));
		if ((!(((double)L_215) <= ((double)(1.0E-50)))))
		{
			goto IL_04b2;
		}
	}
	{
		V_28 = (bool)1;
		goto IL_04b5;
	}

IL_04b2:
	{
		V_28 = (bool)0;
	}

IL_04b5:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_216 = V_66;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_217 = ___0_torg;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_218 = ___1_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_219 = ___2_tapex;
		int32_t L_220;
		L_220 = NewLocation_DoSmoothing_mFCA29C04EA0714EA6D28A0342C5FC9D53F4207A8(__this, L_216, L_217, L_218, L_219, (&V_63), NULL);
		V_62 = L_220;
		int32_t L_221 = V_62;
		if ((((int32_t)L_221) <= ((int32_t)0)))
		{
			goto IL_0561;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var);
		int64_t L_222 = ((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___RelocationCount;
		((Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t0D9AAD2286BE12BB097D9ED1B2CEDEBB208E2A21_il2cpp_TypeInfo_var))->___RelocationCount = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)1)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_223 = V_63;
		int32_t L_224 = 0;
		double L_225 = (L_223)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_224));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_226 = ___0_torg;
		double L_227 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_226)->___x;
		V_11 = ((double)il2cpp_codegen_subtract(L_225, L_227));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_228 = V_63;
		int32_t L_229 = 1;
		double L_230 = (L_228)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_229));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_231 = ___0_torg;
		double L_232 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_231)->___y;
		V_12 = ((double)il2cpp_codegen_subtract(L_230, L_232));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_233 = ___0_torg;
		double L_234 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_233)->___x;
		V_64 = L_234;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_235 = ___0_torg;
		double L_236 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_235)->___y;
		V_65 = L_236;
		int32_t L_237 = V_62;
		switch (((int32_t)il2cpp_codegen_subtract(L_237, 1)))
		{
			case 0:
			{
				goto IL_051d;
			}
			case 1:
			{
				goto IL_052f;
			}
			case 2:
			{
				goto IL_0548;
			}
		}
	}
	{
		goto IL_1e2c;
	}

IL_051d:
	{
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_238 = __this->___mesh;
		Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6(L_238, (&V_66), NULL);
		goto IL_1e2c;
	}

IL_052f:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Lnext_m194C8E337B2A1EF0934AE43B13874B372A7A6F26((&V_66), NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_239 = __this->___mesh;
		Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6(L_239, (&V_66), NULL);
		goto IL_1e2c;
	}

IL_0548:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Lprev_mD865D91B4578F5CCF7469B2151CCEEF88803EFF0((&V_66), NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_240 = __this->___mesh;
		Mesh_DeleteVertex_m39CD9B5B47FC015EE24026C5049CCD5ABA4709A6(L_240, (&V_66), NULL);
		goto IL_1e2c;
	}

IL_0561:
	{
		double L_241 = V_18;
		double L_242 = V_19;
		double L_243 = V_17;
		double L_244 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_245;
		L_245 = sqrt(L_244);
		double L_246 = V_19;
		double L_247;
		L_247 = sqrt(L_246);
		double L_248;
		L_248 = acos(((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_241, L_242)), L_243))/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_245)), L_247)))));
		V_73 = ((double)(((double)il2cpp_codegen_multiply(L_248, (180.0)))/(3.1415926535897931)));
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_249 = __this->___behavior;
		double L_250;
		L_250 = Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline(L_249, NULL);
		double L_251 = V_73;
		if ((!(((double)L_250) > ((double)L_251))))
		{
			goto IL_05bc;
		}
	}
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_252 = __this->___behavior;
		double L_253;
		L_253 = Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline(L_252, NULL);
		V_73 = L_253;
		goto IL_05ca;
	}

IL_05bc:
	{
		double L_254 = V_73;
		V_73 = ((double)il2cpp_codegen_add(L_254, (0.5)));
	}

IL_05ca:
	{
		double L_255 = V_17;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_256;
		L_256 = sqrt(L_255);
		double L_257 = V_73;
		double L_258;
		L_258 = sin(((double)(((double)il2cpp_codegen_multiply(L_257, (3.1415926535897931)))/(180.0))));
		V_29 = ((double)(L_256/((double)il2cpp_codegen_multiply((2.0), L_258))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_259 = V_21;
		double L_260 = L_259->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_261 = V_22;
		double L_262 = L_261->___x;
		V_36 = ((double)(((double)il2cpp_codegen_add(L_260, L_262))/(2.0)));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_263 = V_21;
		double L_264 = L_263->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_265 = V_22;
		double L_266 = L_265->___y;
		V_37 = ((double)(((double)il2cpp_codegen_add(L_264, L_266))/(2.0)));
		double L_267 = V_36;
		double L_268 = V_29;
		double L_269 = V_29;
		double L_270 = V_17;
		double L_271;
		L_271 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_268, L_269)), ((double)(L_270/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_272 = V_21;
		double L_273 = L_272->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_274 = V_22;
		double L_275 = L_274->___y;
		double L_276 = V_17;
		double L_277;
		L_277 = sqrt(L_276);
		V_30 = ((double)il2cpp_codegen_add(L_267, ((double)(((double)il2cpp_codegen_multiply(L_271, ((double)il2cpp_codegen_subtract(L_273, L_275))))/L_277))));
		double L_278 = V_37;
		double L_279 = V_29;
		double L_280 = V_29;
		double L_281 = V_17;
		double L_282;
		L_282 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_279, L_280)), ((double)(L_281/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_283 = V_22;
		double L_284 = L_283->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_285 = V_21;
		double L_286 = L_285->___x;
		double L_287 = V_17;
		double L_288;
		L_288 = sqrt(L_287);
		V_31 = ((double)il2cpp_codegen_add(L_278, ((double)(((double)il2cpp_codegen_multiply(L_282, ((double)il2cpp_codegen_subtract(L_284, L_286))))/L_288))));
		double L_289 = V_36;
		double L_290 = V_29;
		double L_291 = V_29;
		double L_292 = V_17;
		double L_293;
		L_293 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_290, L_291)), ((double)(L_292/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_294 = V_21;
		double L_295 = L_294->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_296 = V_22;
		double L_297 = L_296->___y;
		double L_298 = V_17;
		double L_299;
		L_299 = sqrt(L_298);
		V_32 = ((double)il2cpp_codegen_subtract(L_289, ((double)(((double)il2cpp_codegen_multiply(L_293, ((double)il2cpp_codegen_subtract(L_295, L_297))))/L_299))));
		double L_300 = V_37;
		double L_301 = V_29;
		double L_302 = V_29;
		double L_303 = V_17;
		double L_304;
		L_304 = sqrt(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_301, L_302)), ((double)(L_303/(4.0))))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_305 = V_22;
		double L_306 = L_305->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_307 = V_21;
		double L_308 = L_307->___x;
		double L_309 = V_17;
		double L_310;
		L_310 = sqrt(L_309);
		V_33 = ((double)il2cpp_codegen_subtract(L_300, ((double)(((double)il2cpp_codegen_multiply(L_304, ((double)il2cpp_codegen_subtract(L_306, L_308))))/L_310))));
		double L_311 = V_30;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_312 = V_20;
		double L_313 = L_312->___x;
		double L_314 = V_30;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_315 = V_20;
		double L_316 = L_315->___x;
		double L_317 = V_31;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_318 = V_20;
		double L_319 = L_318->___y;
		double L_320 = V_31;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_321 = V_20;
		double L_322 = L_321->___y;
		V_38 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_317, L_319)), ((double)il2cpp_codegen_subtract(L_320, L_322))));
		double L_323 = V_32;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_324 = V_20;
		double L_325 = L_324->___x;
		double L_326 = V_32;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_327 = V_20;
		double L_328 = L_327->___x;
		V_39 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_323, L_325)), ((double)il2cpp_codegen_subtract(L_326, L_328))));
		double L_329 = V_33;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_330 = V_20;
		double L_331 = L_330->___y;
		double L_332 = V_33;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_333 = V_20;
		double L_334 = L_333->___y;
		V_40 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_329, L_331)), ((double)il2cpp_codegen_subtract(L_332, L_334))));
		double L_335 = V_38;
		double L_336 = V_39;
		double L_337 = V_40;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_311, L_313)), ((double)il2cpp_codegen_subtract(L_314, L_316)))), L_335))) <= ((double)((double)il2cpp_codegen_add(L_336, L_337))))))
		{
			goto IL_076d;
		}
	}
	{
		double L_338 = V_30;
		V_34 = L_338;
		double L_339 = V_31;
		V_35 = L_339;
		goto IL_0775;
	}

IL_076d:
	{
		double L_340 = V_32;
		V_34 = L_340;
		double L_341 = V_33;
		V_35 = L_341;
	}

IL_0775:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_342 = ___6_badotri;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_343 = V_21;
		double L_344 = L_343->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_345 = V_21;
		double L_346 = L_345->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_347 = V_20;
		double L_348 = L_347->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_349 = V_20;
		double L_350 = L_349->___y;
		bool L_351;
		L_351 = NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7(__this, L_342, L_344, L_346, L_348, L_350, (&V_42), (&V_41), NULL);
		V_95 = L_351;
		double L_352 = V_11;
		V_67 = L_352;
		double L_353 = V_12;
		V_68 = L_353;
		double L_354 = V_34;
		double L_355 = V_36;
		double L_356 = V_34;
		double L_357 = V_36;
		double L_358 = V_35;
		double L_359 = V_37;
		double L_360 = V_35;
		double L_361 = V_37;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_362;
		L_362 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_354, L_355)), ((double)il2cpp_codegen_subtract(L_356, L_357)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_358, L_359)), ((double)il2cpp_codegen_subtract(L_360, L_361)))))));
		V_93 = L_362;
		double L_363 = V_34;
		double L_364 = V_36;
		double L_365 = V_93;
		V_80 = ((double)(((double)il2cpp_codegen_subtract(L_363, L_364))/L_365));
		double L_366 = V_35;
		double L_367 = V_37;
		double L_368 = V_93;
		V_81 = ((double)(((double)il2cpp_codegen_subtract(L_366, L_367))/L_368));
		double L_369 = V_34;
		double L_370 = V_80;
		double L_371 = V_29;
		double L_372 = V_35;
		double L_373 = V_81;
		double L_374 = V_29;
		V_92 = ((double)il2cpp_codegen_add(L_372, ((double)il2cpp_codegen_multiply(L_373, L_374))));
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_375 = __this->___behavior;
		double L_376;
		L_376 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_375, NULL);
		double L_377 = V_73;
		V_94 = ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((2.0), L_376)), L_377)), (180.0))), (3.1415926535897931)))/(180.0)));
		double L_378 = ((double)il2cpp_codegen_add(L_369, ((double)il2cpp_codegen_multiply(L_370, L_371))));
		double L_379 = V_94;
		double L_380;
		L_380 = cos(L_379);
		double L_381 = V_92;
		double L_382 = V_94;
		double L_383;
		L_383 = sin(L_382);
		double L_384 = V_34;
		double L_385 = V_34;
		double L_386 = V_94;
		double L_387;
		L_387 = cos(L_386);
		double L_388 = V_35;
		double L_389 = V_94;
		double L_390;
		L_390 = sin(L_389);
		V_88 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_378, L_380)), ((double)il2cpp_codegen_multiply(L_381, L_383)))), L_384)), ((double)il2cpp_codegen_multiply(L_385, L_387)))), ((double)il2cpp_codegen_multiply(L_388, L_390))));
		double L_391 = L_378;
		double L_392 = V_94;
		double L_393;
		L_393 = sin(L_392);
		double L_394 = V_92;
		double L_395 = V_94;
		double L_396;
		L_396 = cos(L_395);
		double L_397 = V_35;
		double L_398 = V_34;
		double L_399 = V_94;
		double L_400;
		L_400 = sin(L_399);
		double L_401 = V_35;
		double L_402 = V_94;
		double L_403;
		L_403 = cos(L_402);
		V_89 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_391)), L_393)), ((double)il2cpp_codegen_multiply(L_394, L_396)))), L_397)), ((double)il2cpp_codegen_multiply(L_398, L_400)))), ((double)il2cpp_codegen_multiply(L_401, L_403))));
		double L_404 = L_391;
		double L_405 = V_94;
		double L_406;
		L_406 = cos(L_405);
		double L_407 = V_92;
		double L_408 = V_94;
		double L_409;
		L_409 = sin(L_408);
		double L_410 = V_34;
		double L_411 = V_34;
		double L_412 = V_94;
		double L_413;
		L_413 = cos(L_412);
		double L_414 = V_35;
		double L_415 = V_94;
		double L_416;
		L_416 = sin(L_415);
		V_90 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_404, L_406)), ((double)il2cpp_codegen_multiply(L_407, L_409)))), L_410)), ((double)il2cpp_codegen_multiply(L_411, L_413)))), ((double)il2cpp_codegen_multiply(L_414, L_416))));
		double L_417 = V_94;
		double L_418;
		L_418 = sin(L_417);
		double L_419 = V_92;
		double L_420 = V_94;
		double L_421;
		L_421 = cos(L_420);
		double L_422 = V_35;
		double L_423 = V_34;
		double L_424 = V_94;
		double L_425;
		L_425 = sin(L_424);
		double L_426 = V_35;
		double L_427 = V_94;
		double L_428;
		L_428 = cos(L_427);
		V_91 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_404, L_418)), ((double)il2cpp_codegen_multiply(L_419, L_421)))), L_422)), ((double)il2cpp_codegen_multiply(L_423, L_425)))), ((double)il2cpp_codegen_multiply(L_426, L_428))));
		double L_429 = V_90;
		double L_430 = V_91;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_431 = V_21;
		double L_432 = L_431->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_433 = V_21;
		double L_434 = L_433->___y;
		double L_435 = V_88;
		double L_436 = V_89;
		bool L_437;
		L_437 = NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627(__this, L_429, L_430, L_432, L_434, L_435, L_436, (bool)1, NULL);
		if (!L_437)
		{
			goto IL_0910;
		}
	}
	{
		double L_438 = V_88;
		V_84 = L_438;
		double L_439 = V_89;
		V_85 = L_439;
		double L_440 = V_90;
		V_86 = L_440;
		double L_441 = V_91;
		V_87 = L_441;
		goto IL_0920;
	}

IL_0910:
	{
		double L_442 = V_90;
		V_84 = L_442;
		double L_443 = V_91;
		V_85 = L_443;
		double L_444 = V_88;
		V_86 = L_444;
		double L_445 = V_89;
		V_87 = L_445;
	}

IL_0920:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_446 = V_21;
		double L_447 = L_446->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_448 = V_20;
		double L_449 = L_448->___x;
		V_50 = ((double)(((double)il2cpp_codegen_add(L_447, L_449))/(2.0)));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_450 = V_21;
		double L_451 = L_450->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_452 = V_20;
		double L_453 = L_452->___y;
		V_51 = ((double)(((double)il2cpp_codegen_add(L_451, L_453))/(2.0)));
		bool L_454 = V_95;
		if (L_454)
		{
			goto IL_1135;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_455;
		L_455 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5((&V_41), NULL);
		V_43 = L_455;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_456;
		L_456 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12((&V_41), NULL);
		V_44 = L_456;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_457;
		L_457 = Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9((&V_41), NULL);
		V_45 = L_457;
		RuntimeObject* L_458 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_459 = V_43;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_460 = V_44;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_461 = V_45;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_462;
		L_462 = InterfaceFuncInvoker5< Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, double*, double* >::Invoke(2, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_458, L_459, L_460, L_461, (&V_46), (&V_47));
		V_25 = L_462;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_463 = V_21;
		double L_464 = L_463->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_465 = V_20;
		double L_466 = L_465->___y;
		V_48 = ((double)il2cpp_codegen_subtract(L_464, L_466));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_467 = V_20;
		double L_468 = L_467->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_469 = V_21;
		double L_470 = L_469->___x;
		V_49 = ((double)il2cpp_codegen_subtract(L_468, L_470));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_471 = V_24;
		double L_472 = L_471->___x;
		double L_473 = V_48;
		V_48 = ((double)il2cpp_codegen_add(L_472, L_473));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_474 = V_24;
		double L_475 = L_474->___y;
		double L_476 = V_49;
		V_49 = ((double)il2cpp_codegen_add(L_475, L_476));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_477 = V_24;
		double L_478 = L_477->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_479 = V_24;
		double L_480 = L_479->___y;
		double L_481 = V_48;
		double L_482 = V_49;
		double L_483 = V_34;
		double L_484 = V_35;
		double L_485 = V_29;
		NewLocation_CircleLineIntersection_mEF2D3A76F8FCC1B615DE86D0A679882E41ECB688(__this, L_478, L_480, L_481, L_482, L_483, L_484, L_485, (&V_54), NULL);
		double L_486 = V_50;
		double L_487 = V_51;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_488 = V_54;
		int32_t L_489 = 3;
		double L_490 = (L_488)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_489));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_491 = V_54;
		int32_t L_492 = 4;
		double L_493 = (L_491)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_492));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_494 = V_24;
		double L_495 = L_494->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_496 = V_24;
		double L_497 = L_496->___y;
		bool L_498 = V_28;
		bool L_499;
		L_499 = NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627(__this, L_486, L_487, L_490, L_493, L_495, L_497, L_498, NULL);
		if (!L_499)
		{
			goto IL_0a1b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_500 = V_54;
		int32_t L_501 = 3;
		double L_502 = (L_500)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_501));
		V_52 = L_502;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_503 = V_54;
		int32_t L_504 = 4;
		double L_505 = (L_503)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_504));
		V_53 = L_505;
		goto IL_0a27;
	}

IL_0a1b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_506 = V_54;
		int32_t L_507 = 1;
		double L_508 = (L_506)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_507));
		V_52 = L_508;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_509 = V_54;
		int32_t L_510 = 2;
		double L_511 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_510));
		V_53 = L_511;
	}

IL_0a27:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_512 = V_21;
		double L_513 = L_512->___x;
		V_74 = L_513;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_514 = V_21;
		double L_515 = L_514->___y;
		V_75 = L_515;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_516 = V_22;
		double L_517 = L_516->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_518 = V_21;
		double L_519 = L_518->___x;
		V_80 = ((double)il2cpp_codegen_subtract(L_517, L_519));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_520 = V_22;
		double L_521 = L_520->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_522 = V_21;
		double L_523 = L_522->___y;
		V_81 = ((double)il2cpp_codegen_subtract(L_521, L_523));
		double L_524 = V_84;
		V_76 = L_524;
		double L_525 = V_85;
		V_77 = L_525;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_526 = V_24;
		double L_527 = L_526->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_528 = V_24;
		double L_529 = L_528->___y;
		double L_530 = V_48;
		double L_531 = V_49;
		double L_532 = V_74;
		double L_533 = V_75;
		double L_534 = V_76;
		double L_535 = V_77;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_527, L_529, L_530, L_531, L_532, L_533, L_534, L_535, (&V_82), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_536 = V_82;
		int32_t L_537 = 0;
		double L_538 = (L_536)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_537));
		if ((!(((double)L_538) > ((double)(0.0)))))
		{
			goto IL_0aa0;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_539 = V_82;
		int32_t L_540 = 1;
		double L_541 = (L_539)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_540));
		V_78 = L_541;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_542 = V_82;
		int32_t L_543 = 2;
		double L_544 = (L_542)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_543));
		V_79 = L_544;
	}

IL_0aa0:
	{
		double L_545 = V_52;
		double L_546 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_547 = V_24;
		double L_548 = L_547->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_549 = V_24;
		double L_550 = L_549->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_551 = V_25;
		double L_552 = L_551->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_553 = V_25;
		double L_554 = L_553->___y;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_545, L_546, L_548, L_550, L_552, L_554, (&V_55), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_555 = V_54;
		int32_t L_556 = 0;
		double L_557 = (L_555)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_556));
		if ((!(((double)L_557) > ((double)(0.0)))))
		{
			goto IL_1135;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_558 = V_55;
		int32_t L_559 = 0;
		double L_560 = (L_558)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_559));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_561;
		L_561 = fabs(((double)il2cpp_codegen_subtract(L_560, (1.0))));
		if ((!(((double)L_561) <= ((double)(1.0E-50)))))
		{
			goto IL_0d7c;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_562 = V_55;
		int32_t L_563 = 2;
		double L_564 = (L_562)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_563));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_565 = V_55;
		int32_t L_566 = 3;
		double L_567 = (L_565)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_566));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_568 = V_24;
		double L_569 = L_568->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_570 = V_24;
		double L_571 = L_570->___y;
		double L_572 = V_78;
		double L_573 = V_79;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_564, L_567, L_569, L_571, L_572, L_573, (&V_83), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_574 = V_83;
		int32_t L_575 = 0;
		double L_576 = (L_574)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_575));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_577;
		L_577 = fabs(((double)il2cpp_codegen_subtract(L_576, (1.0))));
		if ((!(((double)L_577) <= ((double)(1.0E-50)))))
		{
			goto IL_0d1e;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_578 = V_82;
		int32_t L_579 = 0;
		double L_580 = (L_578)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_579));
		if ((!(((double)L_580) > ((double)(0.0)))))
		{
			goto IL_0d1e;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_581 = V_20;
		double L_582 = L_581->___x;
		double L_583 = V_84;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_584 = V_20;
		double L_585 = L_584->___x;
		double L_586 = V_84;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_587 = V_20;
		double L_588 = L_587->___y;
		double L_589 = V_85;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_590 = V_20;
		double L_591 = L_590->___y;
		double L_592 = V_85;
		double L_593 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_594 = V_20;
		double L_595 = L_594->___x;
		double L_596 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_597 = V_20;
		double L_598 = L_597->___x;
		double L_599 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_600 = V_20;
		double L_601 = L_600->___y;
		double L_602 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_603 = V_20;
		double L_604 = L_603->___y;
		double L_605 = V_79;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_582, L_583)), ((double)il2cpp_codegen_subtract(L_585, L_586)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_588, L_589)), ((double)il2cpp_codegen_subtract(L_591, L_592))))))) > ((double)((double)il2cpp_codegen_multiply(L_593, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_595, L_596)), ((double)il2cpp_codegen_subtract(L_598, L_599)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_601, L_602)), ((double)il2cpp_codegen_subtract(L_604, L_605))))))))))))
		{
			goto IL_0c08;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_606 = V_21;
		double L_607 = L_606->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_608 = V_21;
		double L_609 = L_608->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_610 = V_22;
		double L_611 = L_610->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_612 = V_22;
		double L_613 = L_612->___y;
		double L_614 = V_84;
		double L_615 = V_85;
		bool L_616;
		L_616 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_607, L_609, L_611, L_613, L_614, L_615, NULL);
		if (!L_616)
		{
			goto IL_0c08;
		}
	}
	{
		double L_617 = V_84;
		double L_618 = V_85;
		double L_619;
		L_619 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_617, L_618, (&V_41), NULL);
		double L_620 = V_78;
		double L_621 = V_79;
		double L_622;
		L_622 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_620, L_621, (&V_41), NULL);
		if ((!(((double)L_619) > ((double)L_622))))
		{
			goto IL_0c08;
		}
	}
	{
		double L_623 = V_84;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_624 = ___0_torg;
		double L_625 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_624)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_623, L_625));
		double L_626 = V_85;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_627 = ___0_torg;
		double L_628 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_627)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_626, L_628));
		goto IL_10a2;
	}

IL_0c08:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_629 = V_21;
		double L_630 = L_629->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_631 = V_21;
		double L_632 = L_631->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_633 = V_22;
		double L_634 = L_633->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_635 = V_22;
		double L_636 = L_635->___y;
		double L_637 = V_78;
		double L_638 = V_79;
		bool L_639;
		L_639 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_630, L_632, L_634, L_636, L_637, L_638, NULL);
		if (!L_639)
		{
			goto IL_0cff;
		}
	}
	{
		double L_640 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_641 = V_24;
		double L_642 = L_641->___x;
		double L_643 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_644 = V_24;
		double L_645 = L_644->___x;
		double L_646 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_647 = V_24;
		double L_648 = L_647->___y;
		double L_649 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_650 = V_24;
		double L_651 = L_650->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_652;
		L_652 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_640, L_642)), ((double)il2cpp_codegen_subtract(L_643, L_645)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_646, L_648)), ((double)il2cpp_codegen_subtract(L_649, L_651)))))));
		V_58 = L_652;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_653 = V_24;
		double L_654 = L_653->___x;
		double L_655 = V_78;
		V_56 = ((double)il2cpp_codegen_subtract(L_654, L_655));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_656 = V_24;
		double L_657 = L_656->___y;
		double L_658 = V_79;
		V_57 = ((double)il2cpp_codegen_subtract(L_657, L_658));
		double L_659 = V_56;
		double L_660 = V_58;
		V_56 = ((double)(L_659/L_660));
		double L_661 = V_57;
		double L_662 = V_58;
		V_57 = ((double)(L_661/L_662));
		double L_663 = V_78;
		double L_664 = V_56;
		double L_665 = V_59;
		double L_666 = V_17;
		double L_667;
		L_667 = sqrt(L_666);
		V_78 = ((double)il2cpp_codegen_add(L_663, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_664, L_665)), L_667))));
		double L_668 = V_79;
		double L_669 = V_57;
		double L_670 = V_59;
		double L_671 = V_17;
		double L_672;
		L_672 = sqrt(L_671);
		V_79 = ((double)il2cpp_codegen_add(L_668, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_669, L_670)), L_672))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_673 = V_21;
		double L_674 = L_673->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_675 = V_21;
		double L_676 = L_675->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_677 = V_22;
		double L_678 = L_677->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_679 = V_22;
		double L_680 = L_679->___y;
		double L_681 = V_78;
		double L_682 = V_79;
		bool L_683;
		L_683 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_674, L_676, L_678, L_680, L_681, L_682, NULL);
		if (!L_683)
		{
			goto IL_0ce4;
		}
	}
	{
		double L_684 = V_11;
		V_67 = L_684;
		double L_685 = V_12;
		V_68 = L_685;
		goto IL_10a2;
	}

IL_0ce4:
	{
		double L_686 = V_78;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_687 = ___0_torg;
		double L_688 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_687)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_686, L_688));
		double L_689 = V_79;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_690 = ___0_torg;
		double L_691 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_690)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_689, L_691));
		goto IL_10a2;
	}

IL_0cff:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_692 = V_83;
		int32_t L_693 = 2;
		double L_694 = (L_692)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_693));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_695 = ___0_torg;
		double L_696 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_695)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_694, L_696));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_697 = V_83;
		int32_t L_698 = 3;
		double L_699 = (L_697)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_698));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_700 = ___0_torg;
		double L_701 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_700)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_699, L_701));
		goto IL_10a2;
	}

IL_0d1e:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_702 = V_21;
		double L_703 = L_702->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_704 = V_21;
		double L_705 = L_704->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_706 = V_22;
		double L_707 = L_706->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_708 = V_22;
		double L_709 = L_708->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_710 = V_25;
		double L_711 = L_710->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_712 = V_25;
		double L_713 = L_712->___y;
		bool L_714;
		L_714 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_703, L_705, L_707, L_709, L_711, L_713, NULL);
		if (!L_714)
		{
			goto IL_0d5d;
		}
	}
	{
		double L_715 = V_11;
		V_67 = L_715;
		double L_716 = V_12;
		V_68 = L_716;
		goto IL_10a2;
	}

IL_0d5d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_717 = V_55;
		int32_t L_718 = 2;
		double L_719 = (L_717)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_718));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_720 = ___0_torg;
		double L_721 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_720)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_719, L_721));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_722 = V_55;
		int32_t L_723 = 3;
		double L_724 = (L_722)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_723));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_725 = ___0_torg;
		double L_726 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_725)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_724, L_726));
		goto IL_10a2;
	}

IL_0d7c:
	{
		double L_727 = V_52;
		double L_728 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_729 = V_24;
		double L_730 = L_729->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_731 = V_24;
		double L_732 = L_731->___y;
		double L_733 = V_78;
		double L_734 = V_79;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_727, L_728, L_730, L_732, L_733, L_734, (&V_83), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_735 = V_83;
		int32_t L_736 = 0;
		double L_737 = (L_735)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_736));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_738;
		L_738 = fabs(((double)il2cpp_codegen_subtract(L_737, (1.0))));
		if ((!(((double)L_738) <= ((double)(1.0E-50)))))
		{
			goto IL_0f9b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_739 = V_82;
		int32_t L_740 = 0;
		double L_741 = (L_739)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_740));
		if ((!(((double)L_741) > ((double)(0.0)))))
		{
			goto IL_0f9b;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_742 = V_20;
		double L_743 = L_742->___x;
		double L_744 = V_84;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_745 = V_20;
		double L_746 = L_745->___x;
		double L_747 = V_84;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_748 = V_20;
		double L_749 = L_748->___y;
		double L_750 = V_85;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_751 = V_20;
		double L_752 = L_751->___y;
		double L_753 = V_85;
		double L_754 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_755 = V_20;
		double L_756 = L_755->___x;
		double L_757 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_758 = V_20;
		double L_759 = L_758->___x;
		double L_760 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_761 = V_20;
		double L_762 = L_761->___y;
		double L_763 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_764 = V_20;
		double L_765 = L_764->___y;
		double L_766 = V_79;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_743, L_744)), ((double)il2cpp_codegen_subtract(L_746, L_747)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_749, L_750)), ((double)il2cpp_codegen_subtract(L_752, L_753))))))) > ((double)((double)il2cpp_codegen_multiply(L_754, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_756, L_757)), ((double)il2cpp_codegen_subtract(L_759, L_760)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_762, L_763)), ((double)il2cpp_codegen_subtract(L_765, L_766))))))))))))
		{
			goto IL_0e85;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_767 = V_21;
		double L_768 = L_767->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_769 = V_21;
		double L_770 = L_769->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_771 = V_22;
		double L_772 = L_771->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_773 = V_22;
		double L_774 = L_773->___y;
		double L_775 = V_84;
		double L_776 = V_85;
		bool L_777;
		L_777 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_768, L_770, L_772, L_774, L_775, L_776, NULL);
		if (!L_777)
		{
			goto IL_0e85;
		}
	}
	{
		double L_778 = V_84;
		double L_779 = V_85;
		double L_780;
		L_780 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_778, L_779, (&V_41), NULL);
		double L_781 = V_78;
		double L_782 = V_79;
		double L_783;
		L_783 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_781, L_782, (&V_41), NULL);
		if ((!(((double)L_780) > ((double)L_783))))
		{
			goto IL_0e85;
		}
	}
	{
		double L_784 = V_84;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_785 = ___0_torg;
		double L_786 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_785)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_784, L_786));
		double L_787 = V_85;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_788 = ___0_torg;
		double L_789 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_788)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_787, L_789));
		goto IL_10a2;
	}

IL_0e85:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_790 = V_22;
		double L_791 = L_790->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_792 = V_22;
		double L_793 = L_792->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_794 = V_21;
		double L_795 = L_794->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_796 = V_21;
		double L_797 = L_796->___y;
		double L_798 = V_78;
		double L_799 = V_79;
		bool L_800;
		L_800 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_791, L_793, L_795, L_797, L_798, L_799, NULL);
		if (!L_800)
		{
			goto IL_0f7c;
		}
	}
	{
		double L_801 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_802 = V_24;
		double L_803 = L_802->___x;
		double L_804 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_805 = V_24;
		double L_806 = L_805->___x;
		double L_807 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_808 = V_24;
		double L_809 = L_808->___y;
		double L_810 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_811 = V_24;
		double L_812 = L_811->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_813;
		L_813 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_801, L_803)), ((double)il2cpp_codegen_subtract(L_804, L_806)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_807, L_809)), ((double)il2cpp_codegen_subtract(L_810, L_812)))))));
		V_58 = L_813;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_814 = V_24;
		double L_815 = L_814->___x;
		double L_816 = V_78;
		V_56 = ((double)il2cpp_codegen_subtract(L_815, L_816));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_817 = V_24;
		double L_818 = L_817->___y;
		double L_819 = V_79;
		V_57 = ((double)il2cpp_codegen_subtract(L_818, L_819));
		double L_820 = V_56;
		double L_821 = V_58;
		V_56 = ((double)(L_820/L_821));
		double L_822 = V_57;
		double L_823 = V_58;
		V_57 = ((double)(L_822/L_823));
		double L_824 = V_78;
		double L_825 = V_56;
		double L_826 = V_59;
		double L_827 = V_17;
		double L_828;
		L_828 = sqrt(L_827);
		V_78 = ((double)il2cpp_codegen_add(L_824, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_825, L_826)), L_828))));
		double L_829 = V_79;
		double L_830 = V_57;
		double L_831 = V_59;
		double L_832 = V_17;
		double L_833;
		L_833 = sqrt(L_832);
		V_79 = ((double)il2cpp_codegen_add(L_829, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_830, L_831)), L_833))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_834 = V_21;
		double L_835 = L_834->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_836 = V_21;
		double L_837 = L_836->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_838 = V_22;
		double L_839 = L_838->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_840 = V_22;
		double L_841 = L_840->___y;
		double L_842 = V_78;
		double L_843 = V_79;
		bool L_844;
		L_844 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_835, L_837, L_839, L_841, L_842, L_843, NULL);
		if (!L_844)
		{
			goto IL_0f61;
		}
	}
	{
		double L_845 = V_11;
		V_67 = L_845;
		double L_846 = V_12;
		V_68 = L_846;
		goto IL_10a2;
	}

IL_0f61:
	{
		double L_847 = V_78;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_848 = ___0_torg;
		double L_849 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_848)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_847, L_849));
		double L_850 = V_79;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_851 = ___0_torg;
		double L_852 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_851)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_850, L_852));
		goto IL_10a2;
	}

IL_0f7c:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_853 = V_83;
		int32_t L_854 = 2;
		double L_855 = (L_853)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_854));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_856 = ___0_torg;
		double L_857 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_856)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_855, L_857));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_858 = V_83;
		int32_t L_859 = 3;
		double L_860 = (L_858)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_859));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_861 = ___0_torg;
		double L_862 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_861)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_860, L_862));
		goto IL_10a2;
	}

IL_0f9b:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_863 = V_22;
		double L_864 = L_863->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_865 = V_22;
		double L_866 = L_865->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_867 = V_21;
		double L_868 = L_867->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_869 = V_21;
		double L_870 = L_869->___y;
		double L_871 = V_52;
		double L_872 = V_53;
		bool L_873;
		L_873 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_864, L_866, L_868, L_870, L_871, L_872, NULL);
		if (!L_873)
		{
			goto IL_108c;
		}
	}
	{
		double L_874 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_875 = V_24;
		double L_876 = L_875->___x;
		double L_877 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_878 = V_24;
		double L_879 = L_878->___x;
		double L_880 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_881 = V_24;
		double L_882 = L_881->___y;
		double L_883 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_884 = V_24;
		double L_885 = L_884->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_886;
		L_886 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_874, L_876)), ((double)il2cpp_codegen_subtract(L_877, L_879)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_880, L_882)), ((double)il2cpp_codegen_subtract(L_883, L_885)))))));
		V_58 = L_886;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_887 = V_24;
		double L_888 = L_887->___x;
		double L_889 = V_52;
		V_56 = ((double)il2cpp_codegen_subtract(L_888, L_889));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_890 = V_24;
		double L_891 = L_890->___y;
		double L_892 = V_53;
		V_57 = ((double)il2cpp_codegen_subtract(L_891, L_892));
		double L_893 = V_56;
		double L_894 = V_58;
		V_56 = ((double)(L_893/L_894));
		double L_895 = V_57;
		double L_896 = V_58;
		V_57 = ((double)(L_895/L_896));
		double L_897 = V_52;
		double L_898 = V_56;
		double L_899 = V_59;
		double L_900 = V_17;
		double L_901;
		L_901 = sqrt(L_900);
		V_52 = ((double)il2cpp_codegen_add(L_897, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_898, L_899)), L_901))));
		double L_902 = V_53;
		double L_903 = V_57;
		double L_904 = V_59;
		double L_905 = V_17;
		double L_906;
		L_906 = sqrt(L_905);
		V_53 = ((double)il2cpp_codegen_add(L_902, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_903, L_904)), L_906))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_907 = V_21;
		double L_908 = L_907->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_909 = V_21;
		double L_910 = L_909->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_911 = V_22;
		double L_912 = L_911->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_913 = V_22;
		double L_914 = L_913->___y;
		double L_915 = V_52;
		double L_916 = V_53;
		bool L_917;
		L_917 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_908, L_910, L_912, L_914, L_915, L_916, NULL);
		if (!L_917)
		{
			goto IL_1074;
		}
	}
	{
		double L_918 = V_11;
		V_67 = L_918;
		double L_919 = V_12;
		V_68 = L_919;
		goto IL_10a2;
	}

IL_1074:
	{
		double L_920 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_921 = ___0_torg;
		double L_922 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_921)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_920, L_922));
		double L_923 = V_53;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_924 = ___0_torg;
		double L_925 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_924)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_923, L_925));
		goto IL_10a2;
	}

IL_108c:
	{
		double L_926 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_927 = ___0_torg;
		double L_928 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_927)->___x;
		V_67 = ((double)il2cpp_codegen_subtract(L_926, L_928));
		double L_929 = V_53;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_930 = ___0_torg;
		double L_931 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_930)->___y;
		V_68 = ((double)il2cpp_codegen_subtract(L_929, L_931));
	}

IL_10a2:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_932 = V_20;
		double L_933 = L_932->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_934 = V_24;
		double L_935 = L_934->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_936 = V_20;
		double L_937 = L_936->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_938 = V_24;
		double L_939 = L_938->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_940 = V_20;
		double L_941 = L_940->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_942 = V_24;
		double L_943 = L_942->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_944 = V_20;
		double L_945 = L_944->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_946 = V_24;
		double L_947 = L_946->___y;
		double L_948 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_949 = V_20;
		double L_950 = L_949->___x;
		double L_951 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_952 = ___0_torg;
		double L_953 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_952)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_954 = V_20;
		double L_955 = L_954->___x;
		double L_956 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_957 = ___0_torg;
		double L_958 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_957)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_959 = V_20;
		double L_960 = L_959->___y;
		double L_961 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_962 = ___0_torg;
		double L_963 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_962)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_964 = V_20;
		double L_965 = L_964->___y;
		double L_966 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_967 = ___0_torg;
		double L_968 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_967)->___y;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_933, L_935)), ((double)il2cpp_codegen_subtract(L_937, L_939)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_941, L_943)), ((double)il2cpp_codegen_subtract(L_945, L_947))))))) > ((double)((double)il2cpp_codegen_multiply(L_948, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_950, ((double)il2cpp_codegen_add(L_951, L_953)))), ((double)il2cpp_codegen_subtract(L_955, ((double)il2cpp_codegen_add(L_956, L_958)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_960, ((double)il2cpp_codegen_add(L_961, L_963)))), ((double)il2cpp_codegen_subtract(L_965, ((double)il2cpp_codegen_add(L_966, L_968))))))))))))))
		{
			goto IL_1135;
		}
	}
	{
		double L_969 = V_11;
		V_67 = L_969;
		double L_970 = V_12;
		V_68 = L_970;
	}

IL_1135:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_971 = ___6_badotri;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_972 = V_22;
		double L_973 = L_972->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_974 = V_22;
		double L_975 = L_974->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_976 = V_20;
		double L_977 = L_976->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_978 = V_20;
		double L_979 = L_978->___y;
		bool L_980;
		L_980 = NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7(__this, L_971, L_973, L_975, L_977, L_979, (&V_42), (&V_41), NULL);
		V_96 = L_980;
		double L_981 = V_11;
		V_69 = L_981;
		double L_982 = V_12;
		V_70 = L_982;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_983 = V_22;
		double L_984 = L_983->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_985 = V_20;
		double L_986 = L_985->___x;
		V_71 = ((double)(((double)il2cpp_codegen_add(L_984, L_986))/(2.0)));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_987 = V_22;
		double L_988 = L_987->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_989 = V_20;
		double L_990 = L_989->___y;
		V_72 = ((double)(((double)il2cpp_codegen_add(L_988, L_990))/(2.0)));
		bool L_991 = V_96;
		if (L_991)
		{
			goto IL_197b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_992;
		L_992 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5((&V_41), NULL);
		V_43 = L_992;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_993;
		L_993 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12((&V_41), NULL);
		V_44 = L_993;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_994;
		L_994 = Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9((&V_41), NULL);
		V_45 = L_994;
		RuntimeObject* L_995 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_996 = V_43;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_997 = V_44;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_998 = V_45;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_999;
		L_999 = InterfaceFuncInvoker5< Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, double*, double* >::Invoke(2, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_995, L_996, L_997, L_998, (&V_46), (&V_47));
		V_25 = L_999;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1000 = V_22;
		double L_1001 = L_1000->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1002 = V_20;
		double L_1003 = L_1002->___y;
		V_48 = ((double)il2cpp_codegen_subtract(L_1001, L_1003));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1004 = V_20;
		double L_1005 = L_1004->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1006 = V_22;
		double L_1007 = L_1006->___x;
		V_49 = ((double)il2cpp_codegen_subtract(L_1005, L_1007));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1008 = V_24;
		double L_1009 = L_1008->___x;
		double L_1010 = V_48;
		V_48 = ((double)il2cpp_codegen_add(L_1009, L_1010));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1011 = V_24;
		double L_1012 = L_1011->___y;
		double L_1013 = V_49;
		V_49 = ((double)il2cpp_codegen_add(L_1012, L_1013));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1014 = V_24;
		double L_1015 = L_1014->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1016 = V_24;
		double L_1017 = L_1016->___y;
		double L_1018 = V_48;
		double L_1019 = V_49;
		double L_1020 = V_34;
		double L_1021 = V_35;
		double L_1022 = V_29;
		NewLocation_CircleLineIntersection_mEF2D3A76F8FCC1B615DE86D0A679882E41ECB688(__this, L_1015, L_1017, L_1018, L_1019, L_1020, L_1021, L_1022, (&V_54), NULL);
		double L_1023 = V_71;
		double L_1024 = V_72;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1025 = V_54;
		int32_t L_1026 = 3;
		double L_1027 = (L_1025)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1026));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1028 = V_54;
		int32_t L_1029 = 4;
		double L_1030 = (L_1028)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1029));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1031 = V_24;
		double L_1032 = L_1031->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1033 = V_24;
		double L_1034 = L_1033->___y;
		bool L_1035;
		L_1035 = NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627(__this, L_1023, L_1024, L_1027, L_1030, L_1032, L_1034, (bool)0, NULL);
		if (!L_1035)
		{
			goto IL_1261;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1036 = V_54;
		int32_t L_1037 = 3;
		double L_1038 = (L_1036)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1037));
		V_52 = L_1038;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1039 = V_54;
		int32_t L_1040 = 4;
		double L_1041 = (L_1039)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1040));
		V_53 = L_1041;
		goto IL_126d;
	}

IL_1261:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1042 = V_54;
		int32_t L_1043 = 1;
		double L_1044 = (L_1042)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1043));
		V_52 = L_1044;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1045 = V_54;
		int32_t L_1046 = 2;
		double L_1047 = (L_1045)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1046));
		V_53 = L_1047;
	}

IL_126d:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1048 = V_22;
		double L_1049 = L_1048->___x;
		V_74 = L_1049;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1050 = V_22;
		double L_1051 = L_1050->___y;
		V_75 = L_1051;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1052 = V_21;
		double L_1053 = L_1052->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1054 = V_22;
		double L_1055 = L_1054->___x;
		V_80 = ((double)il2cpp_codegen_subtract(L_1053, L_1055));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1056 = V_21;
		double L_1057 = L_1056->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1058 = V_22;
		double L_1059 = L_1058->___y;
		V_81 = ((double)il2cpp_codegen_subtract(L_1057, L_1059));
		double L_1060 = V_86;
		V_76 = L_1060;
		double L_1061 = V_87;
		V_77 = L_1061;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1062 = V_24;
		double L_1063 = L_1062->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1064 = V_24;
		double L_1065 = L_1064->___y;
		double L_1066 = V_48;
		double L_1067 = V_49;
		double L_1068 = V_74;
		double L_1069 = V_75;
		double L_1070 = V_76;
		double L_1071 = V_77;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_1063, L_1065, L_1066, L_1067, L_1068, L_1069, L_1070, L_1071, (&V_82), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1072 = V_82;
		int32_t L_1073 = 0;
		double L_1074 = (L_1072)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1073));
		if ((!(((double)L_1074) > ((double)(0.0)))))
		{
			goto IL_12e6;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1075 = V_82;
		int32_t L_1076 = 1;
		double L_1077 = (L_1075)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1076));
		V_78 = L_1077;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1078 = V_82;
		int32_t L_1079 = 2;
		double L_1080 = (L_1078)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1079));
		V_79 = L_1080;
	}

IL_12e6:
	{
		double L_1081 = V_52;
		double L_1082 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1083 = V_24;
		double L_1084 = L_1083->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1085 = V_24;
		double L_1086 = L_1085->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1087 = V_25;
		double L_1088 = L_1087->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1089 = V_25;
		double L_1090 = L_1089->___y;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_1081, L_1082, L_1084, L_1086, L_1088, L_1090, (&V_55), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1091 = V_54;
		int32_t L_1092 = 0;
		double L_1093 = (L_1091)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1092));
		if ((!(((double)L_1093) > ((double)(0.0)))))
		{
			goto IL_197b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1094 = V_55;
		int32_t L_1095 = 0;
		double L_1096 = (L_1094)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1095));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1097;
		L_1097 = fabs(((double)il2cpp_codegen_subtract(L_1096, (1.0))));
		if ((!(((double)L_1097) <= ((double)(1.0E-50)))))
		{
			goto IL_15c2;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1098 = V_55;
		int32_t L_1099 = 2;
		double L_1100 = (L_1098)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1099));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1101 = V_55;
		int32_t L_1102 = 3;
		double L_1103 = (L_1101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1102));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1104 = V_24;
		double L_1105 = L_1104->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1106 = V_24;
		double L_1107 = L_1106->___y;
		double L_1108 = V_78;
		double L_1109 = V_79;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_1100, L_1103, L_1105, L_1107, L_1108, L_1109, (&V_83), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1110 = V_83;
		int32_t L_1111 = 0;
		double L_1112 = (L_1110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1111));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1113;
		L_1113 = fabs(((double)il2cpp_codegen_subtract(L_1112, (1.0))));
		if ((!(((double)L_1113) <= ((double)(1.0E-50)))))
		{
			goto IL_1564;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1114 = V_82;
		int32_t L_1115 = 0;
		double L_1116 = (L_1114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1115));
		if ((!(((double)L_1116) > ((double)(0.0)))))
		{
			goto IL_1564;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1117 = V_20;
		double L_1118 = L_1117->___x;
		double L_1119 = V_86;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1120 = V_20;
		double L_1121 = L_1120->___x;
		double L_1122 = V_86;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1123 = V_20;
		double L_1124 = L_1123->___y;
		double L_1125 = V_87;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1126 = V_20;
		double L_1127 = L_1126->___y;
		double L_1128 = V_87;
		double L_1129 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1130 = V_20;
		double L_1131 = L_1130->___x;
		double L_1132 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1133 = V_20;
		double L_1134 = L_1133->___x;
		double L_1135 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1136 = V_20;
		double L_1137 = L_1136->___y;
		double L_1138 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1139 = V_20;
		double L_1140 = L_1139->___y;
		double L_1141 = V_79;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1118, L_1119)), ((double)il2cpp_codegen_subtract(L_1121, L_1122)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1124, L_1125)), ((double)il2cpp_codegen_subtract(L_1127, L_1128))))))) > ((double)((double)il2cpp_codegen_multiply(L_1129, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1131, L_1132)), ((double)il2cpp_codegen_subtract(L_1134, L_1135)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1137, L_1138)), ((double)il2cpp_codegen_subtract(L_1140, L_1141))))))))))))
		{
			goto IL_144e;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1142 = V_21;
		double L_1143 = L_1142->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1144 = V_21;
		double L_1145 = L_1144->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1146 = V_22;
		double L_1147 = L_1146->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1148 = V_22;
		double L_1149 = L_1148->___y;
		double L_1150 = V_86;
		double L_1151 = V_87;
		bool L_1152;
		L_1152 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1143, L_1145, L_1147, L_1149, L_1150, L_1151, NULL);
		if (!L_1152)
		{
			goto IL_144e;
		}
	}
	{
		double L_1153 = V_86;
		double L_1154 = V_87;
		double L_1155;
		L_1155 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_1153, L_1154, (&V_41), NULL);
		double L_1156 = V_78;
		double L_1157 = V_79;
		double L_1158;
		L_1158 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_1156, L_1157, (&V_41), NULL);
		if ((!(((double)L_1155) > ((double)L_1158))))
		{
			goto IL_144e;
		}
	}
	{
		double L_1159 = V_86;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1160 = ___0_torg;
		double L_1161 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1160)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1159, L_1161));
		double L_1162 = V_87;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1163 = ___0_torg;
		double L_1164 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1163)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1162, L_1164));
		goto IL_18e8;
	}

IL_144e:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1165 = V_21;
		double L_1166 = L_1165->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1167 = V_21;
		double L_1168 = L_1167->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1169 = V_22;
		double L_1170 = L_1169->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1171 = V_22;
		double L_1172 = L_1171->___y;
		double L_1173 = V_78;
		double L_1174 = V_79;
		bool L_1175;
		L_1175 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1166, L_1168, L_1170, L_1172, L_1173, L_1174, NULL);
		if (!L_1175)
		{
			goto IL_1545;
		}
	}
	{
		double L_1176 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1177 = V_24;
		double L_1178 = L_1177->___x;
		double L_1179 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1180 = V_24;
		double L_1181 = L_1180->___x;
		double L_1182 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1183 = V_24;
		double L_1184 = L_1183->___y;
		double L_1185 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1186 = V_24;
		double L_1187 = L_1186->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1188;
		L_1188 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1176, L_1178)), ((double)il2cpp_codegen_subtract(L_1179, L_1181)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1182, L_1184)), ((double)il2cpp_codegen_subtract(L_1185, L_1187)))))));
		V_58 = L_1188;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1189 = V_24;
		double L_1190 = L_1189->___x;
		double L_1191 = V_78;
		V_56 = ((double)il2cpp_codegen_subtract(L_1190, L_1191));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1192 = V_24;
		double L_1193 = L_1192->___y;
		double L_1194 = V_79;
		V_57 = ((double)il2cpp_codegen_subtract(L_1193, L_1194));
		double L_1195 = V_56;
		double L_1196 = V_58;
		V_56 = ((double)(L_1195/L_1196));
		double L_1197 = V_57;
		double L_1198 = V_58;
		V_57 = ((double)(L_1197/L_1198));
		double L_1199 = V_78;
		double L_1200 = V_56;
		double L_1201 = V_59;
		double L_1202 = V_17;
		double L_1203;
		L_1203 = sqrt(L_1202);
		V_78 = ((double)il2cpp_codegen_add(L_1199, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1200, L_1201)), L_1203))));
		double L_1204 = V_79;
		double L_1205 = V_57;
		double L_1206 = V_59;
		double L_1207 = V_17;
		double L_1208;
		L_1208 = sqrt(L_1207);
		V_79 = ((double)il2cpp_codegen_add(L_1204, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1205, L_1206)), L_1208))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1209 = V_21;
		double L_1210 = L_1209->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1211 = V_21;
		double L_1212 = L_1211->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1213 = V_22;
		double L_1214 = L_1213->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1215 = V_22;
		double L_1216 = L_1215->___y;
		double L_1217 = V_78;
		double L_1218 = V_79;
		bool L_1219;
		L_1219 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1210, L_1212, L_1214, L_1216, L_1217, L_1218, NULL);
		if (!L_1219)
		{
			goto IL_152a;
		}
	}
	{
		double L_1220 = V_11;
		V_69 = L_1220;
		double L_1221 = V_12;
		V_70 = L_1221;
		goto IL_18e8;
	}

IL_152a:
	{
		double L_1222 = V_78;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1223 = ___0_torg;
		double L_1224 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1223)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1222, L_1224));
		double L_1225 = V_79;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1226 = ___0_torg;
		double L_1227 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1226)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1225, L_1227));
		goto IL_18e8;
	}

IL_1545:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1228 = V_83;
		int32_t L_1229 = 2;
		double L_1230 = (L_1228)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1229));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1231 = ___0_torg;
		double L_1232 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1231)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1230, L_1232));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1233 = V_83;
		int32_t L_1234 = 3;
		double L_1235 = (L_1233)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1234));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1236 = ___0_torg;
		double L_1237 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1236)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1235, L_1237));
		goto IL_18e8;
	}

IL_1564:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1238 = V_21;
		double L_1239 = L_1238->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1240 = V_21;
		double L_1241 = L_1240->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1242 = V_22;
		double L_1243 = L_1242->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1244 = V_22;
		double L_1245 = L_1244->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1246 = V_25;
		double L_1247 = L_1246->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1248 = V_25;
		double L_1249 = L_1248->___y;
		bool L_1250;
		L_1250 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1239, L_1241, L_1243, L_1245, L_1247, L_1249, NULL);
		if (!L_1250)
		{
			goto IL_15a3;
		}
	}
	{
		double L_1251 = V_11;
		V_69 = L_1251;
		double L_1252 = V_12;
		V_70 = L_1252;
		goto IL_18e8;
	}

IL_15a3:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1253 = V_55;
		int32_t L_1254 = 2;
		double L_1255 = (L_1253)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1254));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1256 = ___0_torg;
		double L_1257 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1256)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1255, L_1257));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1258 = V_55;
		int32_t L_1259 = 3;
		double L_1260 = (L_1258)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1259));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1261 = ___0_torg;
		double L_1262 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1261)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1260, L_1262));
		goto IL_18e8;
	}

IL_15c2:
	{
		double L_1263 = V_52;
		double L_1264 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1265 = V_24;
		double L_1266 = L_1265->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1267 = V_24;
		double L_1268 = L_1267->___y;
		double L_1269 = V_78;
		double L_1270 = V_79;
		NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981(__this, L_1263, L_1264, L_1266, L_1268, L_1269, L_1270, (&V_83), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1271 = V_83;
		int32_t L_1272 = 0;
		double L_1273 = (L_1271)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1272));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1274;
		L_1274 = fabs(((double)il2cpp_codegen_subtract(L_1273, (1.0))));
		if ((!(((double)L_1274) <= ((double)(1.0E-50)))))
		{
			goto IL_17e1;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1275 = V_82;
		int32_t L_1276 = 0;
		double L_1277 = (L_1275)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1276));
		if ((!(((double)L_1277) > ((double)(0.0)))))
		{
			goto IL_17e1;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1278 = V_20;
		double L_1279 = L_1278->___x;
		double L_1280 = V_86;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1281 = V_20;
		double L_1282 = L_1281->___x;
		double L_1283 = V_86;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1284 = V_20;
		double L_1285 = L_1284->___y;
		double L_1286 = V_87;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1287 = V_20;
		double L_1288 = L_1287->___y;
		double L_1289 = V_87;
		double L_1290 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1291 = V_20;
		double L_1292 = L_1291->___x;
		double L_1293 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1294 = V_20;
		double L_1295 = L_1294->___x;
		double L_1296 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1297 = V_20;
		double L_1298 = L_1297->___y;
		double L_1299 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1300 = V_20;
		double L_1301 = L_1300->___y;
		double L_1302 = V_79;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1279, L_1280)), ((double)il2cpp_codegen_subtract(L_1282, L_1283)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1285, L_1286)), ((double)il2cpp_codegen_subtract(L_1288, L_1289))))))) > ((double)((double)il2cpp_codegen_multiply(L_1290, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1292, L_1293)), ((double)il2cpp_codegen_subtract(L_1295, L_1296)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1298, L_1299)), ((double)il2cpp_codegen_subtract(L_1301, L_1302))))))))))))
		{
			goto IL_16cb;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1303 = V_21;
		double L_1304 = L_1303->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1305 = V_21;
		double L_1306 = L_1305->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1307 = V_22;
		double L_1308 = L_1307->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1309 = V_22;
		double L_1310 = L_1309->___y;
		double L_1311 = V_86;
		double L_1312 = V_87;
		bool L_1313;
		L_1313 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1304, L_1306, L_1308, L_1310, L_1311, L_1312, NULL);
		if (!L_1313)
		{
			goto IL_16cb;
		}
	}
	{
		double L_1314 = V_86;
		double L_1315 = V_87;
		double L_1316;
		L_1316 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_1314, L_1315, (&V_41), NULL);
		double L_1317 = V_78;
		double L_1318 = V_79;
		double L_1319;
		L_1319 = NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C(__this, L_1317, L_1318, (&V_41), NULL);
		if ((!(((double)L_1316) > ((double)L_1319))))
		{
			goto IL_16cb;
		}
	}
	{
		double L_1320 = V_86;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1321 = ___0_torg;
		double L_1322 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1321)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1320, L_1322));
		double L_1323 = V_87;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1324 = ___0_torg;
		double L_1325 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1324)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1323, L_1325));
		goto IL_18e8;
	}

IL_16cb:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1326 = V_22;
		double L_1327 = L_1326->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1328 = V_22;
		double L_1329 = L_1328->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1330 = V_21;
		double L_1331 = L_1330->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1332 = V_21;
		double L_1333 = L_1332->___y;
		double L_1334 = V_78;
		double L_1335 = V_79;
		bool L_1336;
		L_1336 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1327, L_1329, L_1331, L_1333, L_1334, L_1335, NULL);
		if (!L_1336)
		{
			goto IL_17c2;
		}
	}
	{
		double L_1337 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1338 = V_24;
		double L_1339 = L_1338->___x;
		double L_1340 = V_78;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1341 = V_24;
		double L_1342 = L_1341->___x;
		double L_1343 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1344 = V_24;
		double L_1345 = L_1344->___y;
		double L_1346 = V_79;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1347 = V_24;
		double L_1348 = L_1347->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1349;
		L_1349 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1337, L_1339)), ((double)il2cpp_codegen_subtract(L_1340, L_1342)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1343, L_1345)), ((double)il2cpp_codegen_subtract(L_1346, L_1348)))))));
		V_58 = L_1349;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1350 = V_24;
		double L_1351 = L_1350->___x;
		double L_1352 = V_78;
		V_56 = ((double)il2cpp_codegen_subtract(L_1351, L_1352));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1353 = V_24;
		double L_1354 = L_1353->___y;
		double L_1355 = V_79;
		V_57 = ((double)il2cpp_codegen_subtract(L_1354, L_1355));
		double L_1356 = V_56;
		double L_1357 = V_58;
		V_56 = ((double)(L_1356/L_1357));
		double L_1358 = V_57;
		double L_1359 = V_58;
		V_57 = ((double)(L_1358/L_1359));
		double L_1360 = V_78;
		double L_1361 = V_56;
		double L_1362 = V_59;
		double L_1363 = V_17;
		double L_1364;
		L_1364 = sqrt(L_1363);
		V_78 = ((double)il2cpp_codegen_add(L_1360, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1361, L_1362)), L_1364))));
		double L_1365 = V_79;
		double L_1366 = V_57;
		double L_1367 = V_59;
		double L_1368 = V_17;
		double L_1369;
		L_1369 = sqrt(L_1368);
		V_79 = ((double)il2cpp_codegen_add(L_1365, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1366, L_1367)), L_1369))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1370 = V_21;
		double L_1371 = L_1370->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1372 = V_21;
		double L_1373 = L_1372->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1374 = V_22;
		double L_1375 = L_1374->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1376 = V_22;
		double L_1377 = L_1376->___y;
		double L_1378 = V_78;
		double L_1379 = V_79;
		bool L_1380;
		L_1380 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1371, L_1373, L_1375, L_1377, L_1378, L_1379, NULL);
		if (!L_1380)
		{
			goto IL_17a7;
		}
	}
	{
		double L_1381 = V_11;
		V_69 = L_1381;
		double L_1382 = V_12;
		V_70 = L_1382;
		goto IL_18e8;
	}

IL_17a7:
	{
		double L_1383 = V_78;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1384 = ___0_torg;
		double L_1385 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1384)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1383, L_1385));
		double L_1386 = V_79;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1387 = ___0_torg;
		double L_1388 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1387)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1386, L_1388));
		goto IL_18e8;
	}

IL_17c2:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1389 = V_83;
		int32_t L_1390 = 2;
		double L_1391 = (L_1389)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1390));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1392 = ___0_torg;
		double L_1393 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1392)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1391, L_1393));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1394 = V_83;
		int32_t L_1395 = 3;
		double L_1396 = (L_1394)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1395));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1397 = ___0_torg;
		double L_1398 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1397)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1396, L_1398));
		goto IL_18e8;
	}

IL_17e1:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1399 = V_21;
		double L_1400 = L_1399->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1401 = V_21;
		double L_1402 = L_1401->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1403 = V_22;
		double L_1404 = L_1403->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1405 = V_22;
		double L_1406 = L_1405->___y;
		double L_1407 = V_52;
		double L_1408 = V_53;
		bool L_1409;
		L_1409 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1400, L_1402, L_1404, L_1406, L_1407, L_1408, NULL);
		if (!L_1409)
		{
			goto IL_18d2;
		}
	}
	{
		double L_1410 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1411 = V_24;
		double L_1412 = L_1411->___x;
		double L_1413 = V_52;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1414 = V_24;
		double L_1415 = L_1414->___x;
		double L_1416 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1417 = V_24;
		double L_1418 = L_1417->___y;
		double L_1419 = V_53;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1420 = V_24;
		double L_1421 = L_1420->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1422;
		L_1422 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1410, L_1412)), ((double)il2cpp_codegen_subtract(L_1413, L_1415)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1416, L_1418)), ((double)il2cpp_codegen_subtract(L_1419, L_1421)))))));
		V_58 = L_1422;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1423 = V_24;
		double L_1424 = L_1423->___x;
		double L_1425 = V_52;
		V_56 = ((double)il2cpp_codegen_subtract(L_1424, L_1425));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1426 = V_24;
		double L_1427 = L_1426->___y;
		double L_1428 = V_53;
		V_57 = ((double)il2cpp_codegen_subtract(L_1427, L_1428));
		double L_1429 = V_56;
		double L_1430 = V_58;
		V_56 = ((double)(L_1429/L_1430));
		double L_1431 = V_57;
		double L_1432 = V_58;
		V_57 = ((double)(L_1431/L_1432));
		double L_1433 = V_52;
		double L_1434 = V_56;
		double L_1435 = V_59;
		double L_1436 = V_17;
		double L_1437;
		L_1437 = sqrt(L_1436);
		V_52 = ((double)il2cpp_codegen_add(L_1433, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1434, L_1435)), L_1437))));
		double L_1438 = V_53;
		double L_1439 = V_57;
		double L_1440 = V_59;
		double L_1441 = V_17;
		double L_1442;
		L_1442 = sqrt(L_1441);
		V_53 = ((double)il2cpp_codegen_add(L_1438, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1439, L_1440)), L_1442))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1443 = V_21;
		double L_1444 = L_1443->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1445 = V_21;
		double L_1446 = L_1445->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1447 = V_22;
		double L_1448 = L_1447->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1449 = V_22;
		double L_1450 = L_1449->___y;
		double L_1451 = V_52;
		double L_1452 = V_53;
		bool L_1453;
		L_1453 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1444, L_1446, L_1448, L_1450, L_1451, L_1452, NULL);
		if (!L_1453)
		{
			goto IL_18ba;
		}
	}
	{
		double L_1454 = V_11;
		V_69 = L_1454;
		double L_1455 = V_12;
		V_70 = L_1455;
		goto IL_18e8;
	}

IL_18ba:
	{
		double L_1456 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1457 = ___0_torg;
		double L_1458 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1457)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1456, L_1458));
		double L_1459 = V_53;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1460 = ___0_torg;
		double L_1461 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1460)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1459, L_1461));
		goto IL_18e8;
	}

IL_18d2:
	{
		double L_1462 = V_52;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1463 = ___0_torg;
		double L_1464 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1463)->___x;
		V_69 = ((double)il2cpp_codegen_subtract(L_1462, L_1464));
		double L_1465 = V_53;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1466 = ___0_torg;
		double L_1467 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1466)->___y;
		V_70 = ((double)il2cpp_codegen_subtract(L_1465, L_1467));
	}

IL_18e8:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1468 = V_20;
		double L_1469 = L_1468->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1470 = V_24;
		double L_1471 = L_1470->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1472 = V_20;
		double L_1473 = L_1472->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1474 = V_24;
		double L_1475 = L_1474->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1476 = V_20;
		double L_1477 = L_1476->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1478 = V_24;
		double L_1479 = L_1478->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1480 = V_20;
		double L_1481 = L_1480->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1482 = V_24;
		double L_1483 = L_1482->___y;
		double L_1484 = V_60;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1485 = V_20;
		double L_1486 = L_1485->___x;
		double L_1487 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1488 = ___0_torg;
		double L_1489 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1488)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1490 = V_20;
		double L_1491 = L_1490->___x;
		double L_1492 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1493 = ___0_torg;
		double L_1494 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1493)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1495 = V_20;
		double L_1496 = L_1495->___y;
		double L_1497 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1498 = ___0_torg;
		double L_1499 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1498)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1500 = V_20;
		double L_1501 = L_1500->___y;
		double L_1502 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1503 = ___0_torg;
		double L_1504 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1503)->___y;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1469, L_1471)), ((double)il2cpp_codegen_subtract(L_1473, L_1475)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1477, L_1479)), ((double)il2cpp_codegen_subtract(L_1481, L_1483))))))) > ((double)((double)il2cpp_codegen_multiply(L_1484, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1486, ((double)il2cpp_codegen_add(L_1487, L_1489)))), ((double)il2cpp_codegen_subtract(L_1491, ((double)il2cpp_codegen_add(L_1492, L_1494)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1496, ((double)il2cpp_codegen_add(L_1497, L_1499)))), ((double)il2cpp_codegen_subtract(L_1501, ((double)il2cpp_codegen_add(L_1502, L_1504))))))))))))))
		{
			goto IL_197b;
		}
	}
	{
		double L_1505 = V_11;
		V_69 = L_1505;
		double L_1506 = V_12;
		V_70 = L_1506;
	}

IL_197b:
	{
		bool L_1507 = V_28;
		if (!L_1507)
		{
			goto IL_1bdb;
		}
	}
	{
		bool L_1508 = V_95;
		bool L_1509 = V_96;
		if (!((int32_t)((int32_t)L_1508&(int32_t)L_1509)))
		{
			goto IL_19fe;
		}
	}
	{
		double L_1510 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1511 = V_20;
		double L_1512 = L_1511->___x;
		double L_1513 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1514 = V_20;
		double L_1515 = L_1514->___x;
		double L_1516 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1517 = V_20;
		double L_1518 = L_1517->___y;
		double L_1519 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1520 = V_20;
		double L_1521 = L_1520->___y;
		double L_1522 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1523 = V_20;
		double L_1524 = L_1523->___x;
		double L_1525 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1526 = V_20;
		double L_1527 = L_1526->___x;
		double L_1528 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1529 = V_20;
		double L_1530 = L_1529->___y;
		double L_1531 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1532 = V_20;
		double L_1533 = L_1532->___y;
		double L_1534 = V_51;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1510, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1512, L_1513)), ((double)il2cpp_codegen_subtract(L_1515, L_1516)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1518, L_1519)), ((double)il2cpp_codegen_subtract(L_1521, L_1522))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1524, L_1525)), ((double)il2cpp_codegen_subtract(L_1527, L_1528)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1530, L_1531)), ((double)il2cpp_codegen_subtract(L_1533, L_1534))))))))))
		{
			goto IL_19f1;
		}
	}
	{
		double L_1535 = V_69;
		V_11 = L_1535;
		double L_1536 = V_70;
		V_12 = L_1536;
		goto IL_1e2c;
	}

IL_19f1:
	{
		double L_1537 = V_67;
		V_11 = L_1537;
		double L_1538 = V_68;
		V_12 = L_1538;
		goto IL_1e2c;
	}

IL_19fe:
	{
		bool L_1539 = V_95;
		if (!L_1539)
		{
			goto IL_1a96;
		}
	}
	{
		double L_1540 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1541 = V_20;
		double L_1542 = L_1541->___x;
		double L_1543 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1544 = ___0_torg;
		double L_1545 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1544)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1546 = V_20;
		double L_1547 = L_1546->___x;
		double L_1548 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1549 = ___0_torg;
		double L_1550 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1549)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1551 = V_20;
		double L_1552 = L_1551->___y;
		double L_1553 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1554 = ___0_torg;
		double L_1555 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1554)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1556 = V_20;
		double L_1557 = L_1556->___y;
		double L_1558 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1559 = ___0_torg;
		double L_1560 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1559)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1561 = V_20;
		double L_1562 = L_1561->___x;
		double L_1563 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1564 = V_20;
		double L_1565 = L_1564->___x;
		double L_1566 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1567 = V_20;
		double L_1568 = L_1567->___y;
		double L_1569 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1570 = V_20;
		double L_1571 = L_1570->___y;
		double L_1572 = V_51;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1540, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1542, ((double)il2cpp_codegen_add(L_1543, L_1545)))), ((double)il2cpp_codegen_subtract(L_1547, ((double)il2cpp_codegen_add(L_1548, L_1550)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1552, ((double)il2cpp_codegen_add(L_1553, L_1555)))), ((double)il2cpp_codegen_subtract(L_1557, ((double)il2cpp_codegen_add(L_1558, L_1560))))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1562, L_1563)), ((double)il2cpp_codegen_subtract(L_1565, L_1566)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1568, L_1569)), ((double)il2cpp_codegen_subtract(L_1571, L_1572))))))))))
		{
			goto IL_1a89;
		}
	}
	{
		double L_1573 = V_69;
		V_11 = L_1573;
		double L_1574 = V_70;
		V_12 = L_1574;
		goto IL_1e2c;
	}

IL_1a89:
	{
		double L_1575 = V_67;
		V_11 = L_1575;
		double L_1576 = V_68;
		V_12 = L_1576;
		goto IL_1e2c;
	}

IL_1a96:
	{
		bool L_1577 = V_96;
		if (!L_1577)
		{
			goto IL_1b2e;
		}
	}
	{
		double L_1578 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1579 = V_20;
		double L_1580 = L_1579->___x;
		double L_1581 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1582 = V_20;
		double L_1583 = L_1582->___x;
		double L_1584 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1585 = V_20;
		double L_1586 = L_1585->___y;
		double L_1587 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1588 = V_20;
		double L_1589 = L_1588->___y;
		double L_1590 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1591 = V_20;
		double L_1592 = L_1591->___x;
		double L_1593 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1594 = ___0_torg;
		double L_1595 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1594)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1596 = V_20;
		double L_1597 = L_1596->___x;
		double L_1598 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1599 = ___0_torg;
		double L_1600 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1599)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1601 = V_20;
		double L_1602 = L_1601->___y;
		double L_1603 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1604 = ___0_torg;
		double L_1605 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1604)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1606 = V_20;
		double L_1607 = L_1606->___y;
		double L_1608 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1609 = ___0_torg;
		double L_1610 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1609)->___y;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1578, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1580, L_1581)), ((double)il2cpp_codegen_subtract(L_1583, L_1584)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1586, L_1587)), ((double)il2cpp_codegen_subtract(L_1589, L_1590))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1592, ((double)il2cpp_codegen_add(L_1593, L_1595)))), ((double)il2cpp_codegen_subtract(L_1597, ((double)il2cpp_codegen_add(L_1598, L_1600)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1602, ((double)il2cpp_codegen_add(L_1603, L_1605)))), ((double)il2cpp_codegen_subtract(L_1607, ((double)il2cpp_codegen_add(L_1608, L_1610))))))))))))
		{
			goto IL_1b21;
		}
	}
	{
		double L_1611 = V_69;
		V_11 = L_1611;
		double L_1612 = V_70;
		V_12 = L_1612;
		goto IL_1e2c;
	}

IL_1b21:
	{
		double L_1613 = V_67;
		V_11 = L_1613;
		double L_1614 = V_68;
		V_12 = L_1614;
		goto IL_1e2c;
	}

IL_1b2e:
	{
		double L_1615 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1616 = V_20;
		double L_1617 = L_1616->___x;
		double L_1618 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1619 = ___0_torg;
		double L_1620 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1619)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1621 = V_20;
		double L_1622 = L_1621->___x;
		double L_1623 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1624 = ___0_torg;
		double L_1625 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1624)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1626 = V_20;
		double L_1627 = L_1626->___y;
		double L_1628 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1629 = ___0_torg;
		double L_1630 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1629)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1631 = V_20;
		double L_1632 = L_1631->___y;
		double L_1633 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1634 = ___0_torg;
		double L_1635 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1634)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1636 = V_20;
		double L_1637 = L_1636->___x;
		double L_1638 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1639 = ___0_torg;
		double L_1640 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1639)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1641 = V_20;
		double L_1642 = L_1641->___x;
		double L_1643 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1644 = ___0_torg;
		double L_1645 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1644)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1646 = V_20;
		double L_1647 = L_1646->___y;
		double L_1648 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1649 = ___0_torg;
		double L_1650 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1649)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1651 = V_20;
		double L_1652 = L_1651->___y;
		double L_1653 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1654 = ___0_torg;
		double L_1655 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1654)->___y;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1615, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1617, ((double)il2cpp_codegen_add(L_1618, L_1620)))), ((double)il2cpp_codegen_subtract(L_1622, ((double)il2cpp_codegen_add(L_1623, L_1625)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1627, ((double)il2cpp_codegen_add(L_1628, L_1630)))), ((double)il2cpp_codegen_subtract(L_1632, ((double)il2cpp_codegen_add(L_1633, L_1635))))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1637, ((double)il2cpp_codegen_add(L_1638, L_1640)))), ((double)il2cpp_codegen_subtract(L_1642, ((double)il2cpp_codegen_add(L_1643, L_1645)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1647, ((double)il2cpp_codegen_add(L_1648, L_1650)))), ((double)il2cpp_codegen_subtract(L_1652, ((double)il2cpp_codegen_add(L_1653, L_1655))))))))))))
		{
			goto IL_1bce;
		}
	}
	{
		double L_1656 = V_69;
		V_11 = L_1656;
		double L_1657 = V_70;
		V_12 = L_1657;
		goto IL_1e2c;
	}

IL_1bce:
	{
		double L_1658 = V_67;
		V_11 = L_1658;
		double L_1659 = V_68;
		V_12 = L_1659;
		goto IL_1e2c;
	}

IL_1bdb:
	{
		bool L_1660 = V_95;
		bool L_1661 = V_96;
		if (!((int32_t)((int32_t)L_1660&(int32_t)L_1661)))
		{
			goto IL_1c57;
		}
	}
	{
		double L_1662 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1663 = V_20;
		double L_1664 = L_1663->___x;
		double L_1665 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1666 = V_20;
		double L_1667 = L_1666->___x;
		double L_1668 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1669 = V_20;
		double L_1670 = L_1669->___y;
		double L_1671 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1672 = V_20;
		double L_1673 = L_1672->___y;
		double L_1674 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1675 = V_20;
		double L_1676 = L_1675->___x;
		double L_1677 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1678 = V_20;
		double L_1679 = L_1678->___x;
		double L_1680 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1681 = V_20;
		double L_1682 = L_1681->___y;
		double L_1683 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1684 = V_20;
		double L_1685 = L_1684->___y;
		double L_1686 = V_51;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1662, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1664, L_1665)), ((double)il2cpp_codegen_subtract(L_1667, L_1668)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1670, L_1671)), ((double)il2cpp_codegen_subtract(L_1673, L_1674))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1676, L_1677)), ((double)il2cpp_codegen_subtract(L_1679, L_1680)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1682, L_1683)), ((double)il2cpp_codegen_subtract(L_1685, L_1686))))))))))
		{
			goto IL_1c4a;
		}
	}
	{
		double L_1687 = V_69;
		V_11 = L_1687;
		double L_1688 = V_70;
		V_12 = L_1688;
		goto IL_1e2c;
	}

IL_1c4a:
	{
		double L_1689 = V_67;
		V_11 = L_1689;
		double L_1690 = V_68;
		V_12 = L_1690;
		goto IL_1e2c;
	}

IL_1c57:
	{
		bool L_1691 = V_95;
		if (!L_1691)
		{
			goto IL_1cef;
		}
	}
	{
		double L_1692 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1693 = V_20;
		double L_1694 = L_1693->___x;
		double L_1695 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1696 = ___0_torg;
		double L_1697 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1696)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1698 = V_20;
		double L_1699 = L_1698->___x;
		double L_1700 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1701 = ___0_torg;
		double L_1702 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1701)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1703 = V_20;
		double L_1704 = L_1703->___y;
		double L_1705 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1706 = ___0_torg;
		double L_1707 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1706)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1708 = V_20;
		double L_1709 = L_1708->___y;
		double L_1710 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1711 = ___0_torg;
		double L_1712 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1711)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1713 = V_20;
		double L_1714 = L_1713->___x;
		double L_1715 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1716 = V_20;
		double L_1717 = L_1716->___x;
		double L_1718 = V_50;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1719 = V_20;
		double L_1720 = L_1719->___y;
		double L_1721 = V_51;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1722 = V_20;
		double L_1723 = L_1722->___y;
		double L_1724 = V_51;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1692, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1694, ((double)il2cpp_codegen_add(L_1695, L_1697)))), ((double)il2cpp_codegen_subtract(L_1699, ((double)il2cpp_codegen_add(L_1700, L_1702)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1704, ((double)il2cpp_codegen_add(L_1705, L_1707)))), ((double)il2cpp_codegen_subtract(L_1709, ((double)il2cpp_codegen_add(L_1710, L_1712))))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1714, L_1715)), ((double)il2cpp_codegen_subtract(L_1717, L_1718)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1720, L_1721)), ((double)il2cpp_codegen_subtract(L_1723, L_1724))))))))))
		{
			goto IL_1ce2;
		}
	}
	{
		double L_1725 = V_69;
		V_11 = L_1725;
		double L_1726 = V_70;
		V_12 = L_1726;
		goto IL_1e2c;
	}

IL_1ce2:
	{
		double L_1727 = V_67;
		V_11 = L_1727;
		double L_1728 = V_68;
		V_12 = L_1728;
		goto IL_1e2c;
	}

IL_1cef:
	{
		bool L_1729 = V_96;
		if (!L_1729)
		{
			goto IL_1d87;
		}
	}
	{
		double L_1730 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1731 = V_20;
		double L_1732 = L_1731->___x;
		double L_1733 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1734 = V_20;
		double L_1735 = L_1734->___x;
		double L_1736 = V_71;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1737 = V_20;
		double L_1738 = L_1737->___y;
		double L_1739 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1740 = V_20;
		double L_1741 = L_1740->___y;
		double L_1742 = V_72;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1743 = V_20;
		double L_1744 = L_1743->___x;
		double L_1745 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1746 = ___0_torg;
		double L_1747 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1746)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1748 = V_20;
		double L_1749 = L_1748->___x;
		double L_1750 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1751 = ___0_torg;
		double L_1752 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1751)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1753 = V_20;
		double L_1754 = L_1753->___y;
		double L_1755 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1756 = ___0_torg;
		double L_1757 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1756)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1758 = V_20;
		double L_1759 = L_1758->___y;
		double L_1760 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1761 = ___0_torg;
		double L_1762 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1761)->___y;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1730, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1732, L_1733)), ((double)il2cpp_codegen_subtract(L_1735, L_1736)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1738, L_1739)), ((double)il2cpp_codegen_subtract(L_1741, L_1742))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1744, ((double)il2cpp_codegen_add(L_1745, L_1747)))), ((double)il2cpp_codegen_subtract(L_1749, ((double)il2cpp_codegen_add(L_1750, L_1752)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1754, ((double)il2cpp_codegen_add(L_1755, L_1757)))), ((double)il2cpp_codegen_subtract(L_1759, ((double)il2cpp_codegen_add(L_1760, L_1762))))))))))))
		{
			goto IL_1d7a;
		}
	}
	{
		double L_1763 = V_69;
		V_11 = L_1763;
		double L_1764 = V_70;
		V_12 = L_1764;
		goto IL_1e2c;
	}

IL_1d7a:
	{
		double L_1765 = V_67;
		V_11 = L_1765;
		double L_1766 = V_68;
		V_12 = L_1766;
		goto IL_1e2c;
	}

IL_1d87:
	{
		double L_1767 = V_61;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1768 = V_20;
		double L_1769 = L_1768->___x;
		double L_1770 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1771 = ___0_torg;
		double L_1772 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1771)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1773 = V_20;
		double L_1774 = L_1773->___x;
		double L_1775 = V_69;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1776 = ___0_torg;
		double L_1777 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1776)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1778 = V_20;
		double L_1779 = L_1778->___y;
		double L_1780 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1781 = ___0_torg;
		double L_1782 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1781)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1783 = V_20;
		double L_1784 = L_1783->___y;
		double L_1785 = V_70;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1786 = ___0_torg;
		double L_1787 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1786)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1788 = V_20;
		double L_1789 = L_1788->___x;
		double L_1790 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1791 = ___0_torg;
		double L_1792 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1791)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1793 = V_20;
		double L_1794 = L_1793->___x;
		double L_1795 = V_67;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1796 = ___0_torg;
		double L_1797 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1796)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1798 = V_20;
		double L_1799 = L_1798->___y;
		double L_1800 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1801 = ___0_torg;
		double L_1802 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1801)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1803 = V_20;
		double L_1804 = L_1803->___y;
		double L_1805 = V_68;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1806 = ___0_torg;
		double L_1807 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1806)->___y;
		if ((!(((double)((double)il2cpp_codegen_multiply(L_1767, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1769, ((double)il2cpp_codegen_add(L_1770, L_1772)))), ((double)il2cpp_codegen_subtract(L_1774, ((double)il2cpp_codegen_add(L_1775, L_1777)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1779, ((double)il2cpp_codegen_add(L_1780, L_1782)))), ((double)il2cpp_codegen_subtract(L_1784, ((double)il2cpp_codegen_add(L_1785, L_1787))))))))))) > ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1789, ((double)il2cpp_codegen_add(L_1790, L_1792)))), ((double)il2cpp_codegen_subtract(L_1794, ((double)il2cpp_codegen_add(L_1795, L_1797)))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1799, ((double)il2cpp_codegen_add(L_1800, L_1802)))), ((double)il2cpp_codegen_subtract(L_1804, ((double)il2cpp_codegen_add(L_1805, L_1807))))))))))))
		{
			goto IL_1e24;
		}
	}
	{
		double L_1808 = V_69;
		V_11 = L_1808;
		double L_1809 = V_70;
		V_12 = L_1809;
		goto IL_1e2c;
	}

IL_1e24:
	{
		double L_1810 = V_67;
		V_11 = L_1810;
		double L_1811 = V_68;
		V_12 = L_1811;
	}

IL_1e2c:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1812 = (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)il2cpp_codegen_object_new(Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		Point__ctor_m2891563D3FADB4CC62ADD7C6E28B20F69E7F9656(L_1812, NULL);
		V_97 = L_1812;
		int32_t L_1813 = V_62;
		if ((((int32_t)L_1813) > ((int32_t)0)))
		{
			goto IL_1e5a;
		}
	}
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1814 = V_97;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1815 = ___0_torg;
		double L_1816 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1815)->___x;
		double L_1817 = V_11;
		L_1814->___x = ((double)il2cpp_codegen_add(L_1816, L_1817));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1818 = V_97;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_1819 = ___0_torg;
		double L_1820 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_1819)->___y;
		double L_1821 = V_12;
		L_1818->___y = ((double)il2cpp_codegen_add(L_1820, L_1821));
		goto IL_1e72;
	}

IL_1e5a:
	{
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1822 = V_97;
		double L_1823 = V_64;
		double L_1824 = V_11;
		L_1822->___x = ((double)il2cpp_codegen_add(L_1823, L_1824));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1825 = V_97;
		double L_1826 = V_65;
		double L_1827 = V_12;
		L_1825->___y = ((double)il2cpp_codegen_add(L_1826, L_1827));
	}

IL_1e72:
	{
		double* L_1828 = ___3_xi;
		double L_1829 = V_4;
		double L_1830 = V_11;
		double L_1831 = V_3;
		double L_1832 = V_12;
		double L_1833 = V_10;
		*((double*)L_1828) = (double)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1829, L_1830)), ((double)il2cpp_codegen_multiply(L_1831, L_1832)))), ((double)il2cpp_codegen_multiply((2.0), L_1833))));
		double* L_1834 = ___4_eta;
		double L_1835 = V_1;
		double L_1836 = V_12;
		double L_1837 = V_2;
		double L_1838 = V_11;
		double L_1839 = V_10;
		*((double*)L_1834) = (double)((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1835, L_1836)), ((double)il2cpp_codegen_multiply(L_1837, L_1838)))), ((double)il2cpp_codegen_multiply((2.0), L_1839))));
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_1840 = V_97;
		return L_1840;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_LongestShortestEdge_mBE0DD54D7A05480723423515CDB36A130F6C7133 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_aodist, double ___1_dadist, double ___2_dodist, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		double L_0 = ___2_dodist;
		double L_1 = ___0_aodist;
		if ((!(((double)L_0) < ((double)L_1))))
		{
			goto IL_0020;
		}
	}
	{
		double L_2 = ___2_dodist;
		double L_3 = ___1_dadist;
		if ((!(((double)L_2) < ((double)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		V_1 = 3;
		double L_4 = ___0_aodist;
		double L_5 = ___1_dadist;
		if ((!(((double)L_4) < ((double)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		V_0 = 2;
		V_2 = 1;
		goto IL_0046;
	}

IL_001a:
	{
		V_0 = 1;
		V_2 = 2;
		goto IL_0046;
	}

IL_0020:
	{
		double L_6 = ___0_aodist;
		double L_7 = ___1_dadist;
		if ((!(((double)L_6) < ((double)L_7))))
		{
			goto IL_0036;
		}
	}
	{
		V_1 = 1;
		double L_8 = ___2_dodist;
		double L_9 = ___1_dadist;
		if ((!(((double)L_8) < ((double)L_9))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 2;
		V_2 = 3;
		goto IL_0046;
	}

IL_0030:
	{
		V_0 = 3;
		V_2 = 2;
		goto IL_0046;
	}

IL_0036:
	{
		V_1 = 2;
		double L_10 = ___0_aodist;
		double L_11 = ___2_dodist;
		if ((!(((double)L_10) < ((double)L_11))))
		{
			goto IL_0042;
		}
	}
	{
		V_0 = 3;
		V_2 = 1;
		goto IL_0046;
	}

IL_0042:
	{
		V_0 = 1;
		V_2 = 3;
	}

IL_0046:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)100))), ((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)10))))), L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_DoSmoothing_mFCA29C04EA0714EA6D28A0342C5FC9D53F4207A8 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___0_badotri, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_torg, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_tdest, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___3_tapex, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___4_newloc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)6);
		V_3 = L_0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		V_8 = (bool)0;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_1 = ___0_badotri;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_2 = ___1_torg;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_3 = ___2_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_4 = ___3_tapex;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___points_p);
		int32_t L_6;
		L_6 = NewLocation_GetStarPoints_m575329253235F49C97EED2CAC76A380CF693D133(__this, L_1, L_2, L_3, L_4, 1, L_5, NULL);
		V_0 = L_6;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_7 = ___1_torg;
		int32_t L_8 = L_7->___type;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_10 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = __this->___points_p;
		bool L_12;
		L_12 = NewLocation_ValidPolygonAngles_m001F2307C35F4ACFF7A766F0BB90663B42E77FD2(__this, L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_00a1;
		}
	}
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_13 = __this->___behavior;
		double L_14;
		L_14 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_13, NULL);
		if ((!(((double)L_14) == ((double)(0.0)))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_15 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = __this->___points_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_17 = ___4_newloc;
		bool L_18;
		L_18 = NewLocation_GetWedgeIntersectionWithoutMaxAngle_m4EBBAE7BE77755BD7944D142F4B5F028C245E895(__this, L_15, L_16, L_17, NULL);
		V_8 = L_18;
		goto IL_0084;
	}

IL_0073:
	{
		int32_t L_19 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = __this->___points_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_21 = ___4_newloc;
		bool L_22;
		L_22 = NewLocation_GetWedgeIntersection_mE67A377BDAF04E111C87D07B3979DCC1EDBAC9EE(__this, L_19, L_20, L_21, NULL);
		V_8 = L_22;
	}

IL_0084:
	{
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_25 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_25);
		int32_t L_27 = 0;
		double L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_28);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_30 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_31 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_30);
		int32_t L_32 = 1;
		double L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_33);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		V_5 = 1;
	}

IL_00a1:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_35 = ___0_badotri;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_36 = ___1_torg;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_37 = ___2_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_38 = ___3_tapex;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_39 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___points_q);
		int32_t L_40;
		L_40 = NewLocation_GetStarPoints_m575329253235F49C97EED2CAC76A380CF693D133(__this, L_35, L_36, L_37, L_38, 2, L_39, NULL);
		V_1 = L_40;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_41 = ___2_tdest;
		int32_t L_42 = L_41->___type;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_44 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = __this->___points_q;
		bool L_46;
		L_46 = NewLocation_ValidPolygonAngles_m001F2307C35F4ACFF7A766F0BB90663B42E77FD2(__this, L_44, L_45, NULL);
		if (!L_46)
		{
			goto IL_0126;
		}
	}
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_47 = __this->___behavior;
		double L_48;
		L_48 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_47, NULL);
		if ((!(((double)L_48) == ((double)(0.0)))))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_49 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = __this->___points_q;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_51 = ___4_newloc;
		bool L_52;
		L_52 = NewLocation_GetWedgeIntersectionWithoutMaxAngle_m4EBBAE7BE77755BD7944D142F4B5F028C245E895(__this, L_49, L_50, L_51, NULL);
		V_8 = L_52;
		goto IL_0109;
	}

IL_00f8:
	{
		int32_t L_53 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_54 = __this->___points_q;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_55 = ___4_newloc;
		bool L_56;
		L_56 = NewLocation_GetWedgeIntersection_mE67A377BDAF04E111C87D07B3979DCC1EDBAC9EE(__this, L_53, L_54, L_55, NULL);
		V_8 = L_56;
	}

IL_0109:
	{
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_0126;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_58 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_59 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_60 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_59);
		int32_t L_61 = 0;
		double L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_62);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_63 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_64 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_65 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_64);
		int32_t L_66 = 1;
		double L_67 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_67);
		int32_t L_68 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		V_6 = 2;
	}

IL_0126:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_69 = ___0_badotri;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_70 = ___1_torg;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_71 = ___2_tdest;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_72 = ___3_tapex;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_73 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___points_r);
		int32_t L_74;
		L_74 = NewLocation_GetStarPoints_m575329253235F49C97EED2CAC76A380CF693D133(__this, L_69, L_70, L_71, L_72, 3, L_73, NULL);
		V_2 = L_74;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_75 = ___3_tapex;
		int32_t L_76 = L_75->___type;
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t L_77 = V_2;
		if (!L_77)
		{
			goto IL_01ac;
		}
	}
	{
		int32_t L_78 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_79 = __this->___points_r;
		bool L_80;
		L_80 = NewLocation_ValidPolygonAngles_m001F2307C35F4ACFF7A766F0BB90663B42E77FD2(__this, L_78, L_79, NULL);
		if (!L_80)
		{
			goto IL_01ac;
		}
	}
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_81 = __this->___behavior;
		double L_82;
		L_82 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_81, NULL);
		if ((!(((double)L_82) == ((double)(0.0)))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_83 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_84 = __this->___points_r;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_85 = ___4_newloc;
		bool L_86;
		L_86 = NewLocation_GetWedgeIntersectionWithoutMaxAngle_m4EBBAE7BE77755BD7944D142F4B5F028C245E895(__this, L_83, L_84, L_85, NULL);
		V_8 = L_86;
		goto IL_018f;
	}

IL_017e:
	{
		int32_t L_87 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_88 = __this->___points_r;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_89 = ___4_newloc;
		bool L_90;
		L_90 = NewLocation_GetWedgeIntersection_mE67A377BDAF04E111C87D07B3979DCC1EDBAC9EE(__this, L_87, L_88, L_89, NULL);
		V_8 = L_90;
	}

IL_018f:
	{
		bool L_91 = V_8;
		if (!L_91)
		{
			goto IL_01ac;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_92 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_93 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_94 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_93);
		int32_t L_95 = 0;
		double L_96 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95));
		(L_92)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)L_96);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_97 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_98 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_99 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_98);
		int32_t L_100 = 1;
		double L_101 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		(L_97)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (double)L_101);
		int32_t L_102 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		V_7 = 3;
	}

IL_01ac:
	{
		int32_t L_103 = V_4;
		if ((((int32_t)L_103) <= ((int32_t)0)))
		{
			goto IL_01f9;
		}
	}
	{
		int32_t L_104 = V_5;
		if ((((int32_t)L_104) <= ((int32_t)0)))
		{
			goto IL_01c9;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_105 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_106 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_105);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_107 = V_3;
		int32_t L_108 = 0;
		double L_109 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_109);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_110 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_111 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_110);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_112 = V_3;
		int32_t L_113 = 1;
		double L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_114);
		int32_t L_115 = V_5;
		return L_115;
	}

IL_01c9:
	{
		int32_t L_116 = V_6;
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_01e1;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_117 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_118 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_117);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_119 = V_3;
		int32_t L_120 = 2;
		double L_121 = (L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_120));
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_121);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_122 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_123 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_122);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_124 = V_3;
		int32_t L_125 = 3;
		double L_126 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_126);
		int32_t L_127 = V_6;
		return L_127;
	}

IL_01e1:
	{
		int32_t L_128 = V_7;
		if ((((int32_t)L_128) <= ((int32_t)0)))
		{
			goto IL_01f9;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_129 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_130 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_129);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_131 = V_3;
		int32_t L_132 = 4;
		double L_133 = (L_131)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		(L_130)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_133);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_134 = ___4_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_135 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_134);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_136 = V_3;
		int32_t L_137 = 5;
		double L_138 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_138);
		int32_t L_139 = V_7;
		return L_139;
	}

IL_01f9:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_GetStarPoints_m575329253235F49C97EED2CAC76A380CF693D133 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___0_badotri, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___1_p, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___2_q, Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* ___3_r, int32_t ___4_whichPoint, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___5_points, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_8 = NULL;
	int32_t V_9 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2));
		V_2 = (0.0);
		V_3 = (0.0);
		V_4 = (0.0);
		V_5 = (0.0);
		V_6 = (0.0);
		V_7 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		V_8 = L_0;
		V_9 = 0;
		int32_t L_1 = ___4_whichPoint;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_0101;
	}

IL_006d:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_2 = ___1_p;
		double L_3 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_2)->___x;
		V_2 = L_3;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_4 = ___1_p;
		double L_5 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_4)->___y;
		V_3 = L_5;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_6 = ___3_r;
		double L_7 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_6)->___x;
		V_4 = L_7;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_8 = ___3_r;
		double L_9 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_8)->___y;
		V_5 = L_9;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_10 = ___2_q;
		double L_11 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_10)->___x;
		V_6 = L_11;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_12 = ___2_q;
		double L_13 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_12)->___y;
		V_7 = L_13;
		goto IL_0101;
	}

IL_009f:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_14 = ___2_q;
		double L_15 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_14)->___x;
		V_2 = L_15;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_16 = ___2_q;
		double L_17 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_16)->___y;
		V_3 = L_17;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_18 = ___1_p;
		double L_19 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_18)->___x;
		V_4 = L_19;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_20 = ___1_p;
		double L_21 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_20)->___y;
		V_5 = L_21;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_22 = ___3_r;
		double L_23 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_22)->___x;
		V_6 = L_23;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_24 = ___3_r;
		double L_25 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_24)->___y;
		V_7 = L_25;
		goto IL_0101;
	}

IL_00d1:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_26 = ___3_r;
		double L_27 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_26)->___x;
		V_2 = L_27;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_28 = ___3_r;
		double L_29 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_28)->___y;
		V_3 = L_29;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_30 = ___2_q;
		double L_31 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_30)->___x;
		V_4 = L_31;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_32 = ___2_q;
		double L_33 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_32)->___y;
		V_5 = L_33;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_34 = ___1_p;
		double L_35 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_34)->___x;
		V_6 = L_35;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_36 = ___1_p;
		double L_37 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_36)->___y;
		V_7 = L_37;
	}

IL_0101:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_38 = ___0_badotri;
		V_1 = L_38;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_39 = ___5_points;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_39);
		int32_t L_41 = V_9;
		double L_42 = V_4;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41), (double)L_42);
		int32_t L_43 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_44 = ___5_points;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_44);
		int32_t L_46 = V_9;
		double L_47 = V_5;
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (double)L_47);
		int32_t L_48 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_49 = V_8;
		double L_50 = V_4;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_50);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51 = V_8;
		double L_52 = V_5;
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_52);
	}

IL_012b:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_53 = V_1;
		double L_54 = V_2;
		double L_55 = V_3;
		double L_56 = V_4;
		double L_57 = V_5;
		bool L_58;
		L_58 = NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7(__this, L_53, L_54, L_55, L_56, L_57, (&V_8), (&V_0), NULL);
		if (L_58)
		{
			goto IL_0182;
		}
	}
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_59 = V_0;
		V_1 = L_59;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_60 = V_8;
		int32_t L_61 = 0;
		double L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = L_62;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_63 = V_8;
		int32_t L_64 = 1;
		double L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_5 = L_65;
		int32_t L_66 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_67 = ___5_points;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_68 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_67);
		if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_0160;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_69 = ___5_points;
		int32_t L_70 = V_9;
		Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D(L_69, ((int32_t)il2cpp_codegen_multiply(L_70, 2)), Array_Resize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8A4840EB1AF8E8BEB014CB65C41957C8D9B45C1D_RuntimeMethod_var);
	}

IL_0160:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_71 = ___5_points;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_72 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_71);
		int32_t L_73 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_74 = V_8;
		int32_t L_75 = 0;
		double L_76 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73), (double)L_76);
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_78 = ___5_points;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_79 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_78);
		int32_t L_80 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_81 = V_8;
		int32_t L_82 = 1;
		double L_83 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80), (double)L_83);
		int32_t L_84 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		goto IL_0187;
	}

IL_0182:
	{
		V_9 = 0;
		goto IL_01b8;
	}

IL_0187:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_85 = V_8;
		int32_t L_86 = 0;
		double L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		double L_88 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_89;
		L_89 = fabs(((double)il2cpp_codegen_subtract(L_87, L_88)));
		if ((!(((double)L_89) <= ((double)(1.0E-50)))))
		{
			goto IL_012b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = V_8;
		int32_t L_91 = 1;
		double L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		double L_93 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_94;
		L_94 = fabs(((double)il2cpp_codegen_subtract(L_92, L_93)));
		if ((!(((double)L_94) <= ((double)(1.0E-50)))))
		{
			goto IL_012b;
		}
	}

IL_01b8:
	{
		int32_t L_95 = V_9;
		return ((int32_t)(L_95/2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_GetNeighborsVertex_mC6502B4C10830648A98F2830039BE1D81F63A6D7 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 ___0_badotri, double ___1_first_x, double ___2_first_y, double ___3_second_x, double ___4_second_y, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___5_thirdpoint, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___6_neighotri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_2 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_3 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2));
		V_1 = (bool)0;
		V_2 = (Vertex_tD204F3CCC6BC453F12430867B099686E501C0172*)NULL;
		V_3 = (Vertex_tD204F3CCC6BC453F12430867B099686E501C0172*)NULL;
		V_4 = (Vertex_tD204F3CCC6BC453F12430867B099686E501C0172*)NULL;
		V_5 = 0;
		V_6 = 0;
		(&___0_badotri)->___orient = 0;
		goto IL_024a;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Sym_m29BF5459EAEEAB7E9A6F28EE74758E19A574D852((&___0_badotri), (&V_0), NULL);
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_0 = V_0;
		Triangle_tACE13666522DB6C2EFA35DEF26A236A4ADF745D6* L_1 = L_0.___tri;
		int32_t L_2 = L_1->___id;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0208;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_3;
		L_3 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5((&V_0), NULL);
		V_2 = L_3;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_4;
		L_4 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12((&V_0), NULL);
		V_3 = L_4;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_5;
		L_5 = Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9((&V_0), NULL);
		V_4 = L_5;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_6 = V_2;
		double L_7 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_6)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_8 = V_3;
		double L_9 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_8)->___x;
		if ((!(((double)L_7) == ((double)L_9))))
		{
			goto IL_0076;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_10 = V_2;
		double L_11 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_10)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_12 = V_3;
		double L_13 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_12)->___y;
		if ((((double)L_11) == ((double)L_13)))
		{
			goto IL_0208;
		}
	}

IL_0076:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_14 = V_3;
		double L_15 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_14)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_16 = V_4;
		double L_17 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_16)->___x;
		if ((!(((double)L_15) == ((double)L_17))))
		{
			goto IL_0097;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_18 = V_3;
		double L_19 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_18)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_20 = V_4;
		double L_21 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_20)->___y;
		if ((((double)L_19) == ((double)L_21)))
		{
			goto IL_0208;
		}
	}

IL_0097:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_22 = V_2;
		double L_23 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_22)->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_24 = V_4;
		double L_25 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_24)->___x;
		if ((!(((double)L_23) == ((double)L_25))))
		{
			goto IL_00b8;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_26 = V_2;
		double L_27 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_26)->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_28 = V_4;
		double L_29 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_28)->___y;
		if ((((double)L_27) == ((double)L_29)))
		{
			goto IL_0208;
		}
	}

IL_00b8:
	{
		V_5 = 0;
		double L_30 = ___1_first_x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_31 = V_2;
		double L_32 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_31)->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = fabs(((double)il2cpp_codegen_subtract(L_30, L_32)));
		if ((!(((double)L_33) < ((double)(1.0E-50)))))
		{
			goto IL_00f1;
		}
	}
	{
		double L_34 = ___2_first_y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_35 = V_2;
		double L_36 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_35)->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = fabs(((double)il2cpp_codegen_subtract(L_34, L_36)));
		if ((!(((double)L_37) < ((double)(1.0E-50)))))
		{
			goto IL_00f1;
		}
	}
	{
		V_5 = ((int32_t)11);
		goto IL_015d;
	}

IL_00f1:
	{
		double L_38 = ___1_first_x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_39 = V_3;
		double L_40 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_39)->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = fabs(((double)il2cpp_codegen_subtract(L_38, L_40)));
		if ((!(((double)L_41) < ((double)(1.0E-50)))))
		{
			goto IL_0127;
		}
	}
	{
		double L_42 = ___2_first_y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_43 = V_3;
		double L_44 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_43)->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_45;
		L_45 = fabs(((double)il2cpp_codegen_subtract(L_42, L_44)));
		if ((!(((double)L_45) < ((double)(1.0E-50)))))
		{
			goto IL_0127;
		}
	}
	{
		V_5 = ((int32_t)12);
		goto IL_015d;
	}

IL_0127:
	{
		double L_46 = ___1_first_x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_47 = V_4;
		double L_48 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_47)->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_49;
		L_49 = fabs(((double)il2cpp_codegen_subtract(L_46, L_48)));
		if ((!(((double)L_49) < ((double)(1.0E-50)))))
		{
			goto IL_015d;
		}
	}
	{
		double L_50 = ___2_first_y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_51 = V_4;
		double L_52 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_51)->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_53;
		L_53 = fabs(((double)il2cpp_codegen_subtract(L_50, L_52)));
		if ((!(((double)L_53) < ((double)(1.0E-50)))))
		{
			goto IL_015d;
		}
	}
	{
		V_5 = ((int32_t)13);
	}

IL_015d:
	{
		V_6 = 0;
		double L_54 = ___3_second_x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_55 = V_2;
		double L_56 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_55)->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_57;
		L_57 = fabs(((double)il2cpp_codegen_subtract(L_54, L_56)));
		if ((!(((double)L_57) < ((double)(1.0E-50)))))
		{
			goto IL_0198;
		}
	}
	{
		double L_58 = ___4_second_y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_59 = V_2;
		double L_60 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_59)->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_61;
		L_61 = fabs(((double)il2cpp_codegen_subtract(L_58, L_60)));
		if ((!(((double)L_61) < ((double)(1.0E-50)))))
		{
			goto IL_0198;
		}
	}
	{
		V_6 = ((int32_t)21);
		goto IL_0208;
	}

IL_0198:
	{
		double L_62 = ___3_second_x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_63 = V_3;
		double L_64 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_63)->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_65;
		L_65 = fabs(((double)il2cpp_codegen_subtract(L_62, L_64)));
		if ((!(((double)L_65) < ((double)(1.0E-50)))))
		{
			goto IL_01d0;
		}
	}
	{
		double L_66 = ___4_second_y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_67 = V_3;
		double L_68 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_67)->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = fabs(((double)il2cpp_codegen_subtract(L_66, L_68)));
		if ((!(((double)L_69) < ((double)(1.0E-50)))))
		{
			goto IL_01d0;
		}
	}
	{
		V_6 = ((int32_t)22);
		goto IL_0208;
	}

IL_01d0:
	{
		double L_70 = ___3_second_x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_71 = V_4;
		double L_72 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_71)->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_73;
		L_73 = fabs(((double)il2cpp_codegen_subtract(L_70, L_72)));
		if ((!(((double)L_73) < ((double)(1.0E-50)))))
		{
			goto IL_0208;
		}
	}
	{
		double L_74 = ___4_second_y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_75 = V_4;
		double L_76 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_75)->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_77;
		L_77 = fabs(((double)il2cpp_codegen_subtract(L_74, L_76)));
		if ((!(((double)L_77) < ((double)(1.0E-50)))))
		{
			goto IL_0208;
		}
	}
	{
		V_6 = ((int32_t)23);
	}

IL_0208:
	{
		int32_t L_78 = V_5;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_79 = V_6;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)22))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_80 = V_6;
		if ((((int32_t)L_80) == ((int32_t)((int32_t)23))))
		{
			goto IL_0256;
		}
	}

IL_021a:
	{
		int32_t L_81 = V_5;
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_022c;
		}
	}
	{
		int32_t L_82 = V_6;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)21))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_83 = V_6;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)23))))
		{
			goto IL_0256;
		}
	}

IL_022c:
	{
		int32_t L_84 = V_5;
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_023e;
		}
	}
	{
		int32_t L_85 = V_6;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)21))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_86 = V_6;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)22))))
		{
			goto IL_0256;
		}
	}

IL_023e:
	{
		int32_t* L_87 = (int32_t*)(&(&___0_badotri)->___orient);
		int32_t* L_88 = L_87;
		int32_t L_89 = *((int32_t*)L_88);
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_024a:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_90 = ___0_badotri;
		int32_t L_91 = L_90.___orient;
		if ((((int32_t)L_91) < ((int32_t)3)))
		{
			goto IL_0024;
		}
	}

IL_0256:
	{
		int32_t L_92 = V_5;
		if (!L_92)
		{
			goto IL_0275;
		}
	}
	{
		int32_t L_93 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract(L_93, ((int32_t)11))))
		{
			case 0:
			{
				goto IL_027c;
			}
			case 1:
			{
				goto IL_02c7;
			}
			case 2:
			{
				goto IL_0309;
			}
		}
	}
	{
		goto IL_0349;
	}

IL_0275:
	{
		V_1 = (bool)1;
		goto IL_034f;
	}

IL_027c:
	{
		int32_t L_94 = V_6;
		if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_029f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_95 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_96 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_95);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_97 = V_4;
		double L_98 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_97)->___x;
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_98);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_99 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_100 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_99);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_101 = V_4;
		double L_102 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_101)->___y;
		(L_100)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_102);
		goto IL_034f;
	}

IL_029f:
	{
		int32_t L_103 = V_6;
		if ((!(((uint32_t)L_103) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_02c0;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_104 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_104);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_106 = V_3;
		double L_107 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_106)->___x;
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_107);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_108 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_109 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_108);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_110 = V_3;
		double L_111 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_110)->___y;
		(L_109)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_111);
		goto IL_034f;
	}

IL_02c0:
	{
		V_1 = (bool)1;
		goto IL_034f;
	}

IL_02c7:
	{
		int32_t L_112 = V_6;
		if ((!(((uint32_t)L_112) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_02e7;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_113 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_114 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_113);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_115 = V_4;
		double L_116 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_115)->___x;
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_116);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_117 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_118 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_117);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_119 = V_4;
		double L_120 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_119)->___y;
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_120);
		goto IL_034f;
	}

IL_02e7:
	{
		int32_t L_121 = V_6;
		if ((!(((uint32_t)L_121) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0305;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_122 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_123 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_122);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_124 = V_2;
		double L_125 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_124)->___x;
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_125);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_126 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_127 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_126);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_128 = V_2;
		double L_129 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_128)->___y;
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_129);
		goto IL_034f;
	}

IL_0305:
	{
		V_1 = (bool)1;
		goto IL_034f;
	}

IL_0309:
	{
		int32_t L_130 = V_6;
		if ((!(((uint32_t)L_130) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0327;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_131 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_132 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_131);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_133 = V_3;
		double L_134 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_133)->___x;
		(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_134);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_135 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_136 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_135);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_137 = V_3;
		double L_138 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_137)->___y;
		(L_136)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_138);
		goto IL_034f;
	}

IL_0327:
	{
		int32_t L_139 = V_6;
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_0345;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_140 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_141 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_140);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_142 = V_2;
		double L_143 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_142)->___x;
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_143);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_144 = ___5_thirdpoint;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_145 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_144);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_146 = V_2;
		double L_147 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_146)->___y;
		(L_145)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_147);
		goto IL_034f;
	}

IL_0345:
	{
		V_1 = (bool)1;
		goto IL_034f;
	}

IL_0349:
	{
		int32_t L_148 = V_6;
		if (L_148)
		{
			goto IL_034f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_034f:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_149 = ___6_neighotri;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 L_150 = V_0;
		*(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2*)L_149 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2*)L_149)->___tri), (void*)NULL);
		bool L_151 = V_1;
		return L_151;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_GetWedgeIntersectionWithoutMaxAngle_m4EBBAE7BE77755BD7944D142F4B5F028C245E895 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___2_newloc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double V_22 = 0.0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	double V_26 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_27 = NULL;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	{
		int32_t L_0 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = __this->___petalx;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_0))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_2 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_2)));
		__this->___petalx = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petalx), (void*)L_3);
		int32_t L_4 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_4)));
		__this->___petaly = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petaly), (void*)L_5);
		int32_t L_6 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_6)));
		__this->___petalr = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petalr), (void*)L_7);
		int32_t L_8 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_8)), ((int32_t)16))), ((int32_t)36))));
		__this->___wedges = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wedges), (void*)L_9);
	}

IL_004b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_27 = L_10;
		V_28 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___1_points;
		int32_t L_12 = ___0_numpoints;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_12)), 4));
		double L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = L_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = ___1_points;
		int32_t L_16 = ___0_numpoints;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_16)), 3));
		double L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = ___1_points;
		int32_t L_20 = ___0_numpoints;
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_20)), 2));
		double L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = ___1_points;
		int32_t L_24 = ___0_numpoints;
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_24)), 1));
		double L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_3 = L_26;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_27 = __this->___behavior;
		double L_28;
		L_28 = Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline(L_27, NULL);
		V_26 = ((double)(((double)il2cpp_codegen_multiply(L_28, (3.1415926535897931)))/(180.0)));
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_29 = __this->___behavior;
		double L_30 = L_29->___goodAngle;
		if ((!(((double)L_30) == ((double)(1.0)))))
		{
			goto IL_00c5;
		}
	}
	{
		V_35 = (0.0);
		V_36 = (0.0);
		goto IL_00eb;
	}

IL_00c5:
	{
		double L_31 = V_26;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = tan(L_31);
		V_35 = ((double)((0.5)/L_32));
		double L_33 = V_26;
		double L_34;
		L_34 = sin(L_33);
		V_36 = ((double)((0.5)/L_34));
	}

IL_00eb:
	{
		V_29 = 0;
		goto IL_0867;
	}

IL_00f3:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = ___1_points;
		int32_t L_36 = V_29;
		int32_t L_37 = L_36;
		double L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_4 = L_38;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = ___1_points;
		int32_t L_40 = V_29;
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		double L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		double L_43 = V_2;
		double L_44 = V_0;
		V_6 = ((double)il2cpp_codegen_subtract(L_43, L_44));
		double L_45 = V_3;
		double L_46 = V_1;
		V_7 = ((double)il2cpp_codegen_subtract(L_45, L_46));
		double L_47 = V_6;
		double L_48 = V_6;
		double L_49 = V_7;
		double L_50 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_51;
		L_51 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_47, L_48)), ((double)il2cpp_codegen_multiply(L_49, L_50)))));
		V_8 = L_51;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52 = __this->___petalx;
		int32_t L_53 = V_29;
		double L_54 = V_0;
		double L_55 = V_6;
		double L_56 = V_35;
		double L_57 = V_7;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_53/2))), (double)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_54, ((double)il2cpp_codegen_multiply((0.5), L_55)))), ((double)il2cpp_codegen_multiply(L_56, L_57)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_58 = __this->___petaly;
		int32_t L_59 = V_29;
		double L_60 = V_1;
		double L_61 = V_7;
		double L_62 = V_35;
		double L_63 = V_6;
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_59/2))), (double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_60, ((double)il2cpp_codegen_multiply((0.5), L_61)))), ((double)il2cpp_codegen_multiply(L_62, L_63)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_64 = __this->___petalr;
		int32_t L_65 = V_29;
		double L_66 = V_36;
		double L_67 = V_8;
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_65/2))), (double)((double)il2cpp_codegen_multiply(L_66, L_67)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_68 = __this->___petalx;
		int32_t L_69 = ___0_numpoints;
		int32_t L_70 = V_29;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_71 = __this->___petalx;
		int32_t L_72 = V_29;
		int32_t L_73 = ((int32_t)(L_72/2));
		double L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, ((int32_t)(L_70/2))))), (double)L_74);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_75 = __this->___petaly;
		int32_t L_76 = ___0_numpoints;
		int32_t L_77 = V_29;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_78 = __this->___petaly;
		int32_t L_79 = V_29;
		int32_t L_80 = ((int32_t)(L_79/2));
		double L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, ((int32_t)(L_77/2))))), (double)L_81);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_82 = __this->___petalr;
		int32_t L_83 = ___0_numpoints;
		int32_t L_84 = V_29;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_85 = __this->___petalr;
		int32_t L_86 = V_29;
		int32_t L_87 = ((int32_t)(L_86/2));
		double L_88 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_83, ((int32_t)(L_84/2))))), (double)L_88);
		double L_89 = V_0;
		double L_90 = V_2;
		V_9 = ((double)(((double)il2cpp_codegen_add(L_89, L_90))/(2.0)));
		double L_91 = V_1;
		double L_92 = V_3;
		V_10 = ((double)(((double)il2cpp_codegen_add(L_91, L_92))/(2.0)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_93 = __this->___petalx;
		int32_t L_94 = V_29;
		int32_t L_95 = ((int32_t)(L_94/2));
		double L_96 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95));
		double L_97 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_98 = __this->___petalx;
		int32_t L_99 = V_29;
		int32_t L_100 = ((int32_t)(L_99/2));
		double L_101 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		double L_102 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_103 = __this->___petaly;
		int32_t L_104 = V_29;
		int32_t L_105 = ((int32_t)(L_104/2));
		double L_106 = (L_103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		double L_107 = V_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_108 = __this->___petaly;
		int32_t L_109 = V_29;
		int32_t L_110 = ((int32_t)(L_109/2));
		double L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		double L_112 = V_10;
		double L_113;
		L_113 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_96, L_97)), ((double)il2cpp_codegen_subtract(L_101, L_102)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_106, L_107)), ((double)il2cpp_codegen_subtract(L_111, L_112)))))));
		V_11 = L_113;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_114 = __this->___petalx;
		int32_t L_115 = V_29;
		int32_t L_116 = ((int32_t)(L_115/2));
		double L_117 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		double L_118 = V_9;
		double L_119 = V_11;
		V_24 = ((double)(((double)il2cpp_codegen_subtract(L_117, L_118))/L_119));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_120 = __this->___petaly;
		int32_t L_121 = V_29;
		int32_t L_122 = ((int32_t)(L_121/2));
		double L_123 = (L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		double L_124 = V_10;
		double L_125 = V_11;
		V_25 = ((double)(((double)il2cpp_codegen_subtract(L_123, L_124))/L_125));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_126 = __this->___petalx;
		int32_t L_127 = V_29;
		int32_t L_128 = ((int32_t)(L_127/2));
		double L_129 = (L_126)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
		double L_130 = V_24;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_131 = __this->___petalr;
		int32_t L_132 = V_29;
		int32_t L_133 = ((int32_t)(L_132/2));
		double L_134 = (L_131)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		V_12 = ((double)il2cpp_codegen_add(L_129, ((double)il2cpp_codegen_multiply(L_130, L_134))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_135 = __this->___petaly;
		int32_t L_136 = V_29;
		int32_t L_137 = ((int32_t)(L_136/2));
		double L_138 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		double L_139 = V_25;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_140 = __this->___petalr;
		int32_t L_141 = V_29;
		int32_t L_142 = ((int32_t)(L_141/2));
		double L_143 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		V_13 = ((double)il2cpp_codegen_add(L_138, ((double)il2cpp_codegen_multiply(L_139, L_143))));
		double L_144 = V_2;
		double L_145 = V_0;
		V_24 = ((double)il2cpp_codegen_subtract(L_144, L_145));
		double L_146 = V_3;
		double L_147 = V_1;
		V_25 = ((double)il2cpp_codegen_subtract(L_146, L_147));
		double L_148 = V_2;
		double L_149 = V_26;
		double L_150;
		L_150 = cos(L_149);
		double L_151 = V_3;
		double L_152 = V_26;
		double L_153;
		L_153 = sin(L_152);
		double L_154 = V_0;
		double L_155 = V_0;
		double L_156 = V_26;
		double L_157;
		L_157 = cos(L_156);
		double L_158 = V_1;
		double L_159 = V_26;
		double L_160;
		L_160 = sin(L_159);
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_148, L_150)), ((double)il2cpp_codegen_multiply(L_151, L_153)))), L_154)), ((double)il2cpp_codegen_multiply(L_155, L_157)))), ((double)il2cpp_codegen_multiply(L_158, L_160))));
		double L_161 = V_2;
		double L_162 = V_26;
		double L_163;
		L_163 = sin(L_162);
		double L_164 = V_3;
		double L_165 = V_26;
		double L_166;
		L_166 = cos(L_165);
		double L_167 = V_1;
		double L_168 = V_0;
		double L_169 = V_26;
		double L_170;
		L_170 = sin(L_169);
		double L_171 = V_1;
		double L_172 = V_26;
		double L_173;
		L_173 = cos(L_172);
		V_15 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_161, L_163)), ((double)il2cpp_codegen_multiply(L_164, L_166)))), L_167)), ((double)il2cpp_codegen_multiply(L_168, L_170)))), ((double)il2cpp_codegen_multiply(L_171, L_173))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_174 = __this->___wedges;
		int32_t L_175 = V_29;
		double L_176 = V_0;
		(L_174)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_175, ((int32_t)16)))), (double)L_176);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_177 = __this->___wedges;
		int32_t L_178 = V_29;
		double L_179 = V_1;
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_178, ((int32_t)16))), 1))), (double)L_179);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_180 = __this->___wedges;
		int32_t L_181 = V_29;
		double L_182 = V_14;
		(L_180)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_181, ((int32_t)16))), 2))), (double)L_182);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_183 = __this->___wedges;
		int32_t L_184 = V_29;
		double L_185 = V_15;
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_184, ((int32_t)16))), 3))), (double)L_185);
		double L_186 = V_0;
		double L_187 = V_2;
		V_24 = ((double)il2cpp_codegen_subtract(L_186, L_187));
		double L_188 = V_1;
		double L_189 = V_3;
		V_25 = ((double)il2cpp_codegen_subtract(L_188, L_189));
		double L_190 = V_0;
		double L_191 = V_26;
		double L_192;
		L_192 = cos(L_191);
		double L_193 = V_1;
		double L_194 = V_26;
		double L_195;
		L_195 = sin(L_194);
		double L_196 = V_2;
		double L_197 = V_2;
		double L_198 = V_26;
		double L_199;
		L_199 = cos(L_198);
		double L_200 = V_3;
		double L_201 = V_26;
		double L_202;
		L_202 = sin(L_201);
		V_16 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_190, L_192)), ((double)il2cpp_codegen_multiply(L_193, L_195)))), L_196)), ((double)il2cpp_codegen_multiply(L_197, L_199)))), ((double)il2cpp_codegen_multiply(L_200, L_202))));
		double L_203 = V_0;
		double L_204 = V_26;
		double L_205;
		L_205 = sin(L_204);
		double L_206 = V_1;
		double L_207 = V_26;
		double L_208;
		L_208 = cos(L_207);
		double L_209 = V_3;
		double L_210 = V_2;
		double L_211 = V_26;
		double L_212;
		L_212 = sin(L_211);
		double L_213 = V_3;
		double L_214 = V_26;
		double L_215;
		L_215 = cos(L_214);
		V_17 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_203)), L_205)), ((double)il2cpp_codegen_multiply(L_206, L_208)))), L_209)), ((double)il2cpp_codegen_multiply(L_210, L_212)))), ((double)il2cpp_codegen_multiply(L_213, L_215))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_216 = __this->___wedges;
		int32_t L_217 = V_29;
		double L_218 = V_16;
		(L_216)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_217, ((int32_t)16))), 4))), (double)L_218);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_219 = __this->___wedges;
		int32_t L_220 = V_29;
		double L_221 = V_17;
		(L_219)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_220, ((int32_t)16))), 5))), (double)L_221);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_222 = __this->___wedges;
		int32_t L_223 = V_29;
		double L_224 = V_2;
		(L_222)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_223, ((int32_t)16))), 6))), (double)L_224);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_225 = __this->___wedges;
		int32_t L_226 = V_29;
		double L_227 = V_3;
		(L_225)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_226, ((int32_t)16))), 7))), (double)L_227);
		double L_228 = V_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_229 = __this->___petalx;
		int32_t L_230 = V_29;
		int32_t L_231 = ((int32_t)(L_230/2));
		double L_232 = (L_229)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_231));
		V_24 = ((double)il2cpp_codegen_subtract(L_228, L_232));
		double L_233 = V_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_234 = __this->___petaly;
		int32_t L_235 = V_29;
		int32_t L_236 = ((int32_t)(L_235/2));
		double L_237 = (L_234)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_236));
		V_25 = ((double)il2cpp_codegen_subtract(L_233, L_237));
		double L_238 = V_12;
		V_22 = L_238;
		double L_239 = V_13;
		V_23 = L_239;
		V_30 = 1;
		goto IL_0550;
	}

IL_03dc:
	{
		double L_240 = V_12;
		double L_241 = V_26;
		int32_t L_242 = V_30;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_243;
		L_243 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_241)), ((double)L_242))));
		double L_244 = V_13;
		double L_245 = V_26;
		int32_t L_246 = V_30;
		double L_247;
		L_247 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_245)), ((double)L_246))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_248 = __this->___petalx;
		int32_t L_249 = V_29;
		int32_t L_250 = ((int32_t)(L_249/2));
		double L_251 = (L_248)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_250));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_252 = __this->___petalx;
		int32_t L_253 = V_29;
		int32_t L_254 = ((int32_t)(L_253/2));
		double L_255 = (L_252)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_254));
		double L_256 = V_26;
		int32_t L_257 = V_30;
		double L_258;
		L_258 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_256)), ((double)L_257))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_259 = __this->___petaly;
		int32_t L_260 = V_29;
		int32_t L_261 = ((int32_t)(L_260/2));
		double L_262 = (L_259)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		double L_263 = V_26;
		int32_t L_264 = V_30;
		double L_265;
		L_265 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_263)), ((double)L_264))));
		V_18 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_240, L_243)), ((double)il2cpp_codegen_multiply(L_244, L_247)))), L_251)), ((double)il2cpp_codegen_multiply(L_255, L_258)))), ((double)il2cpp_codegen_multiply(L_262, L_265))));
		double L_266 = V_12;
		double L_267 = V_26;
		int32_t L_268 = V_30;
		double L_269;
		L_269 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_267)), ((double)L_268))));
		double L_270 = V_13;
		double L_271 = V_26;
		int32_t L_272 = V_30;
		double L_273;
		L_273 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_271)), ((double)L_272))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_274 = __this->___petaly;
		int32_t L_275 = V_29;
		int32_t L_276 = ((int32_t)(L_275/2));
		double L_277 = (L_274)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_276));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_278 = __this->___petalx;
		int32_t L_279 = V_29;
		int32_t L_280 = ((int32_t)(L_279/2));
		double L_281 = (L_278)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_280));
		double L_282 = V_26;
		int32_t L_283 = V_30;
		double L_284;
		L_284 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_282)), ((double)L_283))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_285 = __this->___petaly;
		int32_t L_286 = V_29;
		int32_t L_287 = ((int32_t)(L_286/2));
		double L_288 = (L_285)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_287));
		double L_289 = V_26;
		int32_t L_290 = V_30;
		double L_291;
		L_291 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_289)), ((double)L_290))));
		V_19 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_266)), L_269)), ((double)il2cpp_codegen_multiply(L_270, L_273)))), L_277)), ((double)il2cpp_codegen_multiply(L_281, L_284)))), ((double)il2cpp_codegen_multiply(L_288, L_291))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_292 = __this->___wedges;
		int32_t L_293 = V_29;
		int32_t L_294 = V_30;
		double L_295 = V_18;
		(L_292)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_293, ((int32_t)16))), 8)), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_294, 1))))))), (double)L_295);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_296 = __this->___wedges;
		int32_t L_297 = V_29;
		int32_t L_298 = V_30;
		double L_299 = V_19;
		(L_296)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_297, ((int32_t)16))), ((int32_t)9))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_298, 1))))))), (double)L_299);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_300 = __this->___wedges;
		int32_t L_301 = V_29;
		int32_t L_302 = V_30;
		double L_303 = V_22;
		(L_300)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_301, ((int32_t)16))), ((int32_t)10))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_302, 1))))))), (double)L_303);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_304 = __this->___wedges;
		int32_t L_305 = V_29;
		int32_t L_306 = V_30;
		double L_307 = V_23;
		(L_304)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_305, ((int32_t)16))), ((int32_t)11))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_306, 1))))))), (double)L_307);
		double L_308 = V_18;
		V_22 = L_308;
		double L_309 = V_19;
		V_23 = L_309;
		int32_t L_310 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_310, 1));
	}

IL_0550:
	{
		int32_t L_311 = V_30;
		if ((((int32_t)L_311) < ((int32_t)4)))
		{
			goto IL_03dc;
		}
	}
	{
		double L_312 = V_12;
		V_22 = L_312;
		double L_313 = V_13;
		V_23 = L_313;
		V_30 = 1;
		goto IL_06dc;
	}

IL_0568:
	{
		double L_314 = V_12;
		double L_315 = V_26;
		int32_t L_316 = V_30;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_317;
		L_317 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_315)), ((double)L_316))));
		double L_318 = V_13;
		double L_319 = V_26;
		int32_t L_320 = V_30;
		double L_321;
		L_321 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_319)), ((double)L_320))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_322 = __this->___petalx;
		int32_t L_323 = V_29;
		int32_t L_324 = ((int32_t)(L_323/2));
		double L_325 = (L_322)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_324));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_326 = __this->___petalx;
		int32_t L_327 = V_29;
		int32_t L_328 = ((int32_t)(L_327/2));
		double L_329 = (L_326)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_328));
		double L_330 = V_26;
		int32_t L_331 = V_30;
		double L_332;
		L_332 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_330)), ((double)L_331))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_333 = __this->___petaly;
		int32_t L_334 = V_29;
		int32_t L_335 = ((int32_t)(L_334/2));
		double L_336 = (L_333)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_335));
		double L_337 = V_26;
		int32_t L_338 = V_30;
		double L_339;
		L_339 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_337)), ((double)L_338))));
		V_20 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_314, L_317)), ((double)il2cpp_codegen_multiply(L_318, L_321)))), L_325)), ((double)il2cpp_codegen_multiply(L_329, L_332)))), ((double)il2cpp_codegen_multiply(L_336, L_339))));
		double L_340 = V_12;
		double L_341 = V_26;
		int32_t L_342 = V_30;
		double L_343;
		L_343 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_341)), ((double)L_342))));
		double L_344 = V_13;
		double L_345 = V_26;
		int32_t L_346 = V_30;
		double L_347;
		L_347 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_345)), ((double)L_346))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_348 = __this->___petaly;
		int32_t L_349 = V_29;
		int32_t L_350 = ((int32_t)(L_349/2));
		double L_351 = (L_348)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_350));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_352 = __this->___petalx;
		int32_t L_353 = V_29;
		int32_t L_354 = ((int32_t)(L_353/2));
		double L_355 = (L_352)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_354));
		double L_356 = V_26;
		int32_t L_357 = V_30;
		double L_358;
		L_358 = sin(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_356)), ((double)L_357))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_359 = __this->___petaly;
		int32_t L_360 = V_29;
		int32_t L_361 = ((int32_t)(L_360/2));
		double L_362 = (L_359)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_361));
		double L_363 = V_26;
		int32_t L_364 = V_30;
		double L_365;
		L_365 = cos(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0471975511965976), L_363)), ((double)L_364))));
		V_21 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_340, L_343)), ((double)il2cpp_codegen_multiply(L_344, L_347)))), L_351)), ((double)il2cpp_codegen_multiply(L_355, L_358)))), ((double)il2cpp_codegen_multiply(L_362, L_365))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_366 = __this->___wedges;
		int32_t L_367 = V_29;
		int32_t L_368 = V_30;
		double L_369 = V_22;
		(L_366)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_367, ((int32_t)16))), ((int32_t)20))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_368, 1))))))), (double)L_369);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_370 = __this->___wedges;
		int32_t L_371 = V_29;
		int32_t L_372 = V_30;
		double L_373 = V_23;
		(L_370)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_371, ((int32_t)16))), ((int32_t)21))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_372, 1))))))), (double)L_373);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_374 = __this->___wedges;
		int32_t L_375 = V_29;
		int32_t L_376 = V_30;
		double L_377 = V_20;
		(L_374)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_375, ((int32_t)16))), ((int32_t)22))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_376, 1))))))), (double)L_377);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_378 = __this->___wedges;
		int32_t L_379 = V_29;
		int32_t L_380 = V_30;
		double L_381 = V_21;
		(L_378)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_379, ((int32_t)16))), ((int32_t)23))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_380, 1))))))), (double)L_381);
		double L_382 = V_20;
		V_22 = L_382;
		double L_383 = V_21;
		V_23 = L_383;
		int32_t L_384 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_384, 1));
	}

IL_06dc:
	{
		int32_t L_385 = V_30;
		if ((((int32_t)L_385) < ((int32_t)4)))
		{
			goto IL_0568;
		}
	}
	{
		int32_t L_386 = V_29;
		if (L_386)
		{
			goto IL_0857;
		}
	}
	{
		double L_387 = V_0;
		double L_388 = V_1;
		double L_389 = V_14;
		double L_390 = V_15;
		double L_391 = V_2;
		double L_392 = V_3;
		double L_393 = V_16;
		double L_394 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_387, L_388, L_389, L_390, L_391, L_392, L_393, L_394, (&V_27), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_395 = V_27;
		int32_t L_396 = 0;
		double L_397 = (L_395)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_396));
		if ((!(((double)L_397) == ((double)(1.0)))))
		{
			goto IL_0857;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_398 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_399 = V_27;
		int32_t L_400 = 1;
		double L_401 = (L_399)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_400));
		(L_398)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_401);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_402 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_403 = V_27;
		int32_t L_404 = 2;
		double L_405 = (L_403)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_404));
		(L_402)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_405);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_406 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_407 = __this->___wedges;
		int32_t L_408 = V_29;
		int32_t L_409 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_408, ((int32_t)16))), ((int32_t)16)));
		double L_410 = (L_407)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_409));
		(L_406)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_410);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_411 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_412 = __this->___wedges;
		int32_t L_413 = V_29;
		int32_t L_414 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_413, ((int32_t)16))), ((int32_t)17)));
		double L_415 = (L_412)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_414));
		(L_411)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_415);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_416 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_417 = __this->___wedges;
		int32_t L_418 = V_29;
		int32_t L_419 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_418, ((int32_t)16))), ((int32_t)12)));
		double L_420 = (L_417)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_419));
		(L_416)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)L_420);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_421 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_422 = __this->___wedges;
		int32_t L_423 = V_29;
		int32_t L_424 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_423, ((int32_t)16))), ((int32_t)13)));
		double L_425 = (L_422)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_424));
		(L_421)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (double)L_425);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_426 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_427 = __this->___wedges;
		int32_t L_428 = V_29;
		int32_t L_429 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_428, ((int32_t)16))), 8));
		double L_430 = (L_427)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_429));
		(L_426)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (double)L_430);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_431 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_432 = __this->___wedges;
		int32_t L_433 = V_29;
		int32_t L_434 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_433, ((int32_t)16))), ((int32_t)9)));
		double L_435 = (L_432)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_434));
		(L_431)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (double)L_435);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_436 = __this->___initialConvexPoly;
		double L_437 = V_12;
		(L_436)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (double)L_437);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_438 = __this->___initialConvexPoly;
		double L_439 = V_13;
		(L_438)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (double)L_439);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_440 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_441 = __this->___wedges;
		int32_t L_442 = V_29;
		int32_t L_443 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_442, ((int32_t)16))), ((int32_t)22)));
		double L_444 = (L_441)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_443));
		(L_440)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (double)L_444);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_445 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_446 = __this->___wedges;
		int32_t L_447 = V_29;
		int32_t L_448 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_447, ((int32_t)16))), ((int32_t)23)));
		double L_449 = (L_446)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_448));
		(L_445)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (double)L_449);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_450 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_451 = __this->___wedges;
		int32_t L_452 = V_29;
		int32_t L_453 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_452, ((int32_t)16))), ((int32_t)26)));
		double L_454 = (L_451)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_453));
		(L_450)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (double)L_454);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_455 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_456 = __this->___wedges;
		int32_t L_457 = V_29;
		int32_t L_458 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_457, ((int32_t)16))), ((int32_t)27)));
		double L_459 = (L_456)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_458));
		(L_455)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (double)L_459);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_460 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_461 = __this->___wedges;
		int32_t L_462 = V_29;
		int32_t L_463 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_462, ((int32_t)16))), ((int32_t)30)));
		double L_464 = (L_461)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_463));
		(L_460)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (double)L_464);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_465 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_466 = __this->___wedges;
		int32_t L_467 = V_29;
		int32_t L_468 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_467, ((int32_t)16))), ((int32_t)31)));
		double L_469 = (L_466)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_468));
		(L_465)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (double)L_469);
	}

IL_0857:
	{
		double L_470 = V_2;
		V_0 = L_470;
		double L_471 = V_3;
		V_1 = L_471;
		double L_472 = V_4;
		V_2 = L_472;
		double L_473 = V_5;
		V_3 = L_473;
		int32_t L_474 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_474, 2));
	}

IL_0867:
	{
		int32_t L_475 = V_29;
		int32_t L_476 = ___0_numpoints;
		if ((((int32_t)L_475) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_476, 2)))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_477 = ___0_numpoints;
		if (!L_477)
		{
			goto IL_09c6;
		}
	}
	{
		int32_t L_478 = ___0_numpoints;
		V_31 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_478, 1))/2)), 1));
		V_32 = 0;
		V_33 = 0;
		V_29 = 1;
		V_34 = 8;
		V_30 = 0;
		goto IL_08f3;
	}

IL_0891:
	{
		int32_t L_479 = V_34;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_480 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___initialConvexPoly);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_481 = __this->___wedges;
		int32_t L_482 = V_31;
		int32_t L_483 = V_30;
		int32_t L_484 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_482)), L_483));
		double L_485 = (L_481)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_484));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_486 = __this->___wedges;
		int32_t L_487 = V_31;
		int32_t L_488 = V_30;
		int32_t L_489 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_487)), 1)), L_488));
		double L_490 = (L_486)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_489));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_491 = __this->___wedges;
		int32_t L_492 = V_31;
		int32_t L_493 = V_30;
		int32_t L_494 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_492)), 2)), L_493));
		double L_495 = (L_491)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_494));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_496 = __this->___wedges;
		int32_t L_497 = V_31;
		int32_t L_498 = V_30;
		int32_t L_499 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_497)), 3)), L_498));
		double L_500 = (L_496)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_499));
		int32_t L_501;
		L_501 = NewLocation_HalfPlaneIntersection_mC5C920335C264B62EFBEE14AE6C01B8F74E71F47(__this, L_479, L_480, L_485, L_490, L_495, L_500, NULL);
		V_28 = L_501;
		int32_t L_502 = V_28;
		if (L_502)
		{
			goto IL_08e9;
		}
	}
	{
		return (bool)0;
	}

IL_08e9:
	{
		int32_t L_503 = V_28;
		V_34 = L_503;
		int32_t L_504 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_504, 4));
	}

IL_08f3:
	{
		int32_t L_505 = V_30;
		if ((((int32_t)L_505) < ((int32_t)((int32_t)32))))
		{
			goto IL_0891;
		}
	}
	{
		int32_t L_506 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_506, 1));
		goto IL_099e;
	}

IL_0904:
	{
		V_30 = 0;
		goto IL_0983;
	}

IL_0909:
	{
		int32_t L_507 = V_34;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_508 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___initialConvexPoly);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_509 = __this->___wedges;
		int32_t L_510 = V_29;
		int32_t L_511 = V_31;
		int32_t L_512 = V_32;
		int32_t L_513 = V_30;
		int32_t L_514 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), ((int32_t)il2cpp_codegen_add(L_510, ((int32_t)il2cpp_codegen_multiply(L_511, L_512)))))), L_513));
		double L_515 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_514));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_516 = __this->___wedges;
		int32_t L_517 = V_29;
		int32_t L_518 = V_31;
		int32_t L_519 = V_32;
		int32_t L_520 = V_30;
		int32_t L_521 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), ((int32_t)il2cpp_codegen_add(L_517, ((int32_t)il2cpp_codegen_multiply(L_518, L_519)))))), 1)), L_520));
		double L_522 = (L_516)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_521));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_523 = __this->___wedges;
		int32_t L_524 = V_29;
		int32_t L_525 = V_31;
		int32_t L_526 = V_32;
		int32_t L_527 = V_30;
		int32_t L_528 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), ((int32_t)il2cpp_codegen_add(L_524, ((int32_t)il2cpp_codegen_multiply(L_525, L_526)))))), 2)), L_527));
		double L_529 = (L_523)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_528));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_530 = __this->___wedges;
		int32_t L_531 = V_29;
		int32_t L_532 = V_31;
		int32_t L_533 = V_32;
		int32_t L_534 = V_30;
		int32_t L_535 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)32), ((int32_t)il2cpp_codegen_add(L_531, ((int32_t)il2cpp_codegen_multiply(L_532, L_533)))))), 3)), L_534));
		double L_536 = (L_530)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_535));
		int32_t L_537;
		L_537 = NewLocation_HalfPlaneIntersection_mC5C920335C264B62EFBEE14AE6C01B8F74E71F47(__this, L_507, L_508, L_515, L_522, L_529, L_536, NULL);
		V_28 = L_537;
		int32_t L_538 = V_28;
		if (L_538)
		{
			goto IL_0979;
		}
	}
	{
		return (bool)0;
	}

IL_0979:
	{
		int32_t L_539 = V_28;
		V_34 = L_539;
		int32_t L_540 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_540, 4));
	}

IL_0983:
	{
		int32_t L_541 = V_30;
		if ((((int32_t)L_541) < ((int32_t)((int32_t)32))))
		{
			goto IL_0909;
		}
	}
	{
		int32_t L_542 = V_29;
		int32_t L_543 = V_32;
		V_29 = ((int32_t)il2cpp_codegen_add(L_542, L_543));
		int32_t L_544 = V_32;
		V_32 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_544, 1))%2));
		int32_t L_545 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_545, 1));
	}

IL_099e:
	{
		int32_t L_546 = V_33;
		int32_t L_547 = ___0_numpoints;
		if ((((int32_t)L_546) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_547, 1)))))
		{
			goto IL_0904;
		}
	}
	{
		int32_t L_548 = V_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_549 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_550 = ___2_newloc;
		NewLocation_FindPolyCentroid_mE6ED906E03E7E5373A822D1C5857457948E99AC7(__this, L_548, L_549, L_550, NULL);
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_551 = __this->___behavior;
		bool L_552 = L_551->___fixedArea;
		if (L_552)
		{
			goto IL_09c6;
		}
	}
	{
		return (bool)1;
	}

IL_09c6:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_GetWedgeIntersection_mE67A377BDAF04E111C87D07B3979DCC1EDBAC9EE (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___2_newloc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double V_22 = 0.0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	double V_26 = 0.0;
	double V_27 = 0.0;
	double V_28 = 0.0;
	double V_29 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_30 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_31 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_32 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_33 = NULL;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	double V_36 = 0.0;
	double V_37 = 0.0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	int32_t V_42 = 0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	double V_48 = 0.0;
	double V_49 = 0.0;
	double V_50 = 0.0;
	double V_51 = 0.0;
	double V_52 = 0.0;
	double V_53 = 0.0;
	double V_54 = 0.0;
	double V_55 = 0.0;
	int32_t G_B104_0 = 0;
	{
		int32_t L_0 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = __this->___petalx;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_0))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_2 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_2)));
		__this->___petalx = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petalx), (void*)L_3);
		int32_t L_4 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_4)));
		__this->___petaly = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petaly), (void*)L_5);
		int32_t L_6 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, L_6)));
		__this->___petalr = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___petalr), (void*)L_7);
		int32_t L_8 = ___0_numpoints;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(2, L_8)), ((int32_t)20))), ((int32_t)40))));
		__this->___wedges = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wedges), (void*)L_9);
	}

IL_004b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_30 = L_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_31 = L_11;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_32 = L_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_33 = L_13;
		V_34 = 0;
		V_35 = 0;
		V_36 = (4.0);
		V_37 = (4.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = ___1_points;
		int32_t L_15 = ___0_numpoints;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_15)), 4));
		double L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = ___1_points;
		int32_t L_19 = ___0_numpoints;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_19)), 3));
		double L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = ___1_points;
		int32_t L_23 = ___0_numpoints;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_23)), 2));
		double L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_2 = L_25;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = ___1_points;
		int32_t L_27 = ___0_numpoints;
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_27)), 1));
		double L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_3 = L_29;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_30 = __this->___behavior;
		double L_31;
		L_31 = Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline(L_30, NULL);
		V_51 = ((double)(((double)il2cpp_codegen_multiply(L_31, (3.1415926535897931)))/(180.0)));
		double L_32 = V_51;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = sin(L_32);
		V_52 = L_33;
		double L_34 = V_51;
		double L_35;
		L_35 = cos(L_34);
		V_53 = L_35;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_36 = __this->___behavior;
		double L_37;
		L_37 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_36, NULL);
		double L_38 = ((double)(((double)il2cpp_codegen_multiply(L_37, (3.1415926535897931)))/(180.0)));
		double L_39;
		L_39 = sin(L_38);
		V_54 = L_39;
		double L_40;
		L_40 = cos(L_38);
		V_55 = L_40;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_41 = __this->___behavior;
		double L_42 = L_41->___goodAngle;
		if ((!(((double)L_42) == ((double)(1.0)))))
		{
			goto IL_0136;
		}
	}
	{
		V_49 = (0.0);
		V_50 = (0.0);
		goto IL_015c;
	}

IL_0136:
	{
		double L_43 = V_51;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_44;
		L_44 = tan(L_43);
		V_49 = ((double)((0.5)/L_44));
		double L_45 = V_51;
		double L_46;
		L_46 = sin(L_45);
		V_50 = ((double)((0.5)/L_46));
	}

IL_015c:
	{
		V_39 = 0;
		goto IL_0f11;
	}

IL_0164:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47 = ___1_points;
		int32_t L_48 = V_39;
		int32_t L_49 = L_48;
		double L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51 = ___1_points;
		int32_t L_52 = V_39;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		double L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		V_5 = L_54;
		double L_55 = V_2;
		double L_56 = V_0;
		V_6 = ((double)il2cpp_codegen_subtract(L_55, L_56));
		double L_57 = V_3;
		double L_58 = V_1;
		V_7 = ((double)il2cpp_codegen_subtract(L_57, L_58));
		double L_59 = V_6;
		double L_60 = V_6;
		double L_61 = V_7;
		double L_62 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_63;
		L_63 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_59, L_60)), ((double)il2cpp_codegen_multiply(L_61, L_62)))));
		V_8 = L_63;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_64 = __this->___petalx;
		int32_t L_65 = V_39;
		double L_66 = V_0;
		double L_67 = V_6;
		double L_68 = V_49;
		double L_69 = V_7;
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_65/2))), (double)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_66, ((double)il2cpp_codegen_multiply((0.5), L_67)))), ((double)il2cpp_codegen_multiply(L_68, L_69)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_70 = __this->___petaly;
		int32_t L_71 = V_39;
		double L_72 = V_1;
		double L_73 = V_7;
		double L_74 = V_49;
		double L_75 = V_6;
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_71/2))), (double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_72, ((double)il2cpp_codegen_multiply((0.5), L_73)))), ((double)il2cpp_codegen_multiply(L_74, L_75)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_76 = __this->___petalr;
		int32_t L_77 = V_39;
		double L_78 = V_50;
		double L_79 = V_8;
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_77/2))), (double)((double)il2cpp_codegen_multiply(L_78, L_79)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_80 = __this->___petalx;
		int32_t L_81 = ___0_numpoints;
		int32_t L_82 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_83 = __this->___petalx;
		int32_t L_84 = V_39;
		int32_t L_85 = ((int32_t)(L_84/2));
		double L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, ((int32_t)(L_82/2))))), (double)L_86);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_87 = __this->___petaly;
		int32_t L_88 = ___0_numpoints;
		int32_t L_89 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = __this->___petaly;
		int32_t L_91 = V_39;
		int32_t L_92 = ((int32_t)(L_91/2));
		double L_93 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, ((int32_t)(L_89/2))))), (double)L_93);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_94 = __this->___petalr;
		int32_t L_95 = ___0_numpoints;
		int32_t L_96 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_97 = __this->___petalr;
		int32_t L_98 = V_39;
		int32_t L_99 = ((int32_t)(L_98/2));
		double L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_95, ((int32_t)(L_96/2))))), (double)L_100);
		double L_101 = V_0;
		double L_102 = V_2;
		V_9 = ((double)(((double)il2cpp_codegen_add(L_101, L_102))/(2.0)));
		double L_103 = V_1;
		double L_104 = V_3;
		V_10 = ((double)(((double)il2cpp_codegen_add(L_103, L_104))/(2.0)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = __this->___petalx;
		int32_t L_106 = V_39;
		int32_t L_107 = ((int32_t)(L_106/2));
		double L_108 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		double L_109 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_110 = __this->___petalx;
		int32_t L_111 = V_39;
		int32_t L_112 = ((int32_t)(L_111/2));
		double L_113 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		double L_114 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_115 = __this->___petaly;
		int32_t L_116 = V_39;
		int32_t L_117 = ((int32_t)(L_116/2));
		double L_118 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		double L_119 = V_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_120 = __this->___petaly;
		int32_t L_121 = V_39;
		int32_t L_122 = ((int32_t)(L_121/2));
		double L_123 = (L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		double L_124 = V_10;
		double L_125;
		L_125 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_108, L_109)), ((double)il2cpp_codegen_subtract(L_113, L_114)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_118, L_119)), ((double)il2cpp_codegen_subtract(L_123, L_124)))))));
		V_11 = L_125;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_126 = __this->___petalx;
		int32_t L_127 = V_39;
		int32_t L_128 = ((int32_t)(L_127/2));
		double L_129 = (L_126)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
		double L_130 = V_9;
		double L_131 = V_11;
		V_28 = ((double)(((double)il2cpp_codegen_subtract(L_129, L_130))/L_131));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_132 = __this->___petaly;
		int32_t L_133 = V_39;
		int32_t L_134 = ((int32_t)(L_133/2));
		double L_135 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		double L_136 = V_10;
		double L_137 = V_11;
		V_29 = ((double)(((double)il2cpp_codegen_subtract(L_135, L_136))/L_137));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_138 = __this->___petalx;
		int32_t L_139 = V_39;
		int32_t L_140 = ((int32_t)(L_139/2));
		double L_141 = (L_138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_140));
		double L_142 = V_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_143 = __this->___petalr;
		int32_t L_144 = V_39;
		int32_t L_145 = ((int32_t)(L_144/2));
		double L_146 = (L_143)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		V_12 = ((double)il2cpp_codegen_add(L_141, ((double)il2cpp_codegen_multiply(L_142, L_146))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_147 = __this->___petaly;
		int32_t L_148 = V_39;
		int32_t L_149 = ((int32_t)(L_148/2));
		double L_150 = (L_147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		double L_151 = V_29;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_152 = __this->___petalr;
		int32_t L_153 = V_39;
		int32_t L_154 = ((int32_t)(L_153/2));
		double L_155 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_154));
		V_13 = ((double)il2cpp_codegen_add(L_150, ((double)il2cpp_codegen_multiply(L_151, L_155))));
		double L_156 = V_2;
		double L_157 = V_0;
		V_28 = ((double)il2cpp_codegen_subtract(L_156, L_157));
		double L_158 = V_3;
		double L_159 = V_1;
		V_29 = ((double)il2cpp_codegen_subtract(L_158, L_159));
		double L_160 = V_2;
		double L_161 = V_53;
		double L_162 = V_3;
		double L_163 = V_52;
		double L_164 = V_0;
		double L_165 = V_0;
		double L_166 = V_53;
		double L_167 = V_1;
		double L_168 = V_52;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_160, L_161)), ((double)il2cpp_codegen_multiply(L_162, L_163)))), L_164)), ((double)il2cpp_codegen_multiply(L_165, L_166)))), ((double)il2cpp_codegen_multiply(L_167, L_168))));
		double L_169 = V_2;
		double L_170 = V_52;
		double L_171 = V_3;
		double L_172 = V_53;
		double L_173 = V_1;
		double L_174 = V_0;
		double L_175 = V_52;
		double L_176 = V_1;
		double L_177 = V_53;
		V_15 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_169, L_170)), ((double)il2cpp_codegen_multiply(L_171, L_172)))), L_173)), ((double)il2cpp_codegen_multiply(L_174, L_175)))), ((double)il2cpp_codegen_multiply(L_176, L_177))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_178 = __this->___wedges;
		int32_t L_179 = V_39;
		double L_180 = V_0;
		(L_178)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_179, ((int32_t)20)))), (double)L_180);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_181 = __this->___wedges;
		int32_t L_182 = V_39;
		double L_183 = V_1;
		(L_181)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_182, ((int32_t)20))), 1))), (double)L_183);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_184 = __this->___wedges;
		int32_t L_185 = V_39;
		double L_186 = V_14;
		(L_184)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_185, ((int32_t)20))), 2))), (double)L_186);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_187 = __this->___wedges;
		int32_t L_188 = V_39;
		double L_189 = V_15;
		(L_187)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_188, ((int32_t)20))), 3))), (double)L_189);
		double L_190 = V_0;
		double L_191 = V_2;
		V_28 = ((double)il2cpp_codegen_subtract(L_190, L_191));
		double L_192 = V_1;
		double L_193 = V_3;
		V_29 = ((double)il2cpp_codegen_subtract(L_192, L_193));
		double L_194 = V_0;
		double L_195 = V_53;
		double L_196 = V_1;
		double L_197 = V_52;
		double L_198 = V_2;
		double L_199 = V_2;
		double L_200 = V_53;
		double L_201 = V_3;
		double L_202 = V_52;
		V_16 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_194, L_195)), ((double)il2cpp_codegen_multiply(L_196, L_197)))), L_198)), ((double)il2cpp_codegen_multiply(L_199, L_200)))), ((double)il2cpp_codegen_multiply(L_201, L_202))));
		double L_203 = V_0;
		double L_204 = V_52;
		double L_205 = V_1;
		double L_206 = V_53;
		double L_207 = V_3;
		double L_208 = V_2;
		double L_209 = V_52;
		double L_210 = V_3;
		double L_211 = V_53;
		V_17 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_203)), L_204)), ((double)il2cpp_codegen_multiply(L_205, L_206)))), L_207)), ((double)il2cpp_codegen_multiply(L_208, L_209)))), ((double)il2cpp_codegen_multiply(L_210, L_211))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_212 = __this->___wedges;
		int32_t L_213 = V_39;
		double L_214 = V_16;
		(L_212)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_213, ((int32_t)20))), 4))), (double)L_214);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_215 = __this->___wedges;
		int32_t L_216 = V_39;
		double L_217 = V_17;
		(L_215)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_216, ((int32_t)20))), 5))), (double)L_217);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_218 = __this->___wedges;
		int32_t L_219 = V_39;
		double L_220 = V_2;
		(L_218)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_219, ((int32_t)20))), 6))), (double)L_220);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_221 = __this->___wedges;
		int32_t L_222 = V_39;
		double L_223 = V_3;
		(L_221)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_222, ((int32_t)20))), 7))), (double)L_223);
		double L_224 = V_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_225 = __this->___petalx;
		int32_t L_226 = V_39;
		int32_t L_227 = ((int32_t)(L_226/2));
		double L_228 = (L_225)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_227));
		V_28 = ((double)il2cpp_codegen_subtract(L_224, L_228));
		double L_229 = V_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_230 = __this->___petaly;
		int32_t L_231 = V_39;
		int32_t L_232 = ((int32_t)(L_231/2));
		double L_233 = (L_230)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_232));
		V_29 = ((double)il2cpp_codegen_subtract(L_229, L_233));
		double L_234 = V_12;
		V_22 = L_234;
		double L_235 = V_13;
		V_23 = L_235;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_236 = __this->___behavior;
		double L_237;
		L_237 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_236, NULL);
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_238 = __this->___behavior;
		double L_239;
		L_239 = Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline(L_238, NULL);
		V_51 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((2.0), L_237)), L_239)), (180.0)));
		double L_240 = V_51;
		if ((!(((double)L_240) <= ((double)(0.0)))))
		{
			goto IL_044a;
		}
	}
	{
		V_35 = 4;
		V_36 = (1.0);
		V_37 = (1.0);
		goto IL_04b4;
	}

IL_044a:
	{
		double L_241 = V_51;
		if ((!(((double)L_241) <= ((double)(5.0)))))
		{
			goto IL_0472;
		}
	}
	{
		V_35 = 6;
		V_36 = (2.0);
		V_37 = (2.0);
		goto IL_04b4;
	}

IL_0472:
	{
		double L_242 = V_51;
		if ((!(((double)L_242) <= ((double)(10.0)))))
		{
			goto IL_049a;
		}
	}
	{
		V_35 = 8;
		V_36 = (3.0);
		V_37 = (3.0);
		goto IL_04b4;
	}

IL_049a:
	{
		V_35 = ((int32_t)10);
		V_36 = (4.0);
		V_37 = (4.0);
	}

IL_04b4:
	{
		double L_243 = V_51;
		V_51 = ((double)(((double)il2cpp_codegen_multiply(L_243, (3.1415926535897931)))/(180.0)));
		V_40 = 1;
		goto IL_0670;
	}

IL_04d4:
	{
		double L_244 = V_36;
		if ((((double)L_244) == ((double)(1.0))))
		{
			goto IL_066a;
		}
	}
	{
		double L_245 = V_12;
		double L_246 = V_51;
		double L_247 = V_36;
		int32_t L_248 = V_40;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_249;
		L_249 = cos(((double)il2cpp_codegen_multiply(((double)(L_246/((double)il2cpp_codegen_subtract(L_247, (1.0))))), ((double)L_248))));
		double L_250 = V_13;
		double L_251 = V_51;
		double L_252 = V_36;
		int32_t L_253 = V_40;
		double L_254;
		L_254 = sin(((double)il2cpp_codegen_multiply(((double)(L_251/((double)il2cpp_codegen_subtract(L_252, (1.0))))), ((double)L_253))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_255 = __this->___petalx;
		int32_t L_256 = V_39;
		int32_t L_257 = ((int32_t)(L_256/2));
		double L_258 = (L_255)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_257));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_259 = __this->___petalx;
		int32_t L_260 = V_39;
		int32_t L_261 = ((int32_t)(L_260/2));
		double L_262 = (L_259)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		double L_263 = V_51;
		double L_264 = V_36;
		int32_t L_265 = V_40;
		double L_266;
		L_266 = cos(((double)il2cpp_codegen_multiply(((double)(L_263/((double)il2cpp_codegen_subtract(L_264, (1.0))))), ((double)L_265))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_267 = __this->___petaly;
		int32_t L_268 = V_39;
		int32_t L_269 = ((int32_t)(L_268/2));
		double L_270 = (L_267)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_269));
		double L_271 = V_51;
		double L_272 = V_36;
		int32_t L_273 = V_40;
		double L_274;
		L_274 = sin(((double)il2cpp_codegen_multiply(((double)(L_271/((double)il2cpp_codegen_subtract(L_272, (1.0))))), ((double)L_273))));
		V_18 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_245, L_249)), ((double)il2cpp_codegen_multiply(L_250, L_254)))), L_258)), ((double)il2cpp_codegen_multiply(L_262, L_266)))), ((double)il2cpp_codegen_multiply(L_270, L_274))));
		double L_275 = V_12;
		double L_276 = V_51;
		double L_277 = V_36;
		int32_t L_278 = V_40;
		double L_279;
		L_279 = sin(((double)il2cpp_codegen_multiply(((double)(L_276/((double)il2cpp_codegen_subtract(L_277, (1.0))))), ((double)L_278))));
		double L_280 = V_13;
		double L_281 = V_51;
		double L_282 = V_36;
		int32_t L_283 = V_40;
		double L_284;
		L_284 = cos(((double)il2cpp_codegen_multiply(((double)(L_281/((double)il2cpp_codegen_subtract(L_282, (1.0))))), ((double)L_283))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_285 = __this->___petaly;
		int32_t L_286 = V_39;
		int32_t L_287 = ((int32_t)(L_286/2));
		double L_288 = (L_285)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_287));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_289 = __this->___petalx;
		int32_t L_290 = V_39;
		int32_t L_291 = ((int32_t)(L_290/2));
		double L_292 = (L_289)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_291));
		double L_293 = V_51;
		double L_294 = V_36;
		int32_t L_295 = V_40;
		double L_296;
		L_296 = sin(((double)il2cpp_codegen_multiply(((double)(L_293/((double)il2cpp_codegen_subtract(L_294, (1.0))))), ((double)L_295))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_297 = __this->___petaly;
		int32_t L_298 = V_39;
		int32_t L_299 = ((int32_t)(L_298/2));
		double L_300 = (L_297)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_299));
		double L_301 = V_51;
		double L_302 = V_36;
		int32_t L_303 = V_40;
		double L_304;
		L_304 = cos(((double)il2cpp_codegen_multiply(((double)(L_301/((double)il2cpp_codegen_subtract(L_302, (1.0))))), ((double)L_303))));
		V_19 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_275)), L_279)), ((double)il2cpp_codegen_multiply(L_280, L_284)))), L_288)), ((double)il2cpp_codegen_multiply(L_292, L_296)))), ((double)il2cpp_codegen_multiply(L_300, L_304))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_305 = __this->___wedges;
		int32_t L_306 = V_39;
		int32_t L_307 = V_40;
		double L_308 = V_18;
		(L_305)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_306, ((int32_t)20))), 8)), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_307, 1))))))), (double)L_308);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_309 = __this->___wedges;
		int32_t L_310 = V_39;
		int32_t L_311 = V_40;
		double L_312 = V_19;
		(L_309)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_310, ((int32_t)20))), ((int32_t)9))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_311, 1))))))), (double)L_312);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_313 = __this->___wedges;
		int32_t L_314 = V_39;
		int32_t L_315 = V_40;
		double L_316 = V_22;
		(L_313)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_314, ((int32_t)20))), ((int32_t)10))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_315, 1))))))), (double)L_316);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_317 = __this->___wedges;
		int32_t L_318 = V_39;
		int32_t L_319 = V_40;
		double L_320 = V_23;
		(L_317)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_318, ((int32_t)20))), ((int32_t)11))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_319, 1))))))), (double)L_320);
		double L_321 = V_18;
		V_22 = L_321;
		double L_322 = V_19;
		V_23 = L_322;
	}

IL_066a:
	{
		int32_t L_323 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_323, 1));
	}

IL_0670:
	{
		int32_t L_324 = V_40;
		double L_325 = V_36;
		if ((((double)((double)L_324)) < ((double)L_325)))
		{
			goto IL_04d4;
		}
	}
	{
		double L_326 = V_0;
		double L_327 = V_2;
		V_28 = ((double)il2cpp_codegen_subtract(L_326, L_327));
		double L_328 = V_1;
		double L_329 = V_3;
		V_29 = ((double)il2cpp_codegen_subtract(L_328, L_329));
		double L_330 = V_0;
		double L_331 = V_55;
		double L_332 = V_1;
		double L_333 = V_54;
		double L_334 = V_2;
		double L_335 = V_2;
		double L_336 = V_55;
		double L_337 = V_3;
		double L_338 = V_54;
		V_24 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_330, L_331)), ((double)il2cpp_codegen_multiply(L_332, L_333)))), L_334)), ((double)il2cpp_codegen_multiply(L_335, L_336)))), ((double)il2cpp_codegen_multiply(L_337, L_338))));
		double L_339 = V_0;
		double L_340 = V_54;
		double L_341 = V_1;
		double L_342 = V_55;
		double L_343 = V_3;
		double L_344 = V_2;
		double L_345 = V_54;
		double L_346 = V_3;
		double L_347 = V_55;
		V_25 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((-L_339)), L_340)), ((double)il2cpp_codegen_multiply(L_341, L_342)))), L_343)), ((double)il2cpp_codegen_multiply(L_344, L_345)))), ((double)il2cpp_codegen_multiply(L_346, L_347))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_348 = __this->___wedges;
		int32_t L_349 = V_39;
		double L_350 = V_2;
		(L_348)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_349, ((int32_t)20))), ((int32_t)20)))), (double)L_350);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_351 = __this->___wedges;
		int32_t L_352 = V_39;
		double L_353 = V_3;
		(L_351)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_352, ((int32_t)20))), ((int32_t)21)))), (double)L_353);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_354 = __this->___wedges;
		int32_t L_355 = V_39;
		double L_356 = V_24;
		(L_354)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_355, ((int32_t)20))), ((int32_t)22)))), (double)L_356);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_357 = __this->___wedges;
		int32_t L_358 = V_39;
		double L_359 = V_25;
		(L_357)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_358, ((int32_t)20))), ((int32_t)23)))), (double)L_359);
		double L_360 = V_12;
		V_22 = L_360;
		double L_361 = V_13;
		V_23 = L_361;
		V_40 = 1;
		goto IL_08a1;
	}

IL_0705:
	{
		double L_362 = V_37;
		if ((((double)L_362) == ((double)(1.0))))
		{
			goto IL_089b;
		}
	}
	{
		double L_363 = V_12;
		double L_364 = V_51;
		double L_365 = V_37;
		int32_t L_366 = V_40;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_367;
		L_367 = cos(((double)il2cpp_codegen_multiply(((double)(L_364/((double)il2cpp_codegen_subtract(L_365, (1.0))))), ((double)L_366))));
		double L_368 = V_13;
		double L_369 = V_51;
		double L_370 = V_37;
		int32_t L_371 = V_40;
		double L_372;
		L_372 = sin(((double)il2cpp_codegen_multiply(((double)(L_369/((double)il2cpp_codegen_subtract(L_370, (1.0))))), ((double)L_371))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_373 = __this->___petalx;
		int32_t L_374 = V_39;
		int32_t L_375 = ((int32_t)(L_374/2));
		double L_376 = (L_373)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_375));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_377 = __this->___petalx;
		int32_t L_378 = V_39;
		int32_t L_379 = ((int32_t)(L_378/2));
		double L_380 = (L_377)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_379));
		double L_381 = V_51;
		double L_382 = V_37;
		int32_t L_383 = V_40;
		double L_384;
		L_384 = cos(((double)il2cpp_codegen_multiply(((double)(L_381/((double)il2cpp_codegen_subtract(L_382, (1.0))))), ((double)L_383))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_385 = __this->___petaly;
		int32_t L_386 = V_39;
		int32_t L_387 = ((int32_t)(L_386/2));
		double L_388 = (L_385)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_387));
		double L_389 = V_51;
		double L_390 = V_37;
		int32_t L_391 = V_40;
		double L_392;
		L_392 = sin(((double)il2cpp_codegen_multiply(((double)(L_389/((double)il2cpp_codegen_subtract(L_390, (1.0))))), ((double)L_391))));
		V_20 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_363, L_367)), ((double)il2cpp_codegen_multiply(L_368, L_372)))), L_376)), ((double)il2cpp_codegen_multiply(L_380, L_384)))), ((double)il2cpp_codegen_multiply(L_388, L_392))));
		double L_393 = V_12;
		double L_394 = V_51;
		double L_395 = V_37;
		int32_t L_396 = V_40;
		double L_397;
		L_397 = sin(((double)il2cpp_codegen_multiply(((double)(L_394/((double)il2cpp_codegen_subtract(L_395, (1.0))))), ((double)L_396))));
		double L_398 = V_13;
		double L_399 = V_51;
		double L_400 = V_37;
		int32_t L_401 = V_40;
		double L_402;
		L_402 = cos(((double)il2cpp_codegen_multiply(((double)(L_399/((double)il2cpp_codegen_subtract(L_400, (1.0))))), ((double)L_401))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_403 = __this->___petaly;
		int32_t L_404 = V_39;
		int32_t L_405 = ((int32_t)(L_404/2));
		double L_406 = (L_403)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_405));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_407 = __this->___petalx;
		int32_t L_408 = V_39;
		int32_t L_409 = ((int32_t)(L_408/2));
		double L_410 = (L_407)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_409));
		double L_411 = V_51;
		double L_412 = V_37;
		int32_t L_413 = V_40;
		double L_414;
		L_414 = sin(((double)il2cpp_codegen_multiply(((double)(L_411/((double)il2cpp_codegen_subtract(L_412, (1.0))))), ((double)L_413))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_415 = __this->___petaly;
		int32_t L_416 = V_39;
		int32_t L_417 = ((int32_t)(L_416/2));
		double L_418 = (L_415)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_417));
		double L_419 = V_51;
		double L_420 = V_37;
		int32_t L_421 = V_40;
		double L_422;
		L_422 = cos(((double)il2cpp_codegen_multiply(((double)(L_419/((double)il2cpp_codegen_subtract(L_420, (1.0))))), ((double)L_421))));
		V_21 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_393, L_397)), ((double)il2cpp_codegen_multiply(L_398, L_402)))), L_406)), ((double)il2cpp_codegen_multiply(L_410, L_414)))), ((double)il2cpp_codegen_multiply(L_418, L_422))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_423 = __this->___wedges;
		int32_t L_424 = V_39;
		int32_t L_425 = V_40;
		double L_426 = V_22;
		(L_423)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_424, ((int32_t)20))), ((int32_t)24))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_425, 1))))))), (double)L_426);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_427 = __this->___wedges;
		int32_t L_428 = V_39;
		int32_t L_429 = V_40;
		double L_430 = V_23;
		(L_427)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_428, ((int32_t)20))), ((int32_t)25))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_429, 1))))))), (double)L_430);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_431 = __this->___wedges;
		int32_t L_432 = V_39;
		int32_t L_433 = V_40;
		double L_434 = V_20;
		(L_431)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_432, ((int32_t)20))), ((int32_t)26))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_433, 1))))))), (double)L_434);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_435 = __this->___wedges;
		int32_t L_436 = V_39;
		int32_t L_437 = V_40;
		double L_438 = V_21;
		(L_435)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_436, ((int32_t)20))), ((int32_t)27))), ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_subtract(L_437, 1))))))), (double)L_438);
		double L_439 = V_20;
		V_22 = L_439;
		double L_440 = V_21;
		V_23 = L_440;
	}

IL_089b:
	{
		int32_t L_441 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_441, 1));
	}

IL_08a1:
	{
		int32_t L_442 = V_40;
		double L_443 = V_37;
		if ((((double)((double)L_442)) < ((double)L_443)))
		{
			goto IL_0705;
		}
	}
	{
		double L_444 = V_2;
		double L_445 = V_0;
		V_28 = ((double)il2cpp_codegen_subtract(L_444, L_445));
		double L_446 = V_3;
		double L_447 = V_1;
		V_29 = ((double)il2cpp_codegen_subtract(L_446, L_447));
		double L_448 = V_2;
		double L_449 = V_55;
		double L_450 = V_3;
		double L_451 = V_54;
		double L_452 = V_0;
		double L_453 = V_0;
		double L_454 = V_55;
		double L_455 = V_1;
		double L_456 = V_54;
		V_26 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_448, L_449)), ((double)il2cpp_codegen_multiply(L_450, L_451)))), L_452)), ((double)il2cpp_codegen_multiply(L_453, L_454)))), ((double)il2cpp_codegen_multiply(L_455, L_456))));
		double L_457 = V_2;
		double L_458 = V_54;
		double L_459 = V_3;
		double L_460 = V_55;
		double L_461 = V_1;
		double L_462 = V_0;
		double L_463 = V_54;
		double L_464 = V_1;
		double L_465 = V_55;
		V_27 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_457, L_458)), ((double)il2cpp_codegen_multiply(L_459, L_460)))), L_461)), ((double)il2cpp_codegen_multiply(L_462, L_463)))), ((double)il2cpp_codegen_multiply(L_464, L_465))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_466 = __this->___wedges;
		int32_t L_467 = V_39;
		double L_468 = V_26;
		(L_466)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_467, ((int32_t)20))), ((int32_t)36)))), (double)L_468);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_469 = __this->___wedges;
		int32_t L_470 = V_39;
		double L_471 = V_27;
		(L_469)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_470, ((int32_t)20))), ((int32_t)37)))), (double)L_471);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_472 = __this->___wedges;
		int32_t L_473 = V_39;
		double L_474 = V_0;
		(L_472)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_473, ((int32_t)20))), ((int32_t)38)))), (double)L_474);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_475 = __this->___wedges;
		int32_t L_476 = V_39;
		double L_477 = V_1;
		(L_475)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_476, ((int32_t)20))), ((int32_t)39)))), (double)L_477);
		int32_t L_478 = V_39;
		if (L_478)
		{
			goto IL_0f01;
		}
	}
	{
		int32_t L_479 = V_35;
		switch (((int32_t)il2cpp_codegen_subtract(L_479, 4)))
		{
			case 0:
			{
				goto IL_0956;
			}
			case 1:
			{
				goto IL_0f01;
			}
			case 2:
			{
				goto IL_0a53;
			}
			case 3:
			{
				goto IL_0f01;
			}
			case 4:
			{
				goto IL_0b84;
			}
			case 5:
			{
				goto IL_0f01;
			}
			case 6:
			{
				goto IL_0d15;
			}
		}
	}
	{
		goto IL_0f01;
	}

IL_0956:
	{
		double L_480 = V_0;
		double L_481 = V_1;
		double L_482 = V_14;
		double L_483 = V_15;
		double L_484 = V_2;
		double L_485 = V_3;
		double L_486 = V_16;
		double L_487 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_480, L_481, L_482, L_483, L_484, L_485, L_486, L_487, (&V_30), NULL);
		double L_488 = V_0;
		double L_489 = V_1;
		double L_490 = V_14;
		double L_491 = V_15;
		double L_492 = V_2;
		double L_493 = V_3;
		double L_494 = V_24;
		double L_495 = V_25;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_488, L_489, L_490, L_491, L_492, L_493, L_494, L_495, (&V_31), NULL);
		double L_496 = V_0;
		double L_497 = V_1;
		double L_498 = V_26;
		double L_499 = V_27;
		double L_500 = V_2;
		double L_501 = V_3;
		double L_502 = V_24;
		double L_503 = V_25;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_496, L_497, L_498, L_499, L_500, L_501, L_502, L_503, (&V_32), NULL);
		double L_504 = V_0;
		double L_505 = V_1;
		double L_506 = V_26;
		double L_507 = V_27;
		double L_508 = V_2;
		double L_509 = V_3;
		double L_510 = V_16;
		double L_511 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_504, L_505, L_506, L_507, L_508, L_509, L_510, L_511, (&V_33), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_512 = V_30;
		int32_t L_513 = 0;
		double L_514 = (L_512)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_513));
		if ((!(((double)L_514) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_515 = V_31;
		int32_t L_516 = 0;
		double L_517 = (L_515)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_516));
		if ((!(((double)L_517) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_518 = V_32;
		int32_t L_519 = 0;
		double L_520 = (L_518)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_519));
		if ((!(((double)L_520) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_521 = V_33;
		int32_t L_522 = 0;
		double L_523 = (L_521)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_522));
		if ((!(((double)L_523) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_524 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_525 = V_30;
		int32_t L_526 = 1;
		double L_527 = (L_525)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_526));
		(L_524)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_527);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_528 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_529 = V_30;
		int32_t L_530 = 2;
		double L_531 = (L_529)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_530));
		(L_528)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_531);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_532 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_533 = V_31;
		int32_t L_534 = 1;
		double L_535 = (L_533)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_534));
		(L_532)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_535);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_536 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_537 = V_31;
		int32_t L_538 = 2;
		double L_539 = (L_537)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_538));
		(L_536)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_539);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_540 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_541 = V_32;
		int32_t L_542 = 1;
		double L_543 = (L_541)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_542));
		(L_540)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)L_543);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_544 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_545 = V_32;
		int32_t L_546 = 2;
		double L_547 = (L_545)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_546));
		(L_544)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (double)L_547);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_548 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_549 = V_33;
		int32_t L_550 = 1;
		double L_551 = (L_549)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_550));
		(L_548)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (double)L_551);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_552 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_553 = V_33;
		int32_t L_554 = 2;
		double L_555 = (L_553)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_554));
		(L_552)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (double)L_555);
		goto IL_0f01;
	}

IL_0a53:
	{
		double L_556 = V_0;
		double L_557 = V_1;
		double L_558 = V_14;
		double L_559 = V_15;
		double L_560 = V_2;
		double L_561 = V_3;
		double L_562 = V_16;
		double L_563 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_556, L_557, L_558, L_559, L_560, L_561, L_562, L_563, (&V_30), NULL);
		double L_564 = V_0;
		double L_565 = V_1;
		double L_566 = V_14;
		double L_567 = V_15;
		double L_568 = V_2;
		double L_569 = V_3;
		double L_570 = V_24;
		double L_571 = V_25;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_564, L_565, L_566, L_567, L_568, L_569, L_570, L_571, (&V_31), NULL);
		double L_572 = V_0;
		double L_573 = V_1;
		double L_574 = V_26;
		double L_575 = V_27;
		double L_576 = V_2;
		double L_577 = V_3;
		double L_578 = V_16;
		double L_579 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_572, L_573, L_574, L_575, L_576, L_577, L_578, L_579, (&V_32), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_580 = V_30;
		int32_t L_581 = 0;
		double L_582 = (L_580)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_581));
		if ((!(((double)L_582) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_583 = V_31;
		int32_t L_584 = 0;
		double L_585 = (L_583)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_584));
		if ((!(((double)L_585) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_586 = V_32;
		int32_t L_587 = 0;
		double L_588 = (L_586)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_587));
		if ((!(((double)L_588) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_589 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_590 = V_30;
		int32_t L_591 = 1;
		double L_592 = (L_590)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_591));
		(L_589)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_592);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_593 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_594 = V_30;
		int32_t L_595 = 2;
		double L_596 = (L_594)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_595));
		(L_593)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_596);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_597 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_598 = V_31;
		int32_t L_599 = 1;
		double L_600 = (L_598)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_599));
		(L_597)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_600);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_601 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_602 = V_31;
		int32_t L_603 = 2;
		double L_604 = (L_602)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_603));
		(L_601)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_604);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_605 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_606 = __this->___wedges;
		int32_t L_607 = V_39;
		int32_t L_608 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_607, ((int32_t)20))), 8));
		double L_609 = (L_606)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_608));
		(L_605)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)L_609);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_610 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_611 = __this->___wedges;
		int32_t L_612 = V_39;
		int32_t L_613 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_612, ((int32_t)20))), ((int32_t)9)));
		double L_614 = (L_611)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_613));
		(L_610)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (double)L_614);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_615 = __this->___initialConvexPoly;
		double L_616 = V_12;
		(L_615)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (double)L_616);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_617 = __this->___initialConvexPoly;
		double L_618 = V_13;
		(L_617)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (double)L_618);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_619 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_620 = __this->___wedges;
		int32_t L_621 = V_39;
		int32_t L_622 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_621, ((int32_t)20))), ((int32_t)26)));
		double L_623 = (L_620)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_622));
		(L_619)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (double)L_623);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_624 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_625 = __this->___wedges;
		int32_t L_626 = V_39;
		int32_t L_627 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_626, ((int32_t)20))), ((int32_t)27)));
		double L_628 = (L_625)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_627));
		(L_624)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (double)L_628);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_629 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_630 = V_32;
		int32_t L_631 = 1;
		double L_632 = (L_630)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_631));
		(L_629)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (double)L_632);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_633 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_634 = V_32;
		int32_t L_635 = 2;
		double L_636 = (L_634)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_635));
		(L_633)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (double)L_636);
		goto IL_0f01;
	}

IL_0b84:
	{
		double L_637 = V_0;
		double L_638 = V_1;
		double L_639 = V_14;
		double L_640 = V_15;
		double L_641 = V_2;
		double L_642 = V_3;
		double L_643 = V_16;
		double L_644 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_637, L_638, L_639, L_640, L_641, L_642, L_643, L_644, (&V_30), NULL);
		double L_645 = V_0;
		double L_646 = V_1;
		double L_647 = V_14;
		double L_648 = V_15;
		double L_649 = V_2;
		double L_650 = V_3;
		double L_651 = V_24;
		double L_652 = V_25;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_645, L_646, L_647, L_648, L_649, L_650, L_651, L_652, (&V_31), NULL);
		double L_653 = V_0;
		double L_654 = V_1;
		double L_655 = V_26;
		double L_656 = V_27;
		double L_657 = V_2;
		double L_658 = V_3;
		double L_659 = V_16;
		double L_660 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_653, L_654, L_655, L_656, L_657, L_658, L_659, L_660, (&V_32), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_661 = V_30;
		int32_t L_662 = 0;
		double L_663 = (L_661)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_662));
		if ((!(((double)L_663) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_664 = V_31;
		int32_t L_665 = 0;
		double L_666 = (L_664)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_665));
		if ((!(((double)L_666) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_667 = V_32;
		int32_t L_668 = 0;
		double L_669 = (L_667)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_668));
		if ((!(((double)L_669) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_670 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_671 = V_30;
		int32_t L_672 = 1;
		double L_673 = (L_671)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_672));
		(L_670)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_673);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_674 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_675 = V_30;
		int32_t L_676 = 2;
		double L_677 = (L_675)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_676));
		(L_674)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_677);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_678 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_679 = V_31;
		int32_t L_680 = 1;
		double L_681 = (L_679)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_680));
		(L_678)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_681);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_682 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_683 = V_31;
		int32_t L_684 = 2;
		double L_685 = (L_683)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_684));
		(L_682)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_685);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_686 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_687 = __this->___wedges;
		int32_t L_688 = V_39;
		int32_t L_689 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_688, ((int32_t)20))), ((int32_t)12)));
		double L_690 = (L_687)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_689));
		(L_686)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)L_690);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_691 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_692 = __this->___wedges;
		int32_t L_693 = V_39;
		int32_t L_694 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_693, ((int32_t)20))), ((int32_t)13)));
		double L_695 = (L_692)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_694));
		(L_691)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (double)L_695);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_696 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_697 = __this->___wedges;
		int32_t L_698 = V_39;
		int32_t L_699 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_698, ((int32_t)20))), 8));
		double L_700 = (L_697)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_699));
		(L_696)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (double)L_700);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_701 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_702 = __this->___wedges;
		int32_t L_703 = V_39;
		int32_t L_704 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_703, ((int32_t)20))), ((int32_t)9)));
		double L_705 = (L_702)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_704));
		(L_701)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (double)L_705);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_706 = __this->___initialConvexPoly;
		double L_707 = V_12;
		(L_706)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (double)L_707);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_708 = __this->___initialConvexPoly;
		double L_709 = V_13;
		(L_708)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (double)L_709);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_710 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_711 = __this->___wedges;
		int32_t L_712 = V_39;
		int32_t L_713 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_712, ((int32_t)20))), ((int32_t)26)));
		double L_714 = (L_711)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_713));
		(L_710)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (double)L_714);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_715 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_716 = __this->___wedges;
		int32_t L_717 = V_39;
		int32_t L_718 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_717, ((int32_t)20))), ((int32_t)27)));
		double L_719 = (L_716)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_718));
		(L_715)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (double)L_719);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_720 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_721 = __this->___wedges;
		int32_t L_722 = V_39;
		int32_t L_723 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_722, ((int32_t)20))), ((int32_t)30)));
		double L_724 = (L_721)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_723));
		(L_720)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (double)L_724);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_725 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_726 = __this->___wedges;
		int32_t L_727 = V_39;
		int32_t L_728 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_727, ((int32_t)20))), ((int32_t)31)));
		double L_729 = (L_726)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_728));
		(L_725)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (double)L_729);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_730 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_731 = V_32;
		int32_t L_732 = 1;
		double L_733 = (L_731)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_732));
		(L_730)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (double)L_733);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_734 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_735 = V_32;
		int32_t L_736 = 2;
		double L_737 = (L_735)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_736));
		(L_734)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (double)L_737);
		goto IL_0f01;
	}

IL_0d15:
	{
		double L_738 = V_0;
		double L_739 = V_1;
		double L_740 = V_14;
		double L_741 = V_15;
		double L_742 = V_2;
		double L_743 = V_3;
		double L_744 = V_16;
		double L_745 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_738, L_739, L_740, L_741, L_742, L_743, L_744, L_745, (&V_30), NULL);
		double L_746 = V_0;
		double L_747 = V_1;
		double L_748 = V_14;
		double L_749 = V_15;
		double L_750 = V_2;
		double L_751 = V_3;
		double L_752 = V_24;
		double L_753 = V_25;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_746, L_747, L_748, L_749, L_750, L_751, L_752, L_753, (&V_31), NULL);
		double L_754 = V_0;
		double L_755 = V_1;
		double L_756 = V_26;
		double L_757 = V_27;
		double L_758 = V_2;
		double L_759 = V_3;
		double L_760 = V_16;
		double L_761 = V_17;
		NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4(__this, L_754, L_755, L_756, L_757, L_758, L_759, L_760, L_761, (&V_32), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_762 = V_30;
		int32_t L_763 = 0;
		double L_764 = (L_762)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_763));
		if ((!(((double)L_764) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_765 = V_31;
		int32_t L_766 = 0;
		double L_767 = (L_765)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_766));
		if ((!(((double)L_767) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_768 = V_32;
		int32_t L_769 = 0;
		double L_770 = (L_768)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_769));
		if ((!(((double)L_770) == ((double)(1.0)))))
		{
			goto IL_0f01;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_771 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_772 = V_30;
		int32_t L_773 = 1;
		double L_774 = (L_772)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_773));
		(L_771)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)L_774);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_775 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_776 = V_30;
		int32_t L_777 = 2;
		double L_778 = (L_776)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_777));
		(L_775)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)L_778);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_779 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_780 = V_31;
		int32_t L_781 = 1;
		double L_782 = (L_780)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_781));
		(L_779)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_782);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_783 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_784 = V_31;
		int32_t L_785 = 2;
		double L_786 = (L_784)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_785));
		(L_783)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_786);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_787 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_788 = __this->___wedges;
		int32_t L_789 = V_39;
		int32_t L_790 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_789, ((int32_t)20))), ((int32_t)16)));
		double L_791 = (L_788)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_790));
		(L_787)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)L_791);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_792 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_793 = __this->___wedges;
		int32_t L_794 = V_39;
		int32_t L_795 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_794, ((int32_t)20))), ((int32_t)17)));
		double L_796 = (L_793)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_795));
		(L_792)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (double)L_796);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_797 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_798 = __this->___wedges;
		int32_t L_799 = V_39;
		int32_t L_800 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_799, ((int32_t)20))), ((int32_t)12)));
		double L_801 = (L_798)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_800));
		(L_797)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (double)L_801);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_802 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_803 = __this->___wedges;
		int32_t L_804 = V_39;
		int32_t L_805 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_804, ((int32_t)20))), ((int32_t)13)));
		double L_806 = (L_803)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_805));
		(L_802)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (double)L_806);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_807 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_808 = __this->___wedges;
		int32_t L_809 = V_39;
		int32_t L_810 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_809, ((int32_t)20))), 8));
		double L_811 = (L_808)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_810));
		(L_807)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (double)L_811);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_812 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_813 = __this->___wedges;
		int32_t L_814 = V_39;
		int32_t L_815 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_814, ((int32_t)20))), ((int32_t)9)));
		double L_816 = (L_813)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_815));
		(L_812)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (double)L_816);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_817 = __this->___initialConvexPoly;
		double L_818 = V_12;
		(L_817)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (double)L_818);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_819 = __this->___initialConvexPoly;
		double L_820 = V_13;
		(L_819)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (double)L_820);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_821 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_822 = __this->___wedges;
		int32_t L_823 = V_39;
		int32_t L_824 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_823, ((int32_t)20))), ((int32_t)28)));
		double L_825 = (L_822)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_824));
		(L_821)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (double)L_825);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_826 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_827 = __this->___wedges;
		int32_t L_828 = V_39;
		int32_t L_829 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_828, ((int32_t)20))), ((int32_t)29)));
		double L_830 = (L_827)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_829));
		(L_826)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (double)L_830);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_831 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_832 = __this->___wedges;
		int32_t L_833 = V_39;
		int32_t L_834 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_833, ((int32_t)20))), ((int32_t)32)));
		double L_835 = (L_832)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_834));
		(L_831)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (double)L_835);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_836 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_837 = __this->___wedges;
		int32_t L_838 = V_39;
		int32_t L_839 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_838, ((int32_t)20))), ((int32_t)33)));
		double L_840 = (L_837)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_839));
		(L_836)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (double)L_840);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_841 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_842 = __this->___wedges;
		int32_t L_843 = V_39;
		int32_t L_844 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_843, ((int32_t)20))), ((int32_t)34)));
		double L_845 = (L_842)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_844));
		(L_841)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (double)L_845);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_846 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_847 = __this->___wedges;
		int32_t L_848 = V_39;
		int32_t L_849 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_848, ((int32_t)20))), ((int32_t)35)));
		double L_850 = (L_847)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_849));
		(L_846)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (double)L_850);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_851 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_852 = V_32;
		int32_t L_853 = 1;
		double L_854 = (L_852)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_853));
		(L_851)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (double)L_854);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_855 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_856 = V_32;
		int32_t L_857 = 2;
		double L_858 = (L_856)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_857));
		(L_855)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (double)L_858);
	}

IL_0f01:
	{
		double L_859 = V_2;
		V_0 = L_859;
		double L_860 = V_3;
		V_1 = L_860;
		double L_861 = V_4;
		V_2 = L_861;
		double L_862 = V_5;
		V_3 = L_862;
		int32_t L_863 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_863, 2));
	}

IL_0f11:
	{
		int32_t L_864 = V_39;
		int32_t L_865 = ___0_numpoints;
		if ((((int32_t)L_864) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_865, 2)))))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_866 = ___0_numpoints;
		if (!L_866)
		{
			goto IL_135a;
		}
	}
	{
		int32_t L_867 = ___0_numpoints;
		V_42 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_867, 1))/2)), 1));
		V_43 = 0;
		V_44 = 0;
		V_39 = 1;
		int32_t L_868 = V_35;
		V_45 = L_868;
		V_40 = 0;
		goto IL_1009;
	}

IL_0f3f:
	{
		int32_t L_869 = V_35;
		if ((!(((uint32_t)L_869) == ((uint32_t)4))))
		{
			goto IL_0f79;
		}
	}
	{
		int32_t L_870 = V_40;
		if ((((int32_t)L_870) == ((int32_t)8)))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_871 = V_40;
		if ((((int32_t)L_871) == ((int32_t)((int32_t)12))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_872 = V_40;
		if ((((int32_t)L_872) == ((int32_t)((int32_t)16))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_873 = V_40;
		if ((((int32_t)L_873) == ((int32_t)((int32_t)24))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_874 = V_40;
		if ((((int32_t)L_874) == ((int32_t)((int32_t)28))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_875 = V_40;
		if ((((int32_t)L_875) == ((int32_t)((int32_t)32))))
		{
			goto IL_1003;
		}
	}

IL_0f79:
	{
		int32_t L_876 = V_35;
		if ((!(((uint32_t)L_876) == ((uint32_t)6))))
		{
			goto IL_0f96;
		}
	}
	{
		int32_t L_877 = V_40;
		if ((((int32_t)L_877) == ((int32_t)((int32_t)12))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_878 = V_40;
		if ((((int32_t)L_878) == ((int32_t)((int32_t)16))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_879 = V_40;
		if ((((int32_t)L_879) == ((int32_t)((int32_t)28))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_880 = V_40;
		if ((((int32_t)L_880) == ((int32_t)((int32_t)32))))
		{
			goto IL_1003;
		}
	}

IL_0f96:
	{
		int32_t L_881 = V_35;
		if ((!(((uint32_t)L_881) == ((uint32_t)8))))
		{
			goto IL_0fa7;
		}
	}
	{
		int32_t L_882 = V_40;
		if ((((int32_t)L_882) == ((int32_t)((int32_t)16))))
		{
			goto IL_1003;
		}
	}
	{
		int32_t L_883 = V_40;
		if ((((int32_t)L_883) == ((int32_t)((int32_t)32))))
		{
			goto IL_1003;
		}
	}

IL_0fa7:
	{
		int32_t L_884 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_885 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___initialConvexPoly);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_886 = __this->___wedges;
		int32_t L_887 = V_42;
		int32_t L_888 = V_40;
		int32_t L_889 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_887)), L_888));
		double L_890 = (L_886)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_889));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_891 = __this->___wedges;
		int32_t L_892 = V_42;
		int32_t L_893 = V_40;
		int32_t L_894 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_892)), 1)), L_893));
		double L_895 = (L_891)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_894));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_896 = __this->___wedges;
		int32_t L_897 = V_42;
		int32_t L_898 = V_40;
		int32_t L_899 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_897)), 2)), L_898));
		double L_900 = (L_896)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_899));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_901 = __this->___wedges;
		int32_t L_902 = V_42;
		int32_t L_903 = V_40;
		int32_t L_904 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_902)), 3)), L_903));
		double L_905 = (L_901)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_904));
		int32_t L_906;
		L_906 = NewLocation_HalfPlaneIntersection_mC5C920335C264B62EFBEE14AE6C01B8F74E71F47(__this, L_884, L_885, L_890, L_895, L_900, L_905, NULL);
		V_34 = L_906;
		int32_t L_907 = V_34;
		if (L_907)
		{
			goto IL_0fff;
		}
	}
	{
		return (bool)0;
	}

IL_0fff:
	{
		int32_t L_908 = V_34;
		V_45 = L_908;
	}

IL_1003:
	{
		int32_t L_909 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_909, 4));
	}

IL_1009:
	{
		int32_t L_910 = V_40;
		if ((((int32_t)L_910) < ((int32_t)((int32_t)40))))
		{
			goto IL_0f3f;
		}
	}
	{
		int32_t L_911 = V_44;
		V_44 = ((int32_t)il2cpp_codegen_add(L_911, 1));
		goto IL_1131;
	}

IL_101d:
	{
		V_40 = 0;
		goto IL_1113;
	}

IL_1025:
	{
		int32_t L_912 = V_35;
		if ((!(((uint32_t)L_912) == ((uint32_t)4))))
		{
			goto IL_105f;
		}
	}
	{
		int32_t L_913 = V_40;
		if ((((int32_t)L_913) == ((int32_t)8)))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_914 = V_40;
		if ((((int32_t)L_914) == ((int32_t)((int32_t)12))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_915 = V_40;
		if ((((int32_t)L_915) == ((int32_t)((int32_t)16))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_916 = V_40;
		if ((((int32_t)L_916) == ((int32_t)((int32_t)24))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_917 = V_40;
		if ((((int32_t)L_917) == ((int32_t)((int32_t)28))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_918 = V_40;
		if ((((int32_t)L_918) == ((int32_t)((int32_t)32))))
		{
			goto IL_110d;
		}
	}

IL_105f:
	{
		int32_t L_919 = V_35;
		if ((!(((uint32_t)L_919) == ((uint32_t)6))))
		{
			goto IL_1088;
		}
	}
	{
		int32_t L_920 = V_40;
		if ((((int32_t)L_920) == ((int32_t)((int32_t)12))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_921 = V_40;
		if ((((int32_t)L_921) == ((int32_t)((int32_t)16))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_922 = V_40;
		if ((((int32_t)L_922) == ((int32_t)((int32_t)28))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_923 = V_40;
		if ((((int32_t)L_923) == ((int32_t)((int32_t)32))))
		{
			goto IL_110d;
		}
	}

IL_1088:
	{
		int32_t L_924 = V_35;
		if ((!(((uint32_t)L_924) == ((uint32_t)8))))
		{
			goto IL_1099;
		}
	}
	{
		int32_t L_925 = V_40;
		if ((((int32_t)L_925) == ((int32_t)((int32_t)16))))
		{
			goto IL_110d;
		}
	}
	{
		int32_t L_926 = V_40;
		if ((((int32_t)L_926) == ((int32_t)((int32_t)32))))
		{
			goto IL_110d;
		}
	}

IL_1099:
	{
		int32_t L_927 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_928 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)(&__this->___initialConvexPoly);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_929 = __this->___wedges;
		int32_t L_930 = V_39;
		int32_t L_931 = V_42;
		int32_t L_932 = V_43;
		int32_t L_933 = V_40;
		int32_t L_934 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), ((int32_t)il2cpp_codegen_add(L_930, ((int32_t)il2cpp_codegen_multiply(L_931, L_932)))))), L_933));
		double L_935 = (L_929)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_934));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_936 = __this->___wedges;
		int32_t L_937 = V_39;
		int32_t L_938 = V_42;
		int32_t L_939 = V_43;
		int32_t L_940 = V_40;
		int32_t L_941 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), ((int32_t)il2cpp_codegen_add(L_937, ((int32_t)il2cpp_codegen_multiply(L_938, L_939)))))), 1)), L_940));
		double L_942 = (L_936)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_941));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_943 = __this->___wedges;
		int32_t L_944 = V_39;
		int32_t L_945 = V_42;
		int32_t L_946 = V_43;
		int32_t L_947 = V_40;
		int32_t L_948 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), ((int32_t)il2cpp_codegen_add(L_944, ((int32_t)il2cpp_codegen_multiply(L_945, L_946)))))), 2)), L_947));
		double L_949 = (L_943)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_948));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_950 = __this->___wedges;
		int32_t L_951 = V_39;
		int32_t L_952 = V_42;
		int32_t L_953 = V_43;
		int32_t L_954 = V_40;
		int32_t L_955 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)40), ((int32_t)il2cpp_codegen_add(L_951, ((int32_t)il2cpp_codegen_multiply(L_952, L_953)))))), 3)), L_954));
		double L_956 = (L_950)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_955));
		int32_t L_957;
		L_957 = NewLocation_HalfPlaneIntersection_mC5C920335C264B62EFBEE14AE6C01B8F74E71F47(__this, L_927, L_928, L_935, L_942, L_949, L_956, NULL);
		V_34 = L_957;
		int32_t L_958 = V_34;
		if (L_958)
		{
			goto IL_1109;
		}
	}
	{
		return (bool)0;
	}

IL_1109:
	{
		int32_t L_959 = V_34;
		V_45 = L_959;
	}

IL_110d:
	{
		int32_t L_960 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_960, 4));
	}

IL_1113:
	{
		int32_t L_961 = V_40;
		if ((((int32_t)L_961) < ((int32_t)((int32_t)40))))
		{
			goto IL_1025;
		}
	}
	{
		int32_t L_962 = V_39;
		int32_t L_963 = V_43;
		V_39 = ((int32_t)il2cpp_codegen_add(L_962, L_963));
		int32_t L_964 = V_43;
		V_43 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_964, 1))%2));
		int32_t L_965 = V_44;
		V_44 = ((int32_t)il2cpp_codegen_add(L_965, 1));
	}

IL_1131:
	{
		int32_t L_966 = V_44;
		int32_t L_967 = ___0_numpoints;
		if ((((int32_t)L_966) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_967, 1)))))
		{
			goto IL_101d;
		}
	}
	{
		int32_t L_968 = V_34;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_969 = __this->___initialConvexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_970 = ___2_newloc;
		NewLocation_FindPolyCentroid_mE6ED906E03E7E5373A822D1C5857457948E99AC7(__this, L_968, L_969, L_970, NULL);
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_971 = __this->___behavior;
		double L_972;
		L_972 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_971, NULL);
		if ((((double)L_972) == ((double)(0.0))))
		{
			goto IL_1358;
		}
	}
	{
		V_38 = 0;
		V_40 = 0;
		goto IL_119d;
	}

IL_116b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_973 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_974 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_973);
		int32_t L_975 = 0;
		double L_976 = (L_974)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_975));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_977 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_978 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_977);
		int32_t L_979 = 1;
		double L_980 = (L_978)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_979));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_981 = ___1_points;
		int32_t L_982 = V_40;
		int32_t L_983 = L_982;
		double L_984 = (L_981)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_983));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_985 = ___1_points;
		int32_t L_986 = V_40;
		int32_t L_987 = ((int32_t)il2cpp_codegen_add(L_986, 1));
		double L_988 = (L_985)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_987));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_989 = ___1_points;
		int32_t L_990 = V_40;
		int32_t L_991 = ((int32_t)il2cpp_codegen_add(L_990, 2));
		double L_992 = (L_989)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_991));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_993 = ___1_points;
		int32_t L_994 = V_40;
		int32_t L_995 = ((int32_t)il2cpp_codegen_add(L_994, 3));
		double L_996 = (L_993)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_995));
		bool L_997;
		L_997 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_976, L_980, L_984, L_988, L_992, L_996, NULL);
		if (!L_997)
		{
			goto IL_1197;
		}
	}
	{
		int32_t L_998 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add(L_998, 1));
	}

IL_1197:
	{
		int32_t L_999 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_999, 2));
	}

IL_119d:
	{
		int32_t L_1000 = V_40;
		int32_t L_1001 = ___0_numpoints;
		if ((((int32_t)L_1000) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_1001, 2)), 2)))))
		{
			goto IL_116b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1002 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1003 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1002);
		int32_t L_1004 = 0;
		double L_1005 = (L_1003)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1004));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1006 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1007 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1006);
		int32_t L_1008 = 1;
		double L_1009 = (L_1007)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1008));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1010 = ___1_points;
		int32_t L_1011 = 0;
		double L_1012 = (L_1010)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1011));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1013 = ___1_points;
		int32_t L_1014 = 1;
		double L_1015 = (L_1013)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1014));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1016 = ___1_points;
		int32_t L_1017 = ___0_numpoints;
		int32_t L_1018 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_1017, 2)), 2));
		double L_1019 = (L_1016)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1018));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1020 = ___1_points;
		int32_t L_1021 = ___0_numpoints;
		int32_t L_1022 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_1021, 2)), 1));
		double L_1023 = (L_1020)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1022));
		bool L_1024;
		L_1024 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1005, L_1009, L_1012, L_1015, L_1019, L_1023, NULL);
		if (!L_1024)
		{
			goto IL_11d0;
		}
	}
	{
		int32_t L_1025 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add(L_1025, 1));
	}

IL_11d0:
	{
		int32_t L_1026 = V_38;
		if (L_1026)
		{
			goto IL_11d6;
		}
	}
	{
		return (bool)1;
	}

IL_11d6:
	{
		int32_t L_1027 = ___0_numpoints;
		if ((((int32_t)L_1027) <= ((int32_t)2)))
		{
			goto IL_11de;
		}
	}
	{
		G_B104_0 = ((int32_t)30);
		goto IL_11e0;
	}

IL_11de:
	{
		G_B104_0 = ((int32_t)20);
	}

IL_11e0:
	{
		V_46 = G_B104_0;
		V_41 = 0;
		goto IL_134c;
	}

IL_11ea:
	{
		V_47 = 1;
		goto IL_133d;
	}

IL_11f2:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1028 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1029 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1028);
		(L_1029)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1030 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1031 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1030);
		(L_1031)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)(0.0));
		V_39 = 0;
		goto IL_12ba;
	}

IL_1214:
	{
		int32_t L_1032 = ___0_numpoints;
		V_48 = ((double)((1.0)/((double)L_1032)));
		int32_t L_1033 = V_39;
		int32_t L_1034 = V_41;
		if ((!(((uint32_t)L_1033) == ((uint32_t)L_1034))))
		{
			goto IL_1268;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1035 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1036 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1035);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1037 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1038 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1037);
		int32_t L_1039 = 0;
		double L_1040 = (L_1038)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1039));
		int32_t L_1041 = V_47;
		double L_1042 = V_48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1043 = ___1_points;
		int32_t L_1044 = V_39;
		int32_t L_1045 = L_1044;
		double L_1046 = (L_1043)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1045));
		(L_1036)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1040, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.10000000000000001), ((double)L_1041))), L_1042)), L_1046)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1047 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1048 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1047);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1049 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1050 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1049);
		int32_t L_1051 = 1;
		double L_1052 = (L_1050)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1051));
		int32_t L_1053 = V_47;
		double L_1054 = V_48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1055 = ___1_points;
		int32_t L_1056 = V_39;
		int32_t L_1057 = ((int32_t)il2cpp_codegen_add(L_1056, 1));
		double L_1058 = (L_1055)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1057));
		(L_1048)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1052, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.10000000000000001), ((double)L_1053))), L_1054)), L_1058)))));
		goto IL_12b4;
	}

IL_1268:
	{
		int32_t L_1059 = V_47;
		double L_1060 = V_48;
		int32_t L_1061 = ___0_numpoints;
		V_48 = ((double)(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.10000000000000001), ((double)L_1059))), L_1060))))/((double)((double)il2cpp_codegen_subtract(((double)L_1061), (1.0))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1062 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1063 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1062);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1064 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1065 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1064);
		int32_t L_1066 = 0;
		double L_1067 = (L_1065)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1066));
		double L_1068 = V_48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1069 = ___1_points;
		int32_t L_1070 = V_39;
		int32_t L_1071 = L_1070;
		double L_1072 = (L_1069)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1071));
		(L_1063)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1067, ((double)il2cpp_codegen_multiply(L_1068, L_1072)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1073 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1074 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1073);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1075 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1076 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1075);
		int32_t L_1077 = 1;
		double L_1078 = (L_1076)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1077));
		double L_1079 = V_48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1080 = ___1_points;
		int32_t L_1081 = V_39;
		int32_t L_1082 = ((int32_t)il2cpp_codegen_add(L_1081, 1));
		double L_1083 = (L_1080)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1082));
		(L_1074)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1078, ((double)il2cpp_codegen_multiply(L_1079, L_1083)))));
	}

IL_12b4:
	{
		int32_t L_1084 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_1084, 2));
	}

IL_12ba:
	{
		int32_t L_1085 = V_39;
		int32_t L_1086 = ___0_numpoints;
		if ((((int32_t)L_1085) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_1086)))))
		{
			goto IL_1214;
		}
	}
	{
		V_38 = 0;
		V_40 = 0;
		goto IL_12fe;
	}

IL_12cc:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1087 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1088 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1087);
		int32_t L_1089 = 0;
		double L_1090 = (L_1088)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1089));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1091 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1092 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1091);
		int32_t L_1093 = 1;
		double L_1094 = (L_1092)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1093));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1095 = ___1_points;
		int32_t L_1096 = V_40;
		int32_t L_1097 = L_1096;
		double L_1098 = (L_1095)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1097));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1099 = ___1_points;
		int32_t L_1100 = V_40;
		int32_t L_1101 = ((int32_t)il2cpp_codegen_add(L_1100, 1));
		double L_1102 = (L_1099)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1101));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1103 = ___1_points;
		int32_t L_1104 = V_40;
		int32_t L_1105 = ((int32_t)il2cpp_codegen_add(L_1104, 2));
		double L_1106 = (L_1103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1105));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1107 = ___1_points;
		int32_t L_1108 = V_40;
		int32_t L_1109 = ((int32_t)il2cpp_codegen_add(L_1108, 3));
		double L_1110 = (L_1107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1109));
		bool L_1111;
		L_1111 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1090, L_1094, L_1098, L_1102, L_1106, L_1110, NULL);
		if (!L_1111)
		{
			goto IL_12f8;
		}
	}
	{
		int32_t L_1112 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add(L_1112, 1));
	}

IL_12f8:
	{
		int32_t L_1113 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_1113, 2));
	}

IL_12fe:
	{
		int32_t L_1114 = V_40;
		int32_t L_1115 = ___0_numpoints;
		if ((((int32_t)L_1114) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_1115, 2)), 2)))))
		{
			goto IL_12cc;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1116 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1117 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1116);
		int32_t L_1118 = 0;
		double L_1119 = (L_1117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1118));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_1120 = ___2_newloc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1121 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_1120);
		int32_t L_1122 = 1;
		double L_1123 = (L_1121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1122));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1124 = ___1_points;
		int32_t L_1125 = 0;
		double L_1126 = (L_1124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1125));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1127 = ___1_points;
		int32_t L_1128 = 1;
		double L_1129 = (L_1127)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1128));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1130 = ___1_points;
		int32_t L_1131 = ___0_numpoints;
		int32_t L_1132 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_1131, 2)), 2));
		double L_1133 = (L_1130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1132));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1134 = ___1_points;
		int32_t L_1135 = ___0_numpoints;
		int32_t L_1136 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_1135, 2)), 1));
		double L_1137 = (L_1134)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1136));
		bool L_1138;
		L_1138 = NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B(__this, L_1119, L_1123, L_1126, L_1129, L_1133, L_1137, NULL);
		if (!L_1138)
		{
			goto IL_1331;
		}
	}
	{
		int32_t L_1139 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add(L_1139, 1));
	}

IL_1331:
	{
		int32_t L_1140 = V_38;
		if (L_1140)
		{
			goto IL_1337;
		}
	}
	{
		return (bool)1;
	}

IL_1337:
	{
		int32_t L_1141 = V_47;
		V_47 = ((int32_t)il2cpp_codegen_add(L_1141, 1));
	}

IL_133d:
	{
		int32_t L_1142 = V_47;
		int32_t L_1143 = V_46;
		if ((((int32_t)L_1142) < ((int32_t)L_1143)))
		{
			goto IL_11f2;
		}
	}
	{
		int32_t L_1144 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add(L_1144, 2));
	}

IL_134c:
	{
		int32_t L_1145 = V_41;
		int32_t L_1146 = ___0_numpoints;
		if ((((int32_t)L_1145) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_1146)))))
		{
			goto IL_11ea;
		}
	}
	{
		goto IL_135a;
	}

IL_1358:
	{
		return (bool)1;
	}

IL_135a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_ValidPolygonAngles_m001F2307C35F4ACFF7A766F0BB90663B42E77FD2 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_009b;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___0_numpoints;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))))
		{
			goto IL_002f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___1_points;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_multiply(L_3, 2));
		double L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___1_points;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 2)), 1));
		double L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ___1_points;
		int32_t L_11 = 0;
		double L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = ___1_points;
		int32_t L_14 = 1;
		double L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = ___1_points;
		int32_t L_17 = 2;
		double L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = ___1_points;
		int32_t L_20 = 3;
		double L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = NewLocation_IsBadPolygonAngle_m8E37BD0666830988E71232ADD88FD1A46A43950C(__this, L_5, L_9, L_12, L_15, L_18, L_21, NULL);
		if (!L_22)
		{
			goto IL_0097;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___0_numpoints;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_24, 2))))))
		{
			goto IL_0061;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25 = ___1_points;
		int32_t L_26 = V_0;
		int32_t L_27 = ((int32_t)il2cpp_codegen_multiply(L_26, 2));
		double L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = ___1_points;
		int32_t L_30 = V_0;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_30, 2)), 1));
		double L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33 = ___1_points;
		int32_t L_34 = V_0;
		int32_t L_35 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_34, 1)), 2));
		double L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = ___1_points;
		int32_t L_38 = V_0;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_38, 1)), 2)), 1));
		double L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_41 = ___1_points;
		int32_t L_42 = 0;
		double L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44 = ___1_points;
		int32_t L_45 = 1;
		double L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		bool L_47;
		L_47 = NewLocation_IsBadPolygonAngle_m8E37BD0666830988E71232ADD88FD1A46A43950C(__this, L_28, L_32, L_36, L_40, L_43, L_46, NULL);
		if (!L_47)
		{
			goto IL_0097;
		}
	}
	{
		return (bool)0;
	}

IL_0061:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = ___1_points;
		int32_t L_49 = V_0;
		int32_t L_50 = ((int32_t)il2cpp_codegen_multiply(L_49, 2));
		double L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52 = ___1_points;
		int32_t L_53 = V_0;
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_53, 2)), 1));
		double L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_56 = ___1_points;
		int32_t L_57 = V_0;
		int32_t L_58 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_57, 1)), 2));
		double L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_60 = ___1_points;
		int32_t L_61 = V_0;
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_61, 1)), 2)), 1));
		double L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_64 = ___1_points;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_65, 2)), 2));
		double L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_68 = ___1_points;
		int32_t L_69 = V_0;
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_69, 2)), 2)), 1));
		double L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		bool L_72;
		L_72 = NewLocation_IsBadPolygonAngle_m8E37BD0666830988E71232ADD88FD1A46A43950C(__this, L_51, L_55, L_59, L_63, L_67, L_71, NULL);
		if (!L_72)
		{
			goto IL_0097;
		}
	}
	{
		return (bool)0;
	}

IL_0097:
	{
		int32_t L_73 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_009b:
	{
		int32_t L_74 = V_0;
		int32_t L_75 = ___0_numpoints;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_IsBadPolygonAngle_m8E37BD0666830988E71232ADD88FD1A46A43950C (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	{
		double L_0 = ___0_x1;
		double L_1 = ___2_x2;
		V_0 = ((double)il2cpp_codegen_subtract(L_0, L_1));
		double L_2 = ___1_y1;
		double L_3 = ___3_y2;
		V_1 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		double L_4 = ___2_x2;
		double L_5 = ___4_x3;
		V_2 = ((double)il2cpp_codegen_subtract(L_4, L_5));
		double L_6 = ___3_y2;
		double L_7 = ___5_y3;
		V_3 = ((double)il2cpp_codegen_subtract(L_6, L_7));
		double L_8 = ___4_x3;
		double L_9 = ___0_x1;
		double L_10 = ___5_y3;
		double L_11 = ___1_y1;
		V_4 = ((double)il2cpp_codegen_subtract(L_10, L_11));
		double L_12 = V_0;
		double L_13 = V_0;
		double L_14 = V_1;
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_12, L_13)), ((double)il2cpp_codegen_multiply(L_14, L_15))));
		double L_16 = V_2;
		double L_17 = V_2;
		double L_18 = V_3;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_16, L_17)), ((double)il2cpp_codegen_multiply(L_18, L_19))));
		double L_20 = ((double)il2cpp_codegen_subtract(L_8, L_9));
		double L_21 = V_4;
		double L_22 = V_4;
		V_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_20, L_20)), ((double)il2cpp_codegen_multiply(L_21, L_22))));
		double L_23 = V_5;
		double L_24 = V_6;
		double L_25 = V_7;
		double L_26 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = sqrt(L_26);
		double L_28 = V_6;
		double L_29;
		L_29 = sqrt(L_28);
		double L_30;
		L_30 = acos(((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_23, L_24)), L_25))/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_27)), L_29)))));
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_31 = __this->___behavior;
		double L_32 = L_31->___goodAngle;
		double L_33;
		L_33 = sqrt(L_32);
		double L_34;
		L_34 = acos(L_33);
		if ((!(((double)L_30) < ((double)((double)il2cpp_codegen_multiply((2.0), L_34))))))
		{
			goto IL_0084;
		}
	}
	{
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_LineLineIntersection_m0F7408F7C5D1BA7BF22A1E23EC258D35AED988E4 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, double ___6_x4, double ___7_y4, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___8_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___7_y4;
		double L_1 = ___5_y3;
		double L_2 = ___2_x2;
		double L_3 = ___0_x1;
		double L_4 = ___6_x4;
		double L_5 = ___4_x3;
		double L_6 = ___3_y2;
		double L_7 = ___1_y1;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_0, L_1)), ((double)il2cpp_codegen_subtract(L_2, L_3)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_4, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_7))))));
		double L_8 = ___6_x4;
		double L_9 = ___4_x3;
		double L_10 = ___1_y1;
		double L_11 = ___5_y3;
		double L_12 = ___7_y4;
		double L_13 = ___5_y3;
		double L_14 = ___0_x1;
		double L_15 = ___4_x3;
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_8, L_9)), ((double)il2cpp_codegen_subtract(L_10, L_11)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_12, L_13)), ((double)il2cpp_codegen_subtract(L_14, L_15))))));
		double L_16 = ___2_x2;
		double L_17 = ___0_x1;
		double L_18 = ___1_y1;
		double L_19 = ___5_y3;
		double L_20 = ___3_y2;
		double L_21 = ___1_y1;
		double L_22 = ___0_x1;
		double L_23 = ___4_x3;
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_16, L_17)), ((double)il2cpp_codegen_subtract(L_18, L_19)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_20, L_21)), ((double)il2cpp_codegen_subtract(L_22, L_23))))));
		double L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_25;
		L_25 = fabs(((double)il2cpp_codegen_subtract(L_24, (0.0))));
		if ((!(((double)L_25) < ((double)(1.0E-50)))))
		{
			goto IL_009e;
		}
	}
	{
		double L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = fabs(((double)il2cpp_codegen_subtract(L_26, (0.0))));
		if ((!(((double)L_27) < ((double)(1.0E-50)))))
		{
			goto IL_009e;
		}
	}
	{
		double L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = fabs(((double)il2cpp_codegen_subtract(L_28, (0.0))));
		if ((!(((double)L_29) < ((double)(1.0E-50)))))
		{
			goto IL_009e;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_30 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_31 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_30);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		return;
	}

IL_009e:
	{
		double L_32 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = fabs(((double)il2cpp_codegen_subtract(L_32, (0.0))));
		if ((!(((double)L_33) < ((double)(1.0E-50)))))
		{
			goto IL_00c8;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_34 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_34);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		return;
	}

IL_00c8:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_36 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_36);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(1.0));
		double L_38 = V_0;
		double L_39 = V_2;
		V_0 = ((double)(L_38/L_39));
		double L_40 = V_1;
		double L_41 = V_2;
		V_1 = ((double)(L_40/L_41));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_42 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_42);
		double L_44 = ___0_x1;
		double L_45 = V_0;
		double L_46 = ___2_x2;
		double L_47 = ___0_x1;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_44, ((double)il2cpp_codegen_multiply(L_45, ((double)il2cpp_codegen_subtract(L_46, L_47)))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_48 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_49 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_48);
		double L_50 = ___1_y1;
		double L_51 = V_0;
		double L_52 = ___3_y2;
		double L_53 = ___1_y1;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_50, ((double)il2cpp_codegen_multiply(L_51, ((double)il2cpp_codegen_subtract(L_52, L_53)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_HalfPlaneIntersection_mC5C920335C264B62EFBEE14AE6C01B8F74E71F47 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numvertices, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___1_convexPoly, double ___2_x1, double ___3_y1, double ___4_x2, double ___5_y2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	double G_B7_0 = 0.0;
	double G_B10_0 = 0.0;
	double G_B15_0 = 0.0;
	{
		V_8 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)NULL;
		V_9 = 0;
		V_10 = 0;
		double L_0 = ___4_x2;
		double L_1 = ___2_x1;
		V_0 = ((double)il2cpp_codegen_subtract(L_0, L_1));
		double L_2 = ___5_y2;
		double L_3 = ___3_y1;
		V_1 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		int32_t L_4 = ___0_numvertices;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_5 = ___1_convexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_5);
		double L_7 = ___2_x1;
		double L_8 = ___3_y1;
		double L_9 = ___4_x2;
		double L_10 = ___5_y2;
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_11 = __this->___polys;
		int32_t L_12;
		L_12 = NewLocation_SplitConvexPolygon_m6268748F4AE88AEF7C6E0A3A93726DB3D352DC79(__this, L_4, L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		V_7 = L_12;
		int32_t L_13 = V_7;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_14 = ___0_numvertices;
		V_9 = L_14;
		goto IL_0137;
	}

IL_0039:
	{
		V_5 = 0;
		goto IL_00f6;
	}

IL_0041:
	{
		V_3 = (1.7976931348623157E+308);
		V_4 = (-1.7976931348623157E+308);
		V_6 = 1;
		goto IL_009b;
	}

IL_005b:
	{
		double L_15 = V_0;
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_16 = __this->___polys;
		int32_t L_17 = V_5;
		int32_t L_18 = L_17;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_6;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		double L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		double L_23 = ___3_y1;
		double L_24 = V_1;
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_25 = __this->___polys;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_6;
		int32_t L_30 = L_29;
		double L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		double L_32 = ___2_x1;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_15, ((double)il2cpp_codegen_subtract(L_22, L_23)))), ((double)il2cpp_codegen_multiply(L_24, ((double)il2cpp_codegen_subtract(L_31, L_32))))));
		double L_33 = V_2;
		double L_34 = V_3;
		if ((((double)L_33) < ((double)L_34)))
		{
			goto IL_0087;
		}
	}
	{
		double L_35 = V_3;
		G_B7_0 = L_35;
		goto IL_0088;
	}

IL_0087:
	{
		double L_36 = V_2;
		G_B7_0 = L_36;
	}

IL_0088:
	{
		V_3 = G_B7_0;
		double L_37 = V_2;
		double L_38 = V_4;
		if ((((double)L_37) > ((double)L_38)))
		{
			goto IL_0092;
		}
	}
	{
		double L_39 = V_4;
		G_B10_0 = L_39;
		goto IL_0093;
	}

IL_0092:
	{
		double L_40 = V_2;
		G_B10_0 = L_40;
	}

IL_0093:
	{
		V_4 = G_B10_0;
		int32_t L_41 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 2));
	}

IL_009b:
	{
		int32_t L_42 = V_6;
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_43 = __this->___polys;
		int32_t L_44 = V_5;
		int32_t L_45 = L_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = 0;
		double L_48 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		if ((((double)((double)L_42)) <= ((double)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_48)), (1.0))))))
		{
			goto IL_005b;
		}
	}
	{
		double L_49 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_50;
		L_50 = fabs(L_49);
		double L_51 = V_4;
		double L_52;
		L_52 = fabs(L_51);
		if ((((double)L_50) > ((double)L_52)))
		{
			goto IL_00d2;
		}
	}
	{
		double L_53 = V_4;
		G_B15_0 = L_53;
		goto IL_00d3;
	}

IL_00d2:
	{
		double L_54 = V_3;
		G_B15_0 = L_54;
	}

IL_00d3:
	{
		V_2 = G_B15_0;
		double L_55 = V_2;
		if ((!(((double)L_55) > ((double)(0.0)))))
		{
			goto IL_00f0;
		}
	}
	{
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_56 = __this->___polys;
		int32_t L_57 = V_5;
		int32_t L_58 = L_57;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_8 = L_59;
		V_10 = 1;
		goto IL_00ff;
	}

IL_00f0:
	{
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_00f6:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = V_7;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0041;
		}
	}

IL_00ff:
	{
		int32_t L_63 = V_10;
		if ((!(((uint32_t)L_63) == ((uint32_t)1))))
		{
			goto IL_0137;
		}
	}
	{
		goto IL_012e;
	}

IL_0106:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_64 = ___1_convexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_65 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_64);
		int32_t L_66 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_67 = V_8;
		int32_t L_68 = V_9;
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_68)), 1));
		double L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_66))), (double)L_70);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_71 = ___1_convexPoly;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_72 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_71);
		int32_t L_73 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_74 = V_8;
		int32_t L_75 = V_9;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_75)), 2));
		double L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_73)), 1))), (double)L_77);
		int32_t L_78 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_012e:
	{
		int32_t L_79 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_80 = V_8;
		int32_t L_81 = 0;
		double L_82 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		if ((((double)((double)L_79)) < ((double)L_82)))
		{
			goto IL_0106;
		}
	}

IL_0137:
	{
		int32_t L_83 = V_9;
		return L_83;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_SplitConvexPolygon_m6268748F4AE88AEF7C6E0A3A93726DB3D352DC79 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numvertices, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_convexPoly, double ___2_x1, double ___3_y1, double ___4_x2, double ___5_y2, DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* ___6_polys, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B39_0 = 0;
	{
		V_0 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		V_1 = L_0;
		V_2 = 0;
		V_3 = 0;
		V_6 = (9.9999999999999998E-13);
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		V_14 = 0;
		V_5 = 0;
		goto IL_0384;
	}

IL_0038:
	{
		int32_t L_1 = V_5;
		int32_t L_2 = ___0_numvertices;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, 2))) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_2)))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_3 = V_5;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		goto IL_0048;
	}

IL_0047:
	{
		G_B4_0 = 0;
	}

IL_0048:
	{
		V_15 = G_B4_0;
		double L_4 = ___2_x1;
		double L_5 = ___3_y1;
		double L_6 = ___4_x2;
		double L_7 = ___5_y2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = ___1_convexPoly;
		int32_t L_9 = V_5;
		int32_t L_10 = L_9;
		double L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = ___1_convexPoly;
		int32_t L_13 = V_5;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		double L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = ___1_convexPoly;
		int32_t L_17 = V_15;
		int32_t L_18 = L_17;
		double L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = ___1_convexPoly;
		int32_t L_21 = V_15;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		double L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		NewLocation_LineLineSegmentIntersection_mD2C5A92AD7EE19831CD48900992A91B7CB894A80(__this, L_4, L_5, L_6, L_7, L_11, L_15, L_19, L_23, (&V_1), NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = V_1;
		int32_t L_25 = 0;
		double L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = fabs(((double)il2cpp_codegen_subtract(L_26, (0.0))));
		double L_28 = V_6;
		if ((!(((double)L_27) <= ((double)L_28))))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_31 = __this->___poly2;
		int32_t L_32 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33 = ___1_convexPoly;
		int32_t L_34 = V_15;
		int32_t L_35 = L_34;
		double L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_32)), 1))), (double)L_36);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = __this->___poly2;
		int32_t L_38 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = ___1_convexPoly;
		int32_t L_40 = V_15;
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		double L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_38))), (double)L_42);
		goto IL_00d1;
	}

IL_00ad:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44 = __this->___poly1;
		int32_t L_45 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = ___1_convexPoly;
		int32_t L_47 = V_15;
		int32_t L_48 = L_47;
		double L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_45)), 1))), (double)L_49);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = __this->___poly1;
		int32_t L_51 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52 = ___1_convexPoly;
		int32_t L_53 = V_15;
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		double L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_51))), (double)L_55);
	}

IL_00d1:
	{
		int32_t L_56 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_037e;
	}

IL_00dc:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_57 = V_1;
		int32_t L_58 = 0;
		double L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_60;
		L_60 = fabs(((double)il2cpp_codegen_subtract(L_59, (2.0))));
		double L_61 = V_6;
		if ((!(((double)L_60) <= ((double)L_61))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_62 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_63 = __this->___poly1;
		int32_t L_64 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_65 = ___1_convexPoly;
		int32_t L_66 = V_15;
		int32_t L_67 = L_66;
		double L_68 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_64)), 1))), (double)L_68);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69 = __this->___poly1;
		int32_t L_70 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_71 = ___1_convexPoly;
		int32_t L_72 = V_15;
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		double L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_70))), (double)L_74);
		int32_t L_75 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_037e;
	}

IL_0121:
	{
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_77 = V_1;
		int32_t L_78 = 1;
		double L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_80 = ___1_convexPoly;
		int32_t L_81 = V_15;
		int32_t L_82 = L_81;
		double L_83 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_84;
		L_84 = fabs(((double)il2cpp_codegen_subtract(L_79, L_83)));
		double L_85 = V_6;
		if ((!(((double)L_84) <= ((double)L_85))))
		{
			goto IL_0266;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_86 = V_1;
		int32_t L_87 = 2;
		double L_88 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_89 = ___1_convexPoly;
		int32_t L_90 = V_15;
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		double L_92 = (L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_93;
		L_93 = fabs(((double)il2cpp_codegen_subtract(L_88, L_92)));
		double L_94 = V_6;
		if ((!(((double)L_93) <= ((double)L_94))))
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_95 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_96) == ((uint32_t)1))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_98 = __this->___poly2;
		int32_t L_99 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_100 = ___1_convexPoly;
		int32_t L_101 = V_15;
		int32_t L_102 = L_101;
		double L_103 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		(L_98)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_99)), 1))), (double)L_103);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_104 = __this->___poly2;
		int32_t L_105 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_106 = ___1_convexPoly;
		int32_t L_107 = V_15;
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		double L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		(L_104)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_105))), (double)L_109);
		int32_t L_110 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_111 = __this->___poly1;
		int32_t L_112 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_113 = ___1_convexPoly;
		int32_t L_114 = V_15;
		int32_t L_115 = L_114;
		double L_116 = (L_113)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_115));
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_112)), 1))), (double)L_116);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_117 = __this->___poly1;
		int32_t L_118 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_119 = ___1_convexPoly;
		int32_t L_120 = V_15;
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		double L_122 = (L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
		(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_118))), (double)L_122);
		int32_t L_123 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		goto IL_037e;
	}

IL_01ac:
	{
		int32_t L_124 = V_0;
		if (L_124)
		{
			goto IL_037e;
		}
	}
	{
		int32_t L_125 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		int32_t L_126 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_127 = __this->___poly1;
		int32_t L_128 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_129 = ___1_convexPoly;
		int32_t L_130 = V_15;
		int32_t L_131 = L_130;
		double L_132 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_128)), 1))), (double)L_132);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_133 = __this->___poly1;
		int32_t L_134 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_135 = ___1_convexPoly;
		int32_t L_136 = V_15;
		int32_t L_137 = ((int32_t)il2cpp_codegen_add(L_136, 1));
		double L_138 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		(L_133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_134))), (double)L_138);
		int32_t L_139 = V_5;
		int32_t L_140 = ___0_numvertices;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_139, 4))) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_140)))))
		{
			goto IL_037e;
		}
	}
	{
		double L_141 = ___2_x1;
		double L_142 = ___3_y1;
		double L_143 = ___4_x2;
		double L_144 = ___5_y2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_145 = ___1_convexPoly;
		int32_t L_146 = V_5;
		int32_t L_147 = L_146;
		double L_148 = (L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_149 = ___1_convexPoly;
		int32_t L_150 = V_5;
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		double L_152 = (L_149)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153;
		L_153 = NewLocation_LinePointLocation_m0EE5E6C78896E1E384A7B910FA36EF427D1F1639(__this, L_141, L_142, L_143, L_144, L_148, L_152, NULL);
		V_16 = L_153;
		double L_154 = ___2_x1;
		double L_155 = ___3_y1;
		double L_156 = ___4_x2;
		double L_157 = ___5_y2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_158 = ___1_convexPoly;
		int32_t L_159 = V_5;
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_159, 4));
		double L_161 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_162 = ___1_convexPoly;
		int32_t L_163 = V_5;
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, 5));
		double L_165 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166;
		L_166 = NewLocation_LinePointLocation_m0EE5E6C78896E1E384A7B910FA36EF427D1F1639(__this, L_154, L_155, L_156, L_157, L_161, L_165, NULL);
		V_17 = L_166;
		int32_t L_167 = V_16;
		int32_t L_168 = V_17;
		if ((((int32_t)L_167) == ((int32_t)L_168)))
		{
			goto IL_037e;
		}
	}
	{
		int32_t L_169 = V_16;
		if (!L_169)
		{
			goto IL_037e;
		}
	}
	{
		int32_t L_170 = V_17;
		if (!L_170)
		{
			goto IL_037e;
		}
	}
	{
		int32_t L_171 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_171, 1));
		int32_t L_172 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_172, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_173 = __this->___poly2;
		int32_t L_174 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_175 = ___1_convexPoly;
		int32_t L_176 = V_15;
		int32_t L_177 = L_176;
		double L_178 = (L_175)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_177));
		(L_173)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_174)), 1))), (double)L_178);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_179 = __this->___poly2;
		int32_t L_180 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_181 = ___1_convexPoly;
		int32_t L_182 = V_15;
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 1));
		double L_184 = (L_181)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_183));
		(L_179)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_180))), (double)L_184);
		int32_t L_185 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_185, 1));
		goto IL_037e;
	}

IL_0266:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_186 = V_1;
		int32_t L_187 = 1;
		double L_188 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_187));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_189 = ___1_convexPoly;
		int32_t L_190 = V_5;
		int32_t L_191 = L_190;
		double L_192 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_191));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_193;
		L_193 = fabs(((double)il2cpp_codegen_subtract(L_188, L_192)));
		double L_194 = V_6;
		if ((!(((double)L_193) <= ((double)L_194))))
		{
			goto IL_028d;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_195 = V_1;
		int32_t L_196 = 2;
		double L_197 = (L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_196));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_198 = ___1_convexPoly;
		int32_t L_199 = V_5;
		int32_t L_200 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		double L_201 = (L_198)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_200));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_202;
		L_202 = fabs(((double)il2cpp_codegen_subtract(L_197, L_201)));
		double L_203 = V_6;
		if ((((double)L_202) <= ((double)L_203)))
		{
			goto IL_032a;
		}
	}

IL_028d:
	{
		int32_t L_204 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_205, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_206 = __this->___poly1;
		int32_t L_207 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_208 = V_1;
		int32_t L_209 = 1;
		double L_210 = (L_208)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_209));
		(L_206)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_207)), 1))), (double)L_210);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_211 = __this->___poly1;
		int32_t L_212 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_213 = V_1;
		int32_t L_214 = 2;
		double L_215 = (L_213)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_214));
		(L_211)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_212))), (double)L_215);
		int32_t L_216 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_216, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_217 = __this->___poly2;
		int32_t L_218 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_219 = V_1;
		int32_t L_220 = 1;
		double L_221 = (L_219)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_220));
		(L_217)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_218)), 1))), (double)L_221);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_222 = __this->___poly2;
		int32_t L_223 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_224 = V_1;
		int32_t L_225 = 2;
		double L_226 = (L_224)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_225));
		(L_222)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_223))), (double)L_226);
		int32_t L_227 = V_0;
		if ((!(((uint32_t)L_227) == ((uint32_t)1))))
		{
			goto IL_02fd;
		}
	}
	{
		int32_t L_228 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_228, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_229 = __this->___poly1;
		int32_t L_230 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_231 = ___1_convexPoly;
		int32_t L_232 = V_15;
		int32_t L_233 = L_232;
		double L_234 = (L_231)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_233));
		(L_229)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_230)), 1))), (double)L_234);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_235 = __this->___poly1;
		int32_t L_236 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_237 = ___1_convexPoly;
		int32_t L_238 = V_15;
		int32_t L_239 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		double L_240 = (L_237)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_239));
		(L_235)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_236))), (double)L_240);
		goto IL_0324;
	}

IL_02fd:
	{
		int32_t L_241 = V_0;
		if (L_241)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_242 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_242, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_243 = __this->___poly2;
		int32_t L_244 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_245 = ___1_convexPoly;
		int32_t L_246 = V_15;
		int32_t L_247 = L_246;
		double L_248 = (L_245)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_247));
		(L_243)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_244)), 1))), (double)L_248);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_249 = __this->___poly2;
		int32_t L_250 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_251 = ___1_convexPoly;
		int32_t L_252 = V_15;
		int32_t L_253 = ((int32_t)il2cpp_codegen_add(L_252, 1));
		double L_254 = (L_251)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_253));
		(L_249)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_250))), (double)L_254);
	}

IL_0324:
	{
		int32_t L_255 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_255, 1));
		goto IL_037e;
	}

IL_032a:
	{
		int32_t L_256 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_256, 1));
		int32_t L_257 = V_0;
		if ((!(((uint32_t)L_257) == ((uint32_t)1))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_258 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_258, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_259 = __this->___poly2;
		int32_t L_260 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_261 = ___1_convexPoly;
		int32_t L_262 = V_15;
		int32_t L_263 = L_262;
		double L_264 = (L_261)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_263));
		(L_259)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_260)), 1))), (double)L_264);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_265 = __this->___poly2;
		int32_t L_266 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_267 = ___1_convexPoly;
		int32_t L_268 = V_15;
		int32_t L_269 = ((int32_t)il2cpp_codegen_add(L_268, 1));
		double L_270 = (L_267)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_269));
		(L_265)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_266))), (double)L_270);
		goto IL_037e;
	}

IL_035a:
	{
		int32_t L_271 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_271, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_272 = __this->___poly1;
		int32_t L_273 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_274 = ___1_convexPoly;
		int32_t L_275 = V_15;
		int32_t L_276 = L_275;
		double L_277 = (L_274)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_276));
		(L_272)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_273)), 1))), (double)L_277);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_278 = __this->___poly1;
		int32_t L_279 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_280 = ___1_convexPoly;
		int32_t L_281 = V_15;
		int32_t L_282 = ((int32_t)il2cpp_codegen_add(L_281, 1));
		double L_283 = (L_280)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_282));
		(L_278)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_279))), (double)L_283);
	}

IL_037e:
	{
		int32_t L_284 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_284, 2));
	}

IL_0384:
	{
		int32_t L_285 = V_5;
		int32_t L_286 = ___0_numvertices;
		if ((((int32_t)L_285) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_286)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_287 = V_0;
		if (!L_287)
		{
			goto IL_039a;
		}
	}
	{
		int32_t L_288 = V_0;
		if ((((int32_t)L_288) == ((int32_t)2)))
		{
			goto IL_039a;
		}
	}
	{
		V_4 = 3;
		goto IL_03cf;
	}

IL_039a:
	{
		int32_t L_289 = V_0;
		if (!L_289)
		{
			goto IL_03a0;
		}
	}
	{
		G_B39_0 = 2;
		goto IL_03a1;
	}

IL_03a0:
	{
		G_B39_0 = 1;
	}

IL_03a1:
	{
		V_4 = G_B39_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_290 = __this->___poly1;
		int32_t L_291 = V_2;
		(L_290)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)((double)L_291));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_292 = __this->___poly2;
		int32_t L_293 = V_3;
		(L_292)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)((double)L_293));
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_294 = ___6_polys;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_295 = __this->___poly1;
		(L_294)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_295);
		int32_t L_296 = V_0;
		if ((!(((uint32_t)L_296) == ((uint32_t)2))))
		{
			goto IL_03cf;
		}
	}
	{
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_297 = ___6_polys;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_298 = __this->___poly2;
		(L_297)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_298);
	}

IL_03cf:
	{
		int32_t L_299 = V_4;
		return L_299;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NewLocation_LinePointLocation_m0EE5E6C78896E1E384A7B910FA36EF427D1F1639 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x, double ___5_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0 = ___3_y2;
		double L_1 = ___1_y1;
		double L_2 = ___2_x2;
		double L_3 = ___0_x1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = atan(((double)(((double)il2cpp_codegen_subtract(L_0, L_1))/((double)il2cpp_codegen_subtract(L_2, L_3)))));
		if ((!(((double)((double)(((double)il2cpp_codegen_multiply(L_4, (180.0)))/(3.1415926535897931)))) == ((double)(90.0)))))
		{
			goto IL_0042;
		}
	}
	{
		double L_5 = ___0_x1;
		double L_6 = ___4_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = fabs(((double)il2cpp_codegen_subtract(L_5, L_6)));
		if ((!(((double)L_7) <= ((double)(9.9999999999999994E-12)))))
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		double L_8 = ___1_y1;
		double L_9 = ___3_y2;
		double L_10 = ___1_y1;
		double L_11 = ___4_x;
		double L_12 = ___0_x1;
		double L_13 = ___2_x2;
		double L_14 = ___0_x1;
		double L_15 = ___5_y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = fabs(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_8, ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_9, L_10)), ((double)il2cpp_codegen_subtract(L_11, L_12))))/((double)il2cpp_codegen_subtract(L_13, L_14)))))), L_15)));
		if ((!(((double)L_16) <= ((double)(1.0E-50)))))
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		double L_17 = ___2_x2;
		double L_18 = ___0_x1;
		double L_19 = ___5_y;
		double L_20 = ___1_y1;
		double L_21 = ___3_y2;
		double L_22 = ___1_y1;
		double L_23 = ___4_x;
		double L_24 = ___0_x1;
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_17, L_18)), ((double)il2cpp_codegen_subtract(L_19, L_20)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_21, L_22)), ((double)il2cpp_codegen_subtract(L_23, L_24))))));
		double L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = fabs(((double)il2cpp_codegen_subtract(L_25, (0.0))));
		if ((!(((double)L_26) <= ((double)(9.9999999999999994E-12)))))
		{
			goto IL_0096;
		}
	}
	{
		return 0;
	}

IL_0096:
	{
		double L_27 = V_0;
		if ((!(((double)L_27) > ((double)(0.0)))))
		{
			goto IL_00a4;
		}
	}
	{
		return 1;
	}

IL_00a4:
	{
		return 2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_LineLineSegmentIntersection_mD2C5A92AD7EE19831CD48900992A91B7CB894A80 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, double ___6_x4, double ___7_y4, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___8_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		V_3 = (1.0E-13);
		double L_0 = ___7_y4;
		double L_1 = ___5_y3;
		double L_2 = ___2_x2;
		double L_3 = ___0_x1;
		double L_4 = ___6_x4;
		double L_5 = ___4_x3;
		double L_6 = ___3_y2;
		double L_7 = ___1_y1;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_0, L_1)), ((double)il2cpp_codegen_subtract(L_2, L_3)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_4, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_7))))));
		double L_8 = ___6_x4;
		double L_9 = ___4_x3;
		double L_10 = ___1_y1;
		double L_11 = ___5_y3;
		double L_12 = ___7_y4;
		double L_13 = ___5_y3;
		double L_14 = ___0_x1;
		double L_15 = ___4_x3;
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_8, L_9)), ((double)il2cpp_codegen_subtract(L_10, L_11)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_12, L_13)), ((double)il2cpp_codegen_subtract(L_14, L_15))))));
		double L_16 = ___2_x2;
		double L_17 = ___0_x1;
		double L_18 = ___1_y1;
		double L_19 = ___5_y3;
		double L_20 = ___3_y2;
		double L_21 = ___1_y1;
		double L_22 = ___0_x1;
		double L_23 = ___4_x3;
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_16, L_17)), ((double)il2cpp_codegen_subtract(L_18, L_19)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_20, L_21)), ((double)il2cpp_codegen_subtract(L_22, L_23))))));
		double L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_25;
		L_25 = fabs(((double)il2cpp_codegen_subtract(L_24, (0.0))));
		double L_26 = V_3;
		if ((!(((double)L_25) < ((double)L_26))))
		{
			goto IL_009f;
		}
	}
	{
		double L_27 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_28;
		L_28 = fabs(((double)il2cpp_codegen_subtract(L_27, (0.0))));
		double L_29 = V_3;
		if ((!(((double)L_28) < ((double)L_29))))
		{
			goto IL_0090;
		}
	}
	{
		double L_30 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_31;
		L_31 = fabs(((double)il2cpp_codegen_subtract(L_30, (0.0))));
		double L_32 = V_3;
		if ((!(((double)L_31) < ((double)L_32))))
		{
			goto IL_0090;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_33 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_34 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_33);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(2.0));
		return;
	}

IL_0090:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_35 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_35);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		return;
	}

IL_009f:
	{
		double L_37 = V_1;
		double L_38 = V_2;
		V_1 = ((double)(L_37/L_38));
		double L_39 = V_0;
		double L_40 = V_2;
		V_0 = ((double)(L_39/L_40));
		double L_41 = V_1;
		double L_42 = V_3;
		if ((((double)L_41) < ((double)((-L_42)))))
		{
			goto IL_00ba;
		}
	}
	{
		double L_43 = V_1;
		double L_44 = V_3;
		if ((!(((double)L_43) > ((double)((double)il2cpp_codegen_add((1.0), L_44))))))
		{
			goto IL_00c9;
		}
	}

IL_00ba:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_45 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_45);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		return;
	}

IL_00c9:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_47 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_47);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(1.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_49 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_49);
		double L_51 = ___0_x1;
		double L_52 = V_0;
		double L_53 = ___2_x2;
		double L_54 = ___0_x1;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_51, ((double)il2cpp_codegen_multiply(L_52, ((double)il2cpp_codegen_subtract(L_53, L_54)))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_55 = ___8_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_56 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_55);
		double L_57 = ___1_y1;
		double L_58 = V_0;
		double L_59 = ___3_y2;
		double L_60 = ___1_y1;
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_57, ((double)il2cpp_codegen_multiply(L_58, ((double)il2cpp_codegen_subtract(L_59, L_60)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_FindPolyCentroid_mE6ED906E03E7E5373A822D1C5857457948E99AC7 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, int32_t ___0_numpoints, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_points, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___2_centroid, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_0 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_0);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_2 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_2);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)(0.0));
		V_0 = 0;
		goto IL_003c;
	}

IL_001e:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_4 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_6 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_6);
		int32_t L_8 = 0;
		double L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ___1_points;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		double L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_9, L_13)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_14 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_14);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_16 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_16);
		int32_t L_18 = 1;
		double L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = ___1_points;
		int32_t L_21 = V_0;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		double L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_19, L_23)));
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 2));
	}

IL_003c:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___0_numpoints;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_26)))))
		{
			goto IL_001e;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_27 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_28 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_27);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_29 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_30 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_29);
		int32_t L_31 = 0;
		double L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = ___0_numpoints;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)((double)(L_32/((double)L_33))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_34 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_34);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_36 = ___2_centroid;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_36);
		int32_t L_38 = 1;
		double L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = ___0_numpoints;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)(L_39/((double)L_40))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_CircleLineIntersection_mEF2D3A76F8FCC1B615DE86D0A679882E41ECB688 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, double ___6_r, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___7_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	{
		double L_0 = ___2_x2;
		double L_1 = ___0_x1;
		double L_2 = ___2_x2;
		double L_3 = ___0_x1;
		double L_4 = ___3_y2;
		double L_5 = ___1_y1;
		double L_6 = ___3_y2;
		double L_7 = ___1_y1;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_0, L_1)), ((double)il2cpp_codegen_subtract(L_2, L_3)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_4, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_7))))));
		double L_8 = ___2_x2;
		double L_9 = ___0_x1;
		double L_10 = ___0_x1;
		double L_11 = ___4_x3;
		double L_12 = ___3_y2;
		double L_13 = ___1_y1;
		double L_14 = ___1_y1;
		double L_15 = ___5_y3;
		V_1 = ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_8, L_9)), ((double)il2cpp_codegen_subtract(L_10, L_11)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_12, L_13)), ((double)il2cpp_codegen_subtract(L_14, L_15))))))));
		double L_16 = ___4_x3;
		double L_17 = ___4_x3;
		double L_18 = ___5_y3;
		double L_19 = ___5_y3;
		double L_20 = ___0_x1;
		double L_21 = ___0_x1;
		double L_22 = ___1_y1;
		double L_23 = ___1_y1;
		double L_24 = ___4_x3;
		double L_25 = ___0_x1;
		double L_26 = ___5_y3;
		double L_27 = ___1_y1;
		double L_28 = ___6_r;
		double L_29 = ___6_r;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_16, L_17)), ((double)il2cpp_codegen_multiply(L_18, L_19)))), ((double)il2cpp_codegen_multiply(L_20, L_21)))), ((double)il2cpp_codegen_multiply(L_22, L_23)))), ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_24, L_25)), ((double)il2cpp_codegen_multiply(L_26, L_27)))))))), ((double)il2cpp_codegen_multiply(L_28, L_29))));
		double L_30 = V_1;
		double L_31 = V_1;
		double L_32 = V_0;
		double L_33 = V_2;
		V_4 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_30, L_31)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((4.0), L_32)), L_33))));
		double L_34 = V_4;
		if ((!(((double)L_34) < ((double)(0.0)))))
		{
			goto IL_008c;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_35 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_35);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		return;
	}

IL_008c:
	{
		double L_37 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_38;
		L_38 = fabs(((double)il2cpp_codegen_subtract(L_37, (0.0))));
		if ((!(((double)L_38) < ((double)(1.0E-50)))))
		{
			goto IL_00df;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_39 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_39);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(1.0));
		double L_41 = V_1;
		double L_42 = V_0;
		V_3 = ((double)(((-L_41))/((double)il2cpp_codegen_multiply((2.0), L_42))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_43 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_43);
		double L_45 = ___0_x1;
		double L_46 = V_3;
		double L_47 = ___2_x2;
		double L_48 = ___0_x1;
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_45, ((double)il2cpp_codegen_multiply(L_46, ((double)il2cpp_codegen_subtract(L_47, L_48)))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_49 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_49);
		double L_51 = ___1_y1;
		double L_52 = V_3;
		double L_53 = ___3_y2;
		double L_54 = ___1_y1;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_51, ((double)il2cpp_codegen_multiply(L_52, ((double)il2cpp_codegen_subtract(L_53, L_54)))))));
		return;
	}

IL_00df:
	{
		double L_55 = V_4;
		if ((!(((double)L_55) > ((double)(0.0)))))
		{
			goto IL_0179;
		}
	}
	{
		double L_56 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_57;
		L_57 = fabs(((double)il2cpp_codegen_subtract(L_56, (0.0))));
		if ((((double)L_57) < ((double)(1.0E-50))))
		{
			goto IL_0179;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_58 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_59 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_58);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(2.0));
		double L_60 = V_1;
		double L_61 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_62;
		L_62 = sqrt(L_61);
		double L_63 = V_0;
		V_3 = ((double)(((double)il2cpp_codegen_add(((-L_60)), L_62))/((double)il2cpp_codegen_multiply((2.0), L_63))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_64 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_65 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_64);
		double L_66 = ___0_x1;
		double L_67 = V_3;
		double L_68 = ___2_x2;
		double L_69 = ___0_x1;
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_66, ((double)il2cpp_codegen_multiply(L_67, ((double)il2cpp_codegen_subtract(L_68, L_69)))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_70 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_71 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_70);
		double L_72 = ___1_y1;
		double L_73 = V_3;
		double L_74 = ___3_y2;
		double L_75 = ___1_y1;
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_72, ((double)il2cpp_codegen_multiply(L_73, ((double)il2cpp_codegen_subtract(L_74, L_75)))))));
		double L_76 = V_1;
		double L_77 = V_4;
		double L_78;
		L_78 = sqrt(L_77);
		double L_79 = V_0;
		V_3 = ((double)(((double)il2cpp_codegen_subtract(((-L_76)), L_78))/((double)il2cpp_codegen_multiply((2.0), L_79))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_80 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_81 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_80);
		double L_82 = ___0_x1;
		double L_83 = V_3;
		double L_84 = ___2_x2;
		double L_85 = ___0_x1;
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)((double)il2cpp_codegen_add(L_82, ((double)il2cpp_codegen_multiply(L_83, ((double)il2cpp_codegen_subtract(L_84, L_85)))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_86 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_87 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_86);
		double L_88 = ___1_y1;
		double L_89 = V_3;
		double L_90 = ___3_y2;
		double L_91 = ___1_y1;
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (double)((double)il2cpp_codegen_add(L_88, ((double)il2cpp_codegen_multiply(L_89, ((double)il2cpp_codegen_subtract(L_90, L_91)))))));
		return;
	}

IL_0179:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_92 = ___7_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_93 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_92);
		(L_93)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_ChooseCorrectPoint_mD2F68109B1AF973C0953C2A9A7B6058C2C53B627 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, bool ___6_isObtuse, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		double L_0 = ___2_x2;
		double L_1 = ___4_x3;
		double L_2 = ___2_x2;
		double L_3 = ___4_x3;
		double L_4 = ___3_y2;
		double L_5 = ___5_y3;
		double L_6 = ___3_y2;
		double L_7 = ___5_y3;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_0, L_1)), ((double)il2cpp_codegen_subtract(L_2, L_3)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_4, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_7))))));
		double L_8 = ___2_x2;
		double L_9 = ___0_x1;
		double L_10 = ___2_x2;
		double L_11 = ___0_x1;
		double L_12 = ___3_y2;
		double L_13 = ___1_y1;
		double L_14 = ___3_y2;
		double L_15 = ___1_y1;
		V_1 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_8, L_9)), ((double)il2cpp_codegen_subtract(L_10, L_11)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_12, L_13)), ((double)il2cpp_codegen_subtract(L_14, L_15))))));
		bool L_16 = ___6_isObtuse;
		if (!L_16)
		{
			goto IL_0038;
		}
	}
	{
		double L_17 = V_1;
		double L_18 = V_0;
		if ((!(((double)L_17) >= ((double)L_18))))
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_0034:
	{
		V_2 = (bool)0;
		goto IL_0042;
	}

IL_0038:
	{
		double L_19 = V_1;
		double L_20 = V_0;
		if ((!(((double)L_19) < ((double)L_20))))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_0040:
	{
		V_2 = (bool)0;
	}

IL_0042:
	{
		bool L_21 = V_2;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLocation_PointBetweenPoints_mF10FAF78165081AF744A24C918C4E5916BA62981 (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x, double ___5_y, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___6_p, const RuntimeMethod* method) 
{
	{
		double L_0 = ___2_x2;
		double L_1 = ___4_x;
		double L_2 = ___2_x2;
		double L_3 = ___4_x;
		double L_4 = ___3_y2;
		double L_5 = ___5_y;
		double L_6 = ___3_y2;
		double L_7 = ___5_y;
		double L_8 = ___2_x2;
		double L_9 = ___0_x1;
		double L_10 = ___2_x2;
		double L_11 = ___0_x1;
		double L_12 = ___3_y2;
		double L_13 = ___1_y1;
		double L_14 = ___3_y2;
		double L_15 = ___1_y1;
		if ((!(((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_0, L_1)), ((double)il2cpp_codegen_subtract(L_2, L_3)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_4, L_5)), ((double)il2cpp_codegen_subtract(L_6, L_7))))))) < ((double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_8, L_9)), ((double)il2cpp_codegen_subtract(L_10, L_11)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_12, L_13)), ((double)il2cpp_codegen_subtract(L_14, L_15))))))))))
		{
			goto IL_005f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_16 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_16);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(1.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_18 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_18);
		double L_20 = ___4_x;
		double L_21 = ___2_x2;
		double L_22 = ___4_x;
		double L_23 = ___2_x2;
		double L_24 = ___5_y;
		double L_25 = ___3_y2;
		double L_26 = ___5_y;
		double L_27 = ___3_y2;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_20, L_21)), ((double)il2cpp_codegen_subtract(L_22, L_23)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_24, L_25)), ((double)il2cpp_codegen_subtract(L_26, L_27)))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_28 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_28);
		double L_30 = ___4_x;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)L_30);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_31 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_31);
		double L_33 = ___5_y;
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)L_33);
		return;
	}

IL_005f:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_34 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_34);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_36 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_36);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (double)(0.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_38 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_38);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (double)(0.0));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_40 = ___6_p;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_41 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_40);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (double)(0.0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewLocation_IsBadTriangleAngle_mF5A61BB34D26D2C51D52C4803FE367B30BB69E0B (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_x1, double ___1_y1, double ___2_x2, double ___3_y2, double ___4_x3, double ___5_y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	{
		double L_0 = ___0_x1;
		double L_1 = ___2_x2;
		V_0 = ((double)il2cpp_codegen_subtract(L_0, L_1));
		double L_2 = ___1_y1;
		double L_3 = ___3_y2;
		V_1 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		double L_4 = ___2_x2;
		double L_5 = ___4_x3;
		V_2 = ((double)il2cpp_codegen_subtract(L_4, L_5));
		double L_6 = ___3_y2;
		double L_7 = ___5_y3;
		V_3 = ((double)il2cpp_codegen_subtract(L_6, L_7));
		double L_8 = ___4_x3;
		double L_9 = ___0_x1;
		V_4 = ((double)il2cpp_codegen_subtract(L_8, L_9));
		double L_10 = ___5_y3;
		double L_11 = ___1_y1;
		V_5 = ((double)il2cpp_codegen_subtract(L_10, L_11));
		double L_12 = V_0;
		double L_13 = V_0;
		V_6 = ((double)il2cpp_codegen_multiply(L_12, L_13));
		double L_14 = V_1;
		double L_15 = V_1;
		V_7 = ((double)il2cpp_codegen_multiply(L_14, L_15));
		double L_16 = V_2;
		double L_17 = V_2;
		V_8 = ((double)il2cpp_codegen_multiply(L_16, L_17));
		double L_18 = V_3;
		double L_19 = V_3;
		V_9 = ((double)il2cpp_codegen_multiply(L_18, L_19));
		double L_20 = V_4;
		double L_21 = V_4;
		double L_22 = V_5;
		double L_23 = V_5;
		V_10 = ((double)il2cpp_codegen_multiply(L_22, L_23));
		double L_24 = V_6;
		double L_25 = V_7;
		V_11 = ((double)il2cpp_codegen_add(L_24, L_25));
		double L_26 = V_8;
		double L_27 = V_9;
		V_12 = ((double)il2cpp_codegen_add(L_26, L_27));
		double L_28 = V_10;
		V_13 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_20, L_21)), L_28));
		double L_29 = V_11;
		double L_30 = V_12;
		if ((!(((double)L_29) < ((double)L_30))))
		{
			goto IL_0079;
		}
	}
	{
		double L_31 = V_11;
		double L_32 = V_13;
		if ((!(((double)L_31) < ((double)L_32))))
		{
			goto IL_0079;
		}
	}
	{
		double L_33 = V_2;
		double L_34 = V_4;
		double L_35 = V_3;
		double L_36 = V_5;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_33, L_34)), ((double)il2cpp_codegen_multiply(L_35, L_36))));
		double L_37 = V_14;
		double L_38 = V_14;
		double L_39 = V_12;
		double L_40 = V_13;
		V_14 = ((double)(((double)il2cpp_codegen_multiply(L_37, L_38))/((double)il2cpp_codegen_multiply(L_39, L_40))));
		goto IL_00af;
	}

IL_0079:
	{
		double L_41 = V_12;
		double L_42 = V_13;
		if ((!(((double)L_41) < ((double)L_42))))
		{
			goto IL_0099;
		}
	}
	{
		double L_43 = V_0;
		double L_44 = V_4;
		double L_45 = V_1;
		double L_46 = V_5;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_43, L_44)), ((double)il2cpp_codegen_multiply(L_45, L_46))));
		double L_47 = V_14;
		double L_48 = V_14;
		double L_49 = V_11;
		double L_50 = V_13;
		V_14 = ((double)(((double)il2cpp_codegen_multiply(L_47, L_48))/((double)il2cpp_codegen_multiply(L_49, L_50))));
		goto IL_00af;
	}

IL_0099:
	{
		double L_51 = V_0;
		double L_52 = V_2;
		double L_53 = V_1;
		double L_54 = V_3;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_51, L_52)), ((double)il2cpp_codegen_multiply(L_53, L_54))));
		double L_55 = V_14;
		double L_56 = V_14;
		double L_57 = V_11;
		double L_58 = V_12;
		V_14 = ((double)(((double)il2cpp_codegen_multiply(L_55, L_56))/((double)il2cpp_codegen_multiply(L_57, L_58))));
	}

IL_00af:
	{
		double L_59 = V_11;
		double L_60 = V_12;
		if ((!(((double)L_59) > ((double)L_60))))
		{
			goto IL_00dc;
		}
	}
	{
		double L_61 = V_11;
		double L_62 = V_13;
		if ((!(((double)L_61) > ((double)L_62))))
		{
			goto IL_00dc;
		}
	}
	{
		double L_63 = V_12;
		double L_64 = V_13;
		double L_65 = V_11;
		double L_66 = V_12;
		double L_67 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_68;
		L_68 = sqrt(((double)il2cpp_codegen_multiply(L_66, L_67)));
		V_15 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_63, L_64)), L_65))/((double)il2cpp_codegen_multiply((2.0), L_68))));
		goto IL_0122;
	}

IL_00dc:
	{
		double L_69 = V_12;
		double L_70 = V_13;
		if ((!(((double)L_69) > ((double)L_70))))
		{
			goto IL_0103;
		}
	}
	{
		double L_71 = V_11;
		double L_72 = V_13;
		double L_73 = V_12;
		double L_74 = V_11;
		double L_75 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_76;
		L_76 = sqrt(((double)il2cpp_codegen_multiply(L_74, L_75)));
		V_15 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_71, L_72)), L_73))/((double)il2cpp_codegen_multiply((2.0), L_76))));
		goto IL_0122;
	}

IL_0103:
	{
		double L_77 = V_11;
		double L_78 = V_12;
		double L_79 = V_13;
		double L_80 = V_11;
		double L_81 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_82;
		L_82 = sqrt(((double)il2cpp_codegen_multiply(L_80, L_81)));
		V_15 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_77, L_78)), L_79))/((double)il2cpp_codegen_multiply((2.0), L_82))));
	}

IL_0122:
	{
		double L_83 = V_14;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_84 = __this->___behavior;
		double L_85 = L_84->___goodAngle;
		if ((((double)L_83) > ((double)L_85)))
		{
			goto IL_0156;
		}
	}
	{
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_86 = __this->___behavior;
		double L_87;
		L_87 = Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline(L_86, NULL);
		if ((((double)L_87) == ((double)(0.0))))
		{
			goto IL_0158;
		}
	}
	{
		double L_88 = V_15;
		Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* L_89 = __this->___behavior;
		double L_90 = L_89->___maxGoodAngle;
		if ((!(((double)L_88) < ((double)L_90))))
		{
			goto IL_0158;
		}
	}

IL_0156:
	{
		return (bool)1;
	}

IL_0158:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NewLocation_MinDistanceToNeighbor_m5CE8CB64A7E13BD5F65AB2A9174BEDA5F17C1A5C (NewLocation_tFDA92C5697B75F462CE5D07565124958F8AB784E* __this, double ___0_newlocX, double ___1_newlocY, Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* ___2_searchtri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_2 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_3 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_4 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_5 = NULL;
	Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* V_6 = NULL;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* V_11 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2));
		V_1 = 3;
		double L_0 = ___0_newlocX;
		double L_1 = ___1_newlocY;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_2 = (Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)il2cpp_codegen_object_new(Point_tB0B12235C8D705C589B1A884BB309B16816B36CC_il2cpp_TypeInfo_var);
		Point__ctor_m7B46E4C4BC125EA0D962A70708090A2AB1599A6B(L_2, L_0, L_1, NULL);
		V_11 = L_2;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_3 = ___2_searchtri;
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_4;
		L_4 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5(L_3, NULL);
		V_5 = L_4;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_5 = ___2_searchtri;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_6;
		L_6 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12(L_5, NULL);
		V_6 = L_6;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_7 = V_5;
		double L_8 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_7)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_9 = V_11;
		double L_10 = L_9->___x;
		if ((!(((double)L_8) == ((double)L_10))))
		{
			goto IL_0052;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_11 = V_5;
		double L_12 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_11)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_13 = V_11;
		double L_14 = L_13->___y;
		if ((!(((double)L_12) == ((double)L_14))))
		{
			goto IL_0052;
		}
	}
	{
		V_1 = 2;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_15 = ___2_searchtri;
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Copy_m3C2E3199FDBBC9B5DCB5D7D6309AF4F95601A374(L_15, (&V_0), NULL);
		goto IL_0148;
	}

IL_0052:
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_16 = V_6;
		double L_17 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_16)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_18 = V_11;
		double L_19 = L_18->___x;
		if ((!(((double)L_17) == ((double)L_19))))
		{
			goto IL_0087;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_20 = V_6;
		double L_21 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_20)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_22 = V_11;
		double L_23 = L_22->___y;
		if ((!(((double)L_21) == ((double)L_23))))
		{
			goto IL_0087;
		}
	}
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_24 = ___2_searchtri;
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Lnext_m194C8E337B2A1EF0934AE43B13874B372A7A6F26(L_24, NULL);
		V_1 = 2;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_25 = ___2_searchtri;
		Otri_Copy_m3C2E3199FDBBC9B5DCB5D7D6309AF4F95601A374(L_25, (&V_0), NULL);
		goto IL_0148;
	}

IL_0087:
	{
		RuntimeObject* L_26 = __this->___predicates;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_27 = V_5;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_28 = V_6;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_29 = V_11;
		double L_30;
		L_30 = InterfaceFuncInvoker3< double, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*, Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* >::Invoke(0, IPredicates_tA00F0DCAE3E76EBE0CDFBA745351DBA67C926D18_il2cpp_TypeInfo_var, L_26, L_27, L_28, L_29);
		V_10 = L_30;
		double L_31 = V_10;
		if ((!(((double)L_31) < ((double)(0.0)))))
		{
			goto IL_00cd;
		}
	}
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_32 = ___2_searchtri;
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Sym_mD222BADDC9D86EF8C3DF0AF231B019562B258BAF(L_32, NULL);
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_33 = ___2_searchtri;
		Otri_Copy_m3C2E3199FDBBC9B5DCB5D7D6309AF4F95601A374(L_33, (&V_0), NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_34 = __this->___mesh;
		TriangleLocator_t26D2A76DE418DC93F19C87F903589CEC8FBA6183* L_35 = L_34->___locator;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_36 = V_11;
		int32_t L_37;
		L_37 = TriangleLocator_PreciseLocate_mCF55ECC44090933C20826D390E73D2D5B071A433(L_35, L_36, (&V_0), (bool)0, NULL);
		V_1 = L_37;
		goto IL_0148;
	}

IL_00cd:
	{
		double L_38 = V_10;
		if ((!(((double)L_38) == ((double)(0.0)))))
		{
			goto IL_012a;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_39 = V_5;
		double L_40 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_39)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_41 = V_11;
		double L_42 = L_41->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_43 = V_11;
		double L_44 = L_43->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_45 = V_6;
		double L_46 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_45)->___x;
		if ((!(((uint32_t)((((double)L_40) < ((double)L_42))? 1 : 0)) == ((uint32_t)((((double)L_44) < ((double)L_46))? 1 : 0)))))
		{
			goto IL_0148;
		}
	}
	{
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_47 = V_5;
		double L_48 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_47)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_49 = V_11;
		double L_50 = L_49->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_51 = V_11;
		double L_52 = L_51->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_53 = V_6;
		double L_54 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_53)->___y;
		if ((!(((uint32_t)((((double)L_48) < ((double)L_50))? 1 : 0)) == ((uint32_t)((((double)L_52) < ((double)L_54))? 1 : 0)))))
		{
			goto IL_0148;
		}
	}
	{
		V_1 = 1;
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_55 = ___2_searchtri;
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Copy_m3C2E3199FDBBC9B5DCB5D7D6309AF4F95601A374(L_55, (&V_0), NULL);
		goto IL_0148;
	}

IL_012a:
	{
		Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2* L_56 = ___2_searchtri;
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Otri_Copy_m3C2E3199FDBBC9B5DCB5D7D6309AF4F95601A374(L_56, (&V_0), NULL);
		Mesh_t0162D502957612732BB2D09BD65238B81BC7D639* L_57 = __this->___mesh;
		TriangleLocator_t26D2A76DE418DC93F19C87F903589CEC8FBA6183* L_58 = L_57->___locator;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_59 = V_11;
		int32_t L_60;
		L_60 = TriangleLocator_PreciseLocate_mCF55ECC44090933C20826D390E73D2D5B071A433(L_58, L_59, (&V_0), (bool)0, NULL);
		V_1 = L_60;
	}

IL_0148:
	{
		int32_t L_61 = V_1;
		if ((((int32_t)L_61) == ((int32_t)2)))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_62 = V_1;
		if ((!(((uint32_t)L_62) == ((uint32_t)3))))
		{
			goto IL_015a;
		}
	}

IL_0150:
	{
		return (0.0);
	}

IL_015a:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_t4D2A23437D65EAB82249BCB6C8F8AC22564986E2_il2cpp_TypeInfo_var);
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_63;
		L_63 = Otri_Org_m9748149E8A8E58815CF22BBFD98422392637D5D5((&V_0), NULL);
		V_2 = L_63;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_64;
		L_64 = Otri_Dest_mE3F3324290CD408247F7D13BD695931EA285EB12((&V_0), NULL);
		V_3 = L_64;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_65;
		L_65 = Otri_Apex_m47CEA708E412834ECBDD1B76BE5B9737BEE8C1D9((&V_0), NULL);
		V_4 = L_65;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_66 = V_2;
		double L_67 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_66)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_68 = V_11;
		double L_69 = L_68->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_70 = V_2;
		double L_71 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_70)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_72 = V_11;
		double L_73 = L_72->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_74 = V_2;
		double L_75 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_74)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_76 = V_11;
		double L_77 = L_76->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_78 = V_2;
		double L_79 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_78)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_80 = V_11;
		double L_81 = L_80->___y;
		V_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_67, L_69)), ((double)il2cpp_codegen_subtract(L_71, L_73)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_75, L_77)), ((double)il2cpp_codegen_subtract(L_79, L_81))))));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_82 = V_3;
		double L_83 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_82)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_84 = V_11;
		double L_85 = L_84->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_86 = V_3;
		double L_87 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_86)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_88 = V_11;
		double L_89 = L_88->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_90 = V_3;
		double L_91 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_90)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_92 = V_11;
		double L_93 = L_92->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_94 = V_3;
		double L_95 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_94)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_96 = V_11;
		double L_97 = L_96->___y;
		V_8 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_83, L_85)), ((double)il2cpp_codegen_subtract(L_87, L_89)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_91, L_93)), ((double)il2cpp_codegen_subtract(L_95, L_97))))));
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_98 = V_4;
		double L_99 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_98)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_100 = V_11;
		double L_101 = L_100->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_102 = V_4;
		double L_103 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_102)->___x;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_104 = V_11;
		double L_105 = L_104->___x;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_106 = V_4;
		double L_107 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_106)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_108 = V_11;
		double L_109 = L_108->___y;
		Vertex_tD204F3CCC6BC453F12430867B099686E501C0172* L_110 = V_4;
		double L_111 = ((Point_tB0B12235C8D705C589B1A884BB309B16816B36CC*)L_110)->___y;
		Point_tB0B12235C8D705C589B1A884BB309B16816B36CC* L_112 = V_11;
		double L_113 = L_112->___y;
		V_9 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_99, L_101)), ((double)il2cpp_codegen_subtract(L_103, L_105)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_107, L_109)), ((double)il2cpp_codegen_subtract(L_111, L_113))))));
		double L_114 = V_7;
		double L_115 = V_8;
		if ((!(((double)L_114) <= ((double)L_115))))
		{
			goto IL_023d;
		}
	}
	{
		double L_116 = V_7;
		double L_117 = V_9;
		if ((!(((double)L_116) <= ((double)L_117))))
		{
			goto IL_023d;
		}
	}
	{
		double L_118 = V_7;
		return L_118;
	}

IL_023d:
	{
		double L_119 = V_8;
		double L_120 = V_9;
		if ((!(((double)L_119) <= ((double)L_120))))
		{
			goto IL_0246;
		}
	}
	{
		double L_121 = V_8;
		return L_121;
	}

IL_0246:
	{
		double L_122 = V_9;
		return L_122;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		uint8_t L_3 = __this->___r;
		V_2 = L_3;
		goto IL_005d;
	}

IL_0026:
	{
		uint8_t L_4 = __this->___g;
		V_2 = L_4;
		goto IL_005d;
	}

IL_002f:
	{
		uint8_t L_5 = __this->___b;
		V_2 = L_5;
		goto IL_005d;
	}

IL_0038:
	{
		uint8_t L_6 = __this->___a;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0041:
	{
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_index), NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF64478715743E8EAF21C1461DDEFC2FC6FB32D5B)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FE2D0640908C4E0A09AF5BF88E4681FB8257B4C)), NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Color32_get_Item_m77C4046EF0C7A2838712AA487E18908A1526C8A5_RuntimeMethod_var)));
	}

IL_005d:
	{
		uint8_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MaxAngle_mA3DA0F26E75ED0C44155CDC615EC362562F2589D_inline (Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___maxAngle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mEBA7DA45F2E0FF4F0BA794D328C9C0E69A0DA119_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behavior_tEFA12563DB879458DABB8386013B43577C16B59B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Behavior_tEFA12563DB879458DABB8386013B43577C16B59B_StaticFields*)il2cpp_codegen_static_fields_for(Behavior_tEFA12563DB879458DABB8386013B43577C16B59B_il2cpp_TypeInfo_var))->___U3CNoExactU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MinAngle_m98B09A0F5065C54DDE2EBB4E980AE5944C5B262E_inline (Behavior_tEFA12563DB879458DABB8386013B43577C16B59B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___minAngle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___0_item;
		List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_1;
		uint32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_8);
		return;
	}

IL_0034:
	{
		uint32_t L_9 = ___0_item;
		List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA30526AC2097A68939350DBA860B7D2B0EEE1585_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
